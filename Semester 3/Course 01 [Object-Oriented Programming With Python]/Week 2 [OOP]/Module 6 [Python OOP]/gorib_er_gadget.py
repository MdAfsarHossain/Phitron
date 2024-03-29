class Laptop:
    def __init__(self, brand, price, color, memory):
        self.brand = brand
        self.price = price
        self.color = color
        self.memory = memory

    def run(self):
        return f'Running Laptop: {self.brand}'

    def coding(self):
        return f'Learning Python and Practicing'


class Phone:
    def __init__(self, brand, price, color, dual_sim):
        self.brand = brand
        self.price = price
        self.color = color
        self.dual_sim = dual_sim

    def run(self):
        return f'Phone Using'

    def phone_call(self, number, text):
        return f'Sending SMS to: {number} with: {text} '

class Camera:
    def __init__(self, brand, price, color, pixel):
        self.brand = brand
        self.price = price
        self.color = color
        self.pixel = pixel

    def reu(self):
        pass

    def change_lens(self):
        pass
