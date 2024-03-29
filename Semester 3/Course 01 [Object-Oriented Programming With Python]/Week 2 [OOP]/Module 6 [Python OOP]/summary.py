class Book:
    def __init__(self, name):
        self.name = name

    def read(self):
        raise NotImplementedError


class Physics(Book):
    def __init__(self, name, lab):
        self.lab = lab
        super().__init__(name)

    def read(self):
        print('Reading Physics vector Chapter')


topon = Physics('Topon', True)

print(issubclass(Physics, Book))
print(isinstance(topon, Physics))
print(isinstance(topon, Book))

topon.read()
