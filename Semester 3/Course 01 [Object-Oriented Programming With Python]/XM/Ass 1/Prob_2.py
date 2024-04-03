from collections import Counter
def good_sequence(nums):
    freq_cnt = Counter(nums)

    total = 0

    for x, y in freq_cnt.items():
        if x < y:
            total += y - x
        elif y < x:
            total += y

    print(total)

n = int(input())
s = input()

ara = []
ara = [int(num) for num in s.split()]
good_sequence(ara)


'''
4
3 3 3 3
1

5
2 4 1 4 2
2
'''