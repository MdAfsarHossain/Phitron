class Gadget:
    def __init__(self, brand, price, color, origin):
        self.brand = brand
        self.price = price
        self.color = color
        self.origin = origin

    def run(self):
        return f'Running Laptop: {self.brand}'


class Laptop:
    def __init__(self, memory, ssd):
        self.ssd = ssd
        self.memory = memory

    def coding(self):
        return f'Learning Python and Practicing'


# Inheritance
class Phone(Gadget):
    def __init__(self, brand, price, color, origin, dual_sim):
        self.dual_sim = dual_sim
        super().__init__(brand, price, color, origin)

    def phone_call(self, number, text):
        return f'Sending SMS to: {number} with: {text} '

    def __repr__(self):
        return f'Phone: {self.brand} {self.price} {self.dual_sim}'


class Camera:
    def __init__(self, pixel):
        self.pixel = pixel

    def change_lens(self):
        pass

# Inheritance
my_phone = Phone('Iphone', 120000, 'Silver', 'Chine', True)
# my_phone.phone_call()
print(my_phone.brand)
print(my_phone)
