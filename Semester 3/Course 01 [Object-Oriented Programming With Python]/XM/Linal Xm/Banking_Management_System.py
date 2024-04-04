class CreateNewAcount:
    def __init__(self, name, password):
        self.name = name
        self.password = password


class Admin:

    # accounts_list = {}
    # accounts = {}
    user_list = []

    def __init__(self):
        self.min_withdraw = 100
        self.max_withdraw = 20000
        self.balance = 0

    def new_user_info(self, name, password):
        self.name = name
        self.password = password
        print(f'Name: {self.name} Password: {self.password}')

    def create_account(self):
        self.balance = 0
        name = input("Enter Your Name: ")
        password = input("Enter Your Password: ")
        self.new_user = CreateNewAcount(name, password)
        # self.new_user = self.new_user_info(name, password)
        # print(type(self.new_user))
        self.user_list.append(vars(self.new_user))
        # Admin.new_user_info(name, password)
        # self.user_list.append(vars(self.new_user_info(name, password)))
        print(f"{'*' * 50}\nCongratulations!! Accounts Creates Successfully!\n{'*' * 50}")
        # self.accounts[name] = password

    def get_users(self):
        return self.user_list
        # for user_name, user_password in :
        #     print(user_name, user_password)
        # pass


class User(Admin):
    def __init__(self):
        self.balance = 0
        self.min_withdraw = 100
        self.max_withdraw = 20000

    def deposit(self):
        amount = int(input("How much money you want to Deposit: "))
        if amount > 0:
            self.balance += amount
        print(f'Congratulations!!\n{amount} taka added in your account.')

    def withdraw(self):
        amount = int(input("How much money you want to Withdraw: "))
        if amount <= self.balance:
            if amount < self.min_withdraw:
                print(f'You can not withdraw below {self.min_withdraw}')
            elif amount > self.max_withdraw:
                print(f'You can not withdraw more than {self.max_withdraw}')
            else:
                self.balance -= amount
                print(f'Here is your money {amount}\n')
                # print(f'Your balance after withdraw: {self.available_balance()}')
        else:
            print(f'Sorry you have not enough money for withdraw!!')

    def transfer_money(self):
        transfer_user_name = input("Enter user name where you want to transfer money: ")
        flag = 0
        for user in user1.get_users():
            if user['name'] == transfer_user_name:
                flag = 1
                break

        if flag:
            transfer_money_amount = int(input("Enter how much money you want to transfer: "))
            self.balance -= transfer_money_amount
            print(f"Congratulation!!\n{transfer_money_amount} taka transfer successfully in {transfer_user_name} user account!")
        else:
            print(f"User does not exits!")

    def available_balance(self):
        print(f"In Your account you have {self.balance} taka!!\n")



# user1 = User('Afsar', 1235, 15000)
# print(user1)
# print(user1.available_balance())
# user1.deposit(500)
# print(user1.available_balance())
# user1.withdraw(10000)
# print()
# user2 = User('Tarek', 1235, 50000)
# print(user2)
# print(user2.available_balance())
# user2.deposit(10000)
# print(user2.available_balance())
# user2.withdraw(10000)

# user1 = User()
# user1.create_account("afsar", 125)
# user2 = User()
# user2.create_account('tarek', 452)
#
# admin = Admin()
# User.show_account_list()


while True:
    admin = Admin()
    user1 = User()
    print("1. Create an account\n2. Login to your account\n3. Exit")
    user_input = int(input("Enter Your Choice: "))

    if user_input == 3:
        break
    elif user_input == 1:
        admin.create_account()
    elif user_input == 2:
        name = input("Enter Your Name: ")
        password = input("Enter Your Password: ")

        flag = 0
        isAdmin = False

        if name == "admin" and password == "123":
            isAdmin = True

        if isAdmin == False:
            for user in admin.get_users():
                if user['name'] == name and user['password'] == password:
                    flag = 1
                    break
            if flag:
                while True:
                    print(f"{'*'*70}")
                    print(f"{' '*10} Welcome {name} to Your account!")
                    print(f"{'*'*70}")
                    print("1. Deposit\n2. Withdraw\n3. Check Available Balance")
                    print("4. Transfer the money")
                    print("5. Transaction History")
                    print("6. Take a Loan\n7. Exit")
                    a = int(input("Enter Your Choice: "))
                    if a == 7:
                        break
                    elif a == 1:
                        user1.deposit()
                    elif a == 2:
                        user1.withdraw()
                        # pass
                    elif a == 3:
                        user1.available_balance()
                        # pass
                    elif a == 4:
                        user1.transfer_money()
                        # pass
                    elif a == 5:
                        pass
                    elif a == 6:
                        pass
            else:
                print(f"{'*'*30}\nSorry Accounts does not exist!\n{'*'*30}")
        else:
            while True:
                print(f"\n{'*'*80}")
                print(f"Hello ADMIN Welcome to Banking Management System")
                print(f"\n{'*'*80}")
                print("1. Check total available balance of the bank.\n2. Check Total loan amount\n3. ON of OFF the loan "
                      "feature.\n4. Show Users List\n5. Exit")
                a = int(input("Enter Your Choice: "))
                if a == 5:
                    break
                elif a == 1:
                    pass
                elif a == 2:
                    pass
                elif a == 3:
                    pass
                elif a == 4:
                    admin.get_users()
                    pass

"""
1) Can create an account.
2) Can deposit and withdrawal amount.
3) Can check available balance.

4) Can transfer the amount from his account to another user account.
5) Can check transaction history.
6) Can take a loan from the bank twice of his total amount..
"""

"""
1) Can create an account
2) Can check the total available balance of the bank.
3) Can check the total loan amount.
4) Can on or off the loan feature of the bank.
"""



""""

Admin Class:
    1. Create Account
    2. Check Total available balance of the bank.
    3. check the total loan amount.
    4. on or off the loan feature of the bank.
    
User Class:
    1. Create Account
    2. Deposit 
    3. Withdrawal
    4. check available balance
    5. Transfer the amount from his account to another user account
    6. Transaction history
    7. Take a loan
"""