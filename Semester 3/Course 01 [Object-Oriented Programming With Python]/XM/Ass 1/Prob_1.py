# print("Hello World")

s = input()
row = 0
column = 0
r = 0
l = 0
counter = 0

ch = [['' for _ in range(1000)] for _ in range(1000)]

for c in s:
    if c == 'R':
        ch[row][column] = c
        r = r + 1
    else:
        ch[row][column] = c
        l = l + 1

    column = column + 1
    if r==l and r>0:
        row = row + 1
        column = 0
        counter = counter + 1
        r = 0
        l = 0

print(counter)

for i in range(1000):
    if ch[i][0] != 'R' and ch[i][0] != 'L':
        continue
    print(''.join(ch[i]))


