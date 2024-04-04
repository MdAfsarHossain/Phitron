class Bank:
    def __init__(self):
        self.user_list = []
        self.total_loan_balance = 0
        self.total_balance = 0
        self.loan_feature = True

    def create_account(self, email, password):
        newUser = User(email, password)
        self.user_list.append(newUser)
        print(f"{'*' * 50}\nCongratulations!! Accounts Creates Successfully!\n{'*' * 50}")
        return newUser

    def total_balance_update(self, amount):
        self.total_balance += amount

    def deposit(self, newUser, amount):
        newUser.deposit(amount)
        self.total_balance += amount

    def withdraw(self, newUser, amount):
        self.total_balance -= amount
        # print("Total Balance: Bank: ", self.total_balance)
        newUser.withdraw(amount, self.total_balance)

    def transfer_money(self, from_account, to_account, amount):
        self.from_account = from_account
        self.to_account = to_account
        from_account.transfer_money(to_account, amount)

    def available_balance(self, user):
        self.user = user
        print(f"In Your account you have {self.user.balance} taka!!\n")

    def transaction_history(self, user):
        self.user = user
        print(user.transaction_history)

    def take_loan(self, user):
        self.user = user
        if self.loan_feature:
            loan_balance = user.balance * 2
            if loan_balance <= self.total_balance:
                self.total_loan_balance += loan_balance
                self.total_balance -= loan_balance
                user.take_loan(loan_balance)
            else:
                print(f'You can not take the loan, cause bank does not have enough money!')
        else:
            print("Loan Featured is OFF")

    def take_loan_on_off(self):
        if self.loan_feature:
            self.loan_feature = False
        else:
            self.loan_feature = True

    def check_total_loan_balance(self):
        print(f"Total Loan Balance are: {self.total_loan_balance}")


class Admin:
    def __init__(self, name, password):
        self.name = name
        self.password = password


class User:
    def __init__(self, email, password):
        # super().__init__()
        self.email = email
        self.password = password
        self.balance = 0
        self.min_withdraw = 100
        self.max_withdraw = 20000
        self.transaction_history = []

    def deposit(self, amount):
        self.amount = amount

        if amount > 0:
            self.balance += amount
            print(f'Congratulations!!\n{amount} taka added in your account.')
            self.transaction_history.append({
                "type": "Deposit",
                "amount": amount
            })

    def withdraw(self, amount, totalBalance):
        self.totalBalance = totalBalance
        # self.newUser = newUser
        # self.deposit_money = 0
        # dictionary = dict(newUser.transaction_history)
        # for type_d, money in dictionary.items():
        #     if type_d == "Deposit":
        #         # self.deposit_money += money
        #         print(type_d, money)
        # print(f"Total Deposit: {self.deposit_money}")

        # print("Total Balance: User: ", self.totalBalance)

        if amount <= self.balance:
            if amount < totalBalance:
                if amount < self.min_withdraw:
                    print(f'You can not withdraw below {self.min_withdraw}')
                elif amount > self.max_withdraw:
                    print(f'You can not withdraw more than {self.max_withdraw}')
                else:
                    self.balance -= amount
                    print(f'You withdraw {amount} taka!\nHere is your money {amount}\n')
                    self.transaction_history.append({
                        "type": "Withdraw",
                        "amount": amount
                })
            else:
                print("The bank is bankrupt!")

        else:
            print(f'Sorry you have not enough money for withdraw!!')

    def transfer_money(self, trans_user_name, amount):
        self.trans_user_name = trans_user_name
        self.trans_user_name.balance += amount
        self.balance -= amount
        print(f"Transfer {amount} taka from Your account!")

        self.transaction_history.append({
            "type": "Transaction",
            "amount": amount
        })
        trans_user_name.transaction_history.append({
            "type": "Deposit",
            "amount": amount
        })

    def take_loan(self, amount):
        self.balance += amount
        self.transaction_history.append({
            "type": "Loan",
            "amount": amount
        })


bank = Bank()
user1 = bank.create_account("afsar", 123)
user2 = bank.create_account("tarek", 456)
user3 = bank.create_account("anwar", 789)

bank.deposit(user1, 5000)
bank.withdraw(user1, 2000)
bank.deposit(user1, 1000)

bank.available_balance(user1)
bank.transfer_money(user1, user2, 1000)
bank.available_balance(user1)
bank.available_balance(user2)
bank.deposit(user2, 5000)
bank.deposit(user2, 2000)
bank.deposit(user2, 1000)


admin = Admin("rohim", 147)

bank.transaction_history(user1)
bank.transaction_history(user2)

bank.take_loan(user1)
bank.transaction_history(user1)

bank.available_balance(user1)
print(f"Total available balance of the bank: {bank.total_balance}")
bank.take_loan(user1)
print(f"Total available balance of the bank: {bank.total_balance}")
bank.take_loan_on_off()
bank.take_loan(user1)

bank.deposit(user2, 2000)
print(f"Total available balance of the bank: {bank.total_balance}")


bank.check_total_loan_balance()
bank.withdraw(user2, 2000)
bank.withdraw(user1, 6000)
bank.deposit(user3, 15000)
bank.take_loan(user2)
bank.available_balance(user2)
print(bank.total_balance)




