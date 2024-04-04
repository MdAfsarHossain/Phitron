class Bank:
    def __init__(self):
        self.users = []
        self.admins = []
        self.total_balance = 0
        self.total_loan_amount = 0
        self.loan_feature_enabled = True

    def create_user_account(self, name):
        user = User(name)
        self.users.append(user)
        return user

    def create_admin_account(self, name):
        admin = Admin(name)
        self.admins.append(admin)
        return admin

    def get_user_by_name(self, name):
        for user in self.users:
            if user.name == name:
                return user
        return None

    def get_admin_by_name(self, name):
        for admin in self.admins:
            if admin.name == name:
                return admin
        return None

    def deposit(self, user, amount):
        user.deposit(amount)
        self.total_balance += amount

    def withdraw(self, user, amount):
        if user.balance >= amount:
            user.withdraw(amount)
            self.total_balance -= amount
        else:
            print("Bank is bankrupt. Unable to withdraw.")

    def transfer(self, sender, receiver, amount):
        if sender.balance >= amount:
            sender.withdraw(amount)
            receiver.deposit(amount)
        else:
            print("Bank is bankrupt. Unable to transfer.")

    def check_balance(self, user):
        return user.balance

    def check_transaction_history(self, user):
        return user.transaction_history

    def take_loan(self, user):
        if self.loan_feature_enabled:
            loan_amount = user.balance * 2
            user.deposit(loan_amount)
            self.total_loan_amount += loan_amount
            return loan_amount
        else:
            print("The loan feature is currently disabled.")

    def enable_loan_feature(self):
        self.loan_feature_enabled = True

    def disable_loan_feature(self):
        self.loan_feature_enabled = False

    def get_total_balance(self):
        return self.total_balance

    def get_total_loan_amount(self):
        return self.total_loan_amount


class User:
    def __init__(self, name):
        self.name = name
        self.balance = 0
        self.transaction_history = []

    def deposit(self, amount):
        self.balance += amount
        self.transaction_history.append(f"Deposit: +{amount}")

    def withdraw(self, amount):
        self.balance -= amount
        self.transaction_history.append(f"Withdrawal: -{amount}")


class Admin:
    def __init__(self, name):
        self.name = name


# Example Usage:
bank = Bank()

# Create user accounts
user1 = bank.create_user_account("Alice")
user2 = bank.create_user_account("Bob")

# Create admin account
admin = bank.create_admin_account("Admin")

# Deposit money
bank.deposit(user1, 1000)
bank.deposit(user2, 500)

# Check balance
print(bank.check_balance(user1))  # Output: 1000
print(bank.check_balance(user2))  # Output: 500

# Withdraw money
bank.withdraw(user1, 200)
bank.withdraw(user2, 100)

# Transfer money
bank.transfer(user1, user2, 300)

# Check balance and transaction history
print(bank.check_balance(user1))              # Output: 800
print(bank.check_balance(user2))              # Output: 700
print(bank.check_transaction_history(user1))  # Output: ['Deposit: +1000', 'Withdrawal: -200']
print(bank.check_transaction_history(user2))  # Output: ['Deposit: +500', 'Withdrawal: -100', 'Transfer: -300']

# Take a loan
loan_amount = bank.take_loan(user1)
print(loan_amount)  # Output: 1600

# Check total balance and total loan amount
print(bank.get_total_balance())        # Output: 1000
print(bank.get_total_loan_amount())    # Output: 1600

# Disable the loan feature
bank.disable_loan_feature()
bank.take_loan(user1)  # Output: The loan feature is currently disabled.


"""
 def withdraw(self, newUser, amount):
        self.newUser = newUser
        self.treansaction_history = [{'type': 'Deposit', 'amount': 5000}, {'type': 'Withdraw', 'amount': 2000}, {'type': 'Deposit', 'amount': 1000}, {'type': 'Transaction', 'amount': 1000}, {'type': 'Loan', 'amount': 6000}]
        self.deposit_money = 0
        dictionary = dict(newUser.transaction_history)
        for type_d, money in dictionary.items():
            if type_d == "Deposit":
                # self.deposit_money += money
                print(type_d, money)
        print(f"Total Deposit: {self.deposit_money}")


"""