def call():
    print('Calling someone i dont know!')
    return 'Call done'


class Phone:
    price = 12000
    color = 'Blue'
    brand = 'Samsung'
    features = ['Camera', 'Speaker', 'Hammer']

    def call(self):
        print('Calling One Person')

    def send_sms(self, phone, sms):
        text = f'Sending SMS to: {phone} and message {sms}'

my_phone = Phone()
print(my_phone.features)
my_phone.call()
result = my_phone.send_sms(4125, 'I Forgot to miss you!!')
print(result)