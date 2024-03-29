from abc import ABC, abstractmethod
# abstract base class
class Animal(ABC):
    @abstractmethod  # Enforce all derived class to have a eat method
    def eat(self):
        print('I need FOOD')

    @abstractmethod
    def move(self):
        pass

class Monkey(Animal):
    def __init__(self, name):
        self.category = 'Monkey'
        self.name = name
        super().__init__()

    def eat(self):
        print('Hey, I am eating banana.')

    def move(self):
        print('Hanging on the branches.')

        
afsar = Monkey('Afsar')
afsar.eat()

