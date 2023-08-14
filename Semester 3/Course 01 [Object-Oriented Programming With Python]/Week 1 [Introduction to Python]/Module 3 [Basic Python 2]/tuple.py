# Tuple is immutable

def multiple():
    return 3, 4

# print(multiple())  # (3, 4)

things = 'Pen', 'Book', 'Apple', 'Chair', 'Pencil', 'Eraser', 'Ball', 'Bat'
# print(things)  #('Pen', 'Book', 'Apple', 'Chair', 'Pencil', 'Eraser', 'Ball', 'Bat')
# print(type(things))  #<class 'tuple'>
# print(things[0])  #Pen
# print(things[-2]) #Ball
# print(things[3:6])  #('Chair', 'Pencil', 'Eraser')
# if 'Chair' in things:
#     print("Exists")

# for item in things:
#     print(item)

print(len(things))