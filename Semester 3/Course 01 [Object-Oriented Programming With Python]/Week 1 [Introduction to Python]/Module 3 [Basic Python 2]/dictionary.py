# Key Value Pair
# Dictionary
# Object
# Hash table
# Overlap with set
# {key: value, key: value}
# Dictionary Mutable
person = {'name': 'Afsar', 'address': 'Oxyzen', 'age': 25}
# print(person)  # {'name': 'Afsar', 'address': 'Oxyzen', 'age': 25}
# print((person['age']))  # 25

# print(person.keys())  # dict_keys(['name', 'address', 'age'])
person['language'] = 'Python'
# print(person)  #  {'name': 'Afsar', 'address': 'Oxyzen', 'age': 25, 'language': 'Python'}
person['name'] = 'Hossain'
print(person)
del person['age']
print(person)

# Special Dictionary Looping
for key, value in person.items():
    print(key, ": ", value)
