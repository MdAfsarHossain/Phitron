# list --> []
# tuple --> ()
# set  --> {}
# Set: Unique items collection. No duplicate.
# Set Mutable
numbers = [12, 56, 98, 78, 56, 12, 6, 98]
# print(numbers)  # [12, 56, 98, 78, 56, 12, 6, 98]
numbers_set = set(numbers)
print(numbers_set)  # {98, 6, 12, 78, 56}
numbers_set.add(55)
# print(numbers_set)  # {98, 6, 12, 78, 56}
numbers_set.remove(6)
# print(numbers_set)  # {98, 12, 78, 55, 56}

# for item in numbers_set:
#     print(item)

if 124 in numbers_set:
    print('12 Exists')
elif 56 in numbers_set:
    print('56 Exists')

A = {1, 2, 3, 5, 7}
B = {1, 3, 7, 9}
print(A & B)  #{1, 3, 7}
print(A | B)  # AUB  # {1, 2, 3, 5, 7, 9}


