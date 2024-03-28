class Shopping:
    def __init__(self, name):
        self.name = name
        self.cart = []

    def add_to_cart(self, item, price, quantity):
        product = {'item': item, 'price': price, 'quantity': quantity}
        self.cart.append(product)

    def remove_item(self, item):
        pass

    def checkout(self, amount):
        total = 0
        for item in self.cart:
            total += item['price'] * item['quantity']
        print('Total Price: ', total)
        if amount < total:
            print(f'Please Provide: {total - amount} more...')
        else:
            extra = amount - total
            print(f'Here is your items and extra money: {extra}')


afsar = Shopping('Afsar')
afsar.add_to_cart('Book', 50, 6)
afsar.add_to_cart('Pen', 12, 24)
afsar.add_to_cart('Watch', 50, 5)
print(afsar.cart)
afsar.checkout(1600)
