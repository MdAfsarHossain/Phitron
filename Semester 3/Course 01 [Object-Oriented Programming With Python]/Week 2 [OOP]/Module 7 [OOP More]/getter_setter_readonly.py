# read only --> you can not set the value. value can not be changed
# getter --> get a value of a property through a method. Most of the time, you will get the value of a private attribute.
# setter --> set a value of a property through a method. Most of the time, you will set the value of a private property.

class User:
    def __init__(self, name, age, money):
        self._name = name  # Protected
        self._age = age    # Protected
        self.__money = money  # Private

    # getter without any setter is readonly attribute
    @property
    def age(self):
        return self._age

    # getter
    @property
    def salary(self):
        return self.__money

    #setter
    @salary.setter
    def salary(self, value):
        if value < 0:
            return 'Salary can not be negative!!'
        self.__money += value


samsu = User('Afsar', 22, 12000)
# print(samsu.age)  # Cannot access private value
# print(samsu.salary)  # Cannot access private value

print(samsu.age)
print(samsu.salary)
samsu.salary = 4500
print(samsu.salary)

