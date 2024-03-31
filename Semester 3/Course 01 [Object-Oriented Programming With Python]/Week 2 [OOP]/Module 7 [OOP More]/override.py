class Person:
    def __init__(self, name, age, height, weight):
        self.name = name
        self.age = age
        self.height = height
        self.weight = weight

    def eat(self):
        print("I Eat Rice!")

    def exercise(self):
        raise NotImplementedError


class Cricketer(Person):
    def __init__(self, name, age, height, weight, team):
        self.team = team
        super().__init__(name, age, height, weight)

    # Override
    def eat(self):
        print('Vegetables')

    def exercise(self):
        print("Exercise Function from Cricketer!!")

    # + Sign operator overload
    def __add__(self, other):
        return self.age + self.age

    # * Sign operator overload
    def __mul__(self, other):
        return self.age * self.age

    # Len overload
    def __len__(self):
        return self.height

    # > operator overload
    def __gt__(self, other):
        return self.age > other.age


sakib = Cricketer('Sakib', 38, 68, 91, 'BD')
# sakib.eat()  # I Eat Rice!
# sakib.eat()  # Vegetables
# sakib.exercise()

mushi = Cricketer('Mushi', 36, 65, 78, 'BD')

# Plus Sign Overload
print(45 + 63)
print('Sakib' + 'Rakib')
print([12, 98] + [5, 6, 7, 8, 9])
print(sakib + mushi)
print(sakib * mushi)
print(len(sakib))
print(sakib > mushi)
