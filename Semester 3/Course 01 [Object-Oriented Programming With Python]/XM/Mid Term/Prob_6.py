n, m = map(int, input().split())

s = input()

ara = []
ara = [int(num) for num in s.split()]

numDict = {}

for i in range(1, m + 1):
    numDict[i] = 0

for i in ara:
    if i in numDict:
        numDict[i] += 1
    else:
        numDict[i] = 1

for key, value in numDict.items():
    print(value)
