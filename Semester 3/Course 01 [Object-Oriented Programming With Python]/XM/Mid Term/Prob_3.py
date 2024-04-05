class SumFactorial:
    def __init__(self, a, b, c):
        self.a = a
        self.b = b
        self.c = c

    def sum(self):
        self.sumNum = self.a + self.b + self.c
        print(self.sumNum)

    def factorial(self):
        fact = 1
        for i in range(1, self.b + 1):
            fact *= i
        print(fact)


a = SumFactorial(5, 4, 6)
a.sum()
a.factorial()
