class Men:
    def name(self):
        print("I am a men!")


class Women:
    def name(self):
        print("I am a women!!")


class Teacher:
    def name(self):
        print("I am a teacher!!!")


men = Men()
women = Women()
teacher = Teacher()

for obj in (men, women, teacher):
    obj.name()

