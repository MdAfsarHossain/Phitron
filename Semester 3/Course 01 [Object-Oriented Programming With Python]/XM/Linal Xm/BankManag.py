class Admin:

    user_list = []
    total_balance = []

    def __init__(self):
        # self.x = 1
        # if self.x == 1:
        #     self.total_balance = 0
        #     self.x += 1
        self.total_loan_balance = 0
        self.loan_feature = True

    def create_account(self, email, password):
        self.email = email
        self.password = password

    def total_balance_update(self, amount):
        # self.amount = amount
        self.total_balance += amount


class User(Admin):

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
        Admin.total_balance += amount


        if amount > 0:
            self.balance += amount
            print("Deposite: ", amount)
            print("Deposite Total: ", self.total_balance)
            # self.total_balance_update(amount)
            # Admin.total_balance += amount
            # admin1.total_balance += self.amount
            # Admin.total_balance_update(amount)
            # admin1.total_balance += amount
            # admin1.__class__.total_balance_update(amount)

            print(f'Congratulations!!\n{amount} taka added in your account.')
            self.transaction_history.append(f'Deposite: +{amount}')

    def withdraw(self, amount):

        if amount <= self.balance:
            if amount < self.min_withdraw:
                print(f'You can not withdraw below {self.min_withdraw}')
            elif amount > self.max_withdraw:
                print(f'You can not withdraw more than {self.max_withdraw}')
            else:
                self.balance -= amount
                print(f'Here is your money {amount}\n')
                # print(f'Your balance after withdraw: {self.available_balance()}')
            self.transaction_history.append(f"Withdraw: -{amount}")
        else:
            print(f'Sorry you have not enough money for withdraw!!')


    def transfer_money(self, trans_user_name, amount):

        self.trans_user_name = trans_user_name
        self.trans_user_name.balance += amount
        self.balance -= amount
        self.transaction_history.append(f"Transaction: -{amount}")
        self.trans_user_name.transaction_history.append(f"Transaction: +{amount}")

    def take_loan(self):
        if self.loan_feature:
            pass


    def available_balance(self):
        print(f"In Your account you have {self.balance} taka!!\n")



user1 = User("afsar@gmail.com", 123)
user2 = User("tarek@gmail.com", 456)
user3 = User("anwar@gmail.com", 789)

user1.deposit(5000)
user1.withdraw(2000)
user1.deposit(1000)
# user1.available_balance()

print(f"{'*'*50}")
user2.deposit(10000)
user2.withdraw(4000)
user2.deposit(3000)
# user2.available_balance()

# print(f"{'*'*50}")
# user1.transfer_money(user2, 2000)
# user1.available_balance()
# user2.available_balance()

# print(f"{'*'*50}")
admin1 = Admin()
admin1.create_account("admin@gmail.com", 111)
print(user1.total_balance)
print(user1.transaction_history)
# print(user2.transaction_history)
print(admin1.total_balance_update())



