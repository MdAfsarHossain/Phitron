def printName(name):
    print("My First name is Md.")
    name()
    print("My Last name is Hossain.")


def midName():
    print('My Middle name is Afsar')


# printName(midName)


#############################
def firstName():
    print("My First name is Md. Afsar")
    def lastName():
        print("My Last name is Hossain")
    return lastName

firstName()()