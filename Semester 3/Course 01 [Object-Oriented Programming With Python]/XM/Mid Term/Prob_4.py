class Student:
    def name(self):
        print("Name: Md. Afsar Hossain.")


class Roll(Student):
    def roll(self):
        print("Roll: 2034035")


class Age(Roll):
    def age(self):
        print("Age: 24!")


info = Age()
info.name()
info.roll()
info.age()
