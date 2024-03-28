class Shop:

    def __init__(self, buyer):
        self.buyer = buyer
        self.cart = []  # Cart is an instance attribute

    def add_to_cart(self, item):
        self.cart.append(item)


afsar = Shop('Afsar')
afsar.add_to_cart('Mobile')
afsar.add_to_cart('Book')
print(afsar.cart)

faruk = Shop('Faruk')
faruk.add_to_cart('Pen')
faruk.add_to_cart('Clock')
print(faruk.cart)