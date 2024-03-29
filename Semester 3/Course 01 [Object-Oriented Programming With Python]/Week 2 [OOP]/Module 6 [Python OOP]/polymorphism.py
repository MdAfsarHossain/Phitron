# Poly --> Many (multiple)
# Morph --> shape

class Animal:
    def __init__(self, name):
        self.name = name

    def make_sound(self):
        print('Animal making some sound')


class Cat(Animal):
    def __init__(self, name):
        super().__init__(name)

    def make_sound(self):
        print('Meow Meow')


class Dog(Animal):
    def __init__(self, name):
        super().__init__(name)

    def make_sound(self):
        print('Gheu Gheu')


class Goat(Animal):
    def __init__(self, name):
        super().__init__(name)
        
    def make_sound(self):
        print('Beh Beh Beh')


don = Cat('Real Don')
don.make_sound()
