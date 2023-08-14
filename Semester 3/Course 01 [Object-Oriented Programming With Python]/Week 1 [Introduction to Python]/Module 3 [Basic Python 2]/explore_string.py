#TODO: Part-1
name = 'Afsar\'s Hossain'  #Escape
name1 = "Afsar Hossain"
# Multiline String
name2 = """
    Afsar Hossain
    B.Sc (Honos) in CSE
"""
print(name)
# print(name1)
# print(name2)

# String is a sequence of characters
# for ch in name1:
#     print(ch)

# print(name1[3])  #a
# print(name1[1:7]) #fsar H
# print(name1[-2])  #i
print(name1[::-1])  #niassoH rasfA

# Mutable means changeable
# Immutable means you can not change it
# String Immutable
if 'sar' in name1:
    print('Exists')

print(name1.upper())
