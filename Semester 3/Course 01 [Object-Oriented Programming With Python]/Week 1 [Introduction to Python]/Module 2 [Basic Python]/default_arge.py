def sum(x, y, z=0):
    result = x + y + z
    return result

total = sum(99, 11)
# print(total)

# args
def all_sum(x, *numbers):
    print(x)
    print(numbers)
    sum = 0

    for num in numbers:
        print(num)
        sum = sum + num
    return sum

total = all_sum(45, 46, 49, 87)
print("All Sum: ", total)
