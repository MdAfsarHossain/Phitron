class ClassMethod:
    def __init__(self, name, age):
        self.name = name
        self.age = age
    @classmethod
    def showItem(self, item):
        print(f'Item name is : {item}')


ClassMethod.showItem('Pencil')


class StaticMethod:
    def __init__(self):
        pass

    @staticmethod
    def add(a, b):
        result = a + b
        print(result)

StaticMethod.add(4, 6)
