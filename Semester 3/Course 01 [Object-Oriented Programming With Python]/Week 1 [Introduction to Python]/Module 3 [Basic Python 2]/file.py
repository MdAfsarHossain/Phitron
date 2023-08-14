# .csv comma separeted value
# .txt text file

# with open('message.txt', 'w') as file:
#     file.write('I Love You Python.\n')

# with open('message.txt', 'a') as file:
#     file.write('I Love You Python.\n')

with open('message.txt', 'r') as file:
    text = file.read()
    print(text)
