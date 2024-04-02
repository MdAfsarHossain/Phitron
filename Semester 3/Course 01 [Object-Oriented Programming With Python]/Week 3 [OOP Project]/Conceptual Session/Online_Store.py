class Person:
    id_counter = 100

    def __init__(self, email, password):
        self.email = email
        self.password = password
        self.user_id = Person.generate_id()

    @classmethod
    def generate_id(self):
        id = self.id_counter
        # print(id)
        self.id_counter += 1
        return id

    def __repr__(self) -> str:
        return f'Email: {self.email}, Person ID: {self.user_id}'


class Product:
    def __init__(self, name, price, quantity):
        self.name = name
        self.price = price
        self.quantity = quantity

    def __str__(self):
        return f'Name: {self.name} Price: {self.price} Quantity: {self.quantity}'


class Store:
    pass


class Owner(Person):
    pass


class Seller(Person):
    def __init__(self, email, password):
        super().__init__(email, password)


class Customer(Person):
    pass


seller1 = Seller("afsar291722@gmail.com", 123)
seller2 = Seller("tarek@gmail.com", 125)
seller3 = Seller("rohim@gmail.com", 452)

# print(seller1.email)
# print(seller1.email, seller1.generate_id())
# print(seller2.email, seller2.generate_id())
# print(seller3.email, seller3.generate_id())
print(seller1)
print(seller2)
print(seller3)

