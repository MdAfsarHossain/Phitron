from math import pi
class Shape:
    def __init__(self, name):
        self.name = name


class Rectange(Shape):
    def __init__(self, name, length, width):
        self.length = length
        self.width = width
        super().__init__(name)

    def area(self):
        return self.length * self.width


class Circle(Shape):
    def __init__(self, name, radius):
        self.radius = radius
        super().__init__(name)

    def area(self):
        return pi * self.radius * self.radius
