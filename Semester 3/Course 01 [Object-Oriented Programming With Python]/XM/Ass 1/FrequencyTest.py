from collections import Counter

def frequency_test(data):
    # Use Counter to count the frequency of elements
    frequency_counter = Counter(data)

    total = 0

    # Print the frequency of each element
    for element, frequency in frequency_counter.items():
        if element < frequency:
            total += frequency - element
        elif frequency < element:
            total += frequency

        print(f"{element}: {frequency}")
    print(total)

# Example usage
# data = [1, 2, 3, 2, 1, 1, 4, 5, 4, 4]
n = int(input("Enter a number: "))
s = input()

ara = []
ara = [int(num) for num in s.split()]
# good_sequence(ara)
frequency_test(ara)
