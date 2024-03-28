class Phone:
    manufactured = 'China'

    def __init__(self, owner, brand, price):
        self.owner = owner
        self.brand = brand
        self.price = price

    def send_sms(self, phone, sms):
        text = f'Sending to: {phone} {sms}'
        print(text)

my_phone = Phone('Afsar', 'Oppe', '2500')
print(my_phone.owner, my_phone.brand, my_phone.price)

my_phone = Phone('Rohim', 'Samsung', 75000)
print(my_phone.owner, my_phone.brand, my_phone.price)

my_phone = Phone('Korim', 'Nokia', 4500)
print(my_phone.owner, my_phone.brand, my_phone.price)
