def full_name(first, last):
    name = f'Full name is: {first} {last}'
    return name

# name = full_name("Afsar", "Hossain")
name = full_name(last="Hossain", first="Afsar")
print(name)

def famous_name(first, last, **addition):
    name = f'{first} {last}'

    # print(addition['title'])
    for key, value in addition.items():
        print(key, value)
    return  name

name = famous_name(first='Taher', last='Ali', title='Hujur', title2='Shekh')
print(name)

#TODO: 2
# Return multiple things from an array
def a_lot(x, y):
    sum = x + y
    mult = x * y
    remain = x - y
    return sum, mult, remain

everyThing = a_lot(55, 21)
print(everyThing)

import PyQt5
