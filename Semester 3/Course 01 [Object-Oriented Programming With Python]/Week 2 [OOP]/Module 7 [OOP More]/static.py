# Static attribute (class attribute)
# static method @staticmethod
# class method @classmethod

class Shopping:
    cart = []  # class attribute #static attribute
    origin = 'China'

    def __init__(self, name, location):
        self.name = 'Afsar'   # Instance attribute
        self.location = location

    def purchase(self, item, price, amount):
        remaining = amount - price
        print(f'Buying: {item} for price: {price} and remaining: {remaining}')

    @staticmethod
    def multiply(a, b):
        result = a * b
        print(result)

    @classmethod
    def normal(self, item):
        print('Its a class Method function! ', item)

basundara = Shopping('Bashundara', 'Not Popular Location')
basundara.purchase('Shirt', 500, 1000)

# Class Method
# Shopping.purchase('a', 2, 3, 5)
Shopping.normal('Nothing')
Shopping.multiply(6, 4)


