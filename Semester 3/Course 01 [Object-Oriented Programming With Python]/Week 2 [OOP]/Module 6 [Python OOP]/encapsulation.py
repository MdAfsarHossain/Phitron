# Encapsulation --> Hide details
# Access modifier: public, protected, private
class Bank:
    def __init__(self, holder_name, initial_deposit):
        self.holder_name = holder_name  # Public Attribute
        self._branch  = 'Banani 11'  # Protected
        self.__balance = initial_deposit  # Private

    def deposite(self, amount):
        self.__balance += amount

    def get_balance(self):
        return self.__balance

    def withdraw(self, amount):
        if amount < self.__balance:
            self.__balance = self.__balance - amount
            return amount
        else:
            return f'Poor'

afsar = Bank('Afsar', 100000)

print(afsar.holder_name)
afsar.holder_name = 'Hossain'
afsar.deposite(400000)
print(afsar.get_balance())
print(afsar.holder_name)
print(afsar._branch)
print(dir(afsar))
print(afsar._Bank__balance)
