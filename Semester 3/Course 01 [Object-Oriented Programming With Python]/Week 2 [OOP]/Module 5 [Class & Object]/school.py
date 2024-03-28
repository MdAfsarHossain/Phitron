class Student:
    def __init__(self, name, current_class, id):
        self.name = name
        self.id = id
        self.current_class = current_class

    def __repr__(self) -> str:
        return f'Student with name: {self.name}, class: {self.current_class}, id: {self.id}'


class Teacher:
    def __init__(self, name, subject, id):
        self.name = name
        self.subject = subject
        self.id = id

    def __repr__(self) -> str:
        return f'Teacher: {self.name}, subject: {self.subject}'


class School:
    def __init__(self, name):
        self.name = name
        self.teachers = []
        self.students = []

    def add_teachers(self, name, subject):
        id = len(self.teachers) + 101
        teacher = Teacher(name, subject, id)
        self.teachers.append(teacher)

    def enroll(self, name, fee):
        if fee < 6500:
            print(f'Not enough fee')
        else:
            id = len(self.students) + 1
            student = Student(name, 'C', id)
            self.students.append(student)
            return f'{name} is enrolled with id" {id}, extra money {fee-6500}'

    def __repr__(self):
        print('Welcome to', self.name)

        print('--------OUR TEACHERS------------')
        for teacher in self.teachers:
            print(teacher)

        print('-------OUR STUDENTS-------------')
        for student in self.students:
            print(student)

        return 'All Done for Now!'


afsar = Student('Afsar', 9, 1)
tarek = Teacher('Tarek', 'Algorithm', 101)
print(afsar)
print(tarek)

phitron = School('Phitron')
phitron.enroll('Faruk', 5200)
phitron.enroll('Shahin', 8000)
phitron.enroll('Aminul', 7000)

phitron.add_teachers('Abir', 'Algo')
phitron.add_teachers('Absar', 'Physics')
phitron.add_teachers('Anwar', 'Math')

print(phitron)
