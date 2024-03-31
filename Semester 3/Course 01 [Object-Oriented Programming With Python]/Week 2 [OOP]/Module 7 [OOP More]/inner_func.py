# Function is a first class object
#TODO: 1
def double_decker():
    print('Starting the double decker.')

    def inner_fun():
        print("Inside the inner!")
        return 3000
    return inner_fun

# print(double_decker())
# print(double_decker()())
# TODO: 2
def do_something(work):
    print('Work Started!')
    # print(work)
    # TODO: 3
    work()
    print('Work Ended')

# do_something(2)
# do_something('Hello')

# TODO: 3
def coding():
    print('Coding in Python!')

# do_something(coding)

# TODO: 4
def sleeping():
    print('Sleeping and dreaming in Python!')

do_something(sleeping)
