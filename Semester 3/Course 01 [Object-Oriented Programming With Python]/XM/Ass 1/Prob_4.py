#TODO: Function
def solveProb(ara):
    n = len(ara)
    x = 0
    cnt = 0
    while True:
        for i in range(n):
            if ara[i] % 2 == 0:
                x += 1

        if x == n:
            for i in range(n):
                ara[i] //= 2
            x = 0
            cnt += 1
        else:
            print(cnt)
            break

#TODO: Main Function
n = int(input())
ara = []
s = input()
ara = [int(num) for num in s.split()]

solveProb(ara)
