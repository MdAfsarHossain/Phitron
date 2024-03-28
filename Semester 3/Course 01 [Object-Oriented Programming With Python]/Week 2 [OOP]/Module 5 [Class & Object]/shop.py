class Shop:
    cart = []  # Cart is a class attribute

    def __init__(self, buyer):
        self.buyer = buyer

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
