def add(*num):
	sum = 0
	for x in num:
		sum = sum + x
	print("Sum: ", sum)

add(3, 5)
add(3, 5, 3)

def printInfo(**text):
	for key, value in text.items():
		print(f"{key}: {value}")

printInfo(FirstName='Afsar', LastName='Hossain')
