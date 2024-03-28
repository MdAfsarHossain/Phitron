class Calculator:
    brand = 'Casio MS100'

    def add(self, num1, num2):
        result = num1 + num2
        print(result)

    def sub(self, num1, num2):
        result = num1 - num2
        print(result)

    def mul(self, num1, num2):
        result = num1 * num2
        print(result)
        
    def div(self, num1, num2):
        result = num1/num2
        print(result)

cal = Calculator()
cal.add(14, 16)
cal.sub(22, 16)
cal.mul(5, 12)
cal.div(25, 5)

