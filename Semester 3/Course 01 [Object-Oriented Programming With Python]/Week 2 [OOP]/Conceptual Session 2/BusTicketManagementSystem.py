"""
Bus Ticket Booking System

## Admin -
1. Add a new Bus
2. Check available buses
3. Can check bus info

## User -
1. Check available buses
2. Can check bus info
3. Can reserve seat
"""


class User:
    def __init__(self, username, password):
        self.username = username
        self.password = password


class Bus:
    def __init__(self, coach, driver, arrival, departure, from_des, to):
        self.coach = coach
        self.driver = driver
        self.arrival = arrival
        self.departure = departure
        self.from_des = from_des
        self.to = to

        self.seat = ["Empty" for i in range(20)]


# b = Bus(2, 'Afsar', '12PM', '3PM', 'Dhaka', 'Chattogram')
# print(vars(b))

class Phitron:
    total_bus = 5
    total_bus_list = []

    def add_bus(self):
        bus_no = int(input("Enter Bus No: "))

        flag = 1
        for w in self.total_bus_list:
            if bus_no == w['coach']:
                print(f"Coach {w['coach']} Bus Already Added!!")
                flag = 0
                break

        if flag:
            bus_driver = input("Enter Bus Driver Name: ")
            bus_arrival = input("Enter Bus Arrival Time: ")
            bus_departure = input("Enter Bus Departure Time: ")
            bus_from = input("Enter Bus Start From: ")
            bus_to = input("Enter Bus Destination: ")

            self.new_bus = Bus(bus_no, bus_driver, bus_arrival, bus_departure, bus_from, bus_to)
            self.total_bus_list.append(vars(self.new_bus))
            print("\nBus Added Successfully!!")


# company = Phitron()
# company.add_bus()

class Counter(Phitron):

    user_list = []

    def reservation(self):
        bus_no = int(input("Enter Bus No: "))

        for w in self.total_bus_list:
            if bus_no == w['coach']:
                passenger = input("Enter Your Name: ")
                seat_no = int(input("Enter Seat No: "))

                if seat_no > 20:
                    print("No Seats Available!!")
                elif w['seat'][seat_no - 1] != "Empty":
                    print("Seat Already Booked")
                else:
                    w['seat'][seat_no-1] = passenger
                    print(f"{w['seat'][seat_no-1]} Booked By {passenger}!!\n")
            else:
                print("No Bus Available!!")

        # for bus in self.total_bus_list:
        #     print(bus['seat'])

    def show_ticket(self):
        bus_no = int(input("Enter Bus Number: "))

        for w in self.total_bus_list:
           if bus_no == w['coach']:
               print('*'*50)
               print()
               print(f"{' '*10}{'#'*10} BUS INFO {'#'*10}")
               print(f"Bus Number: {bus_no} \t\t\t Driver: {w['driver']}")
               print(f"Arrival: {w['arrival']} \t\t\t Departure Time: {w['departure']} \n From: \t{w['from_des']} \t\t\t To: \t{w['to']}")
               print()

               a = 1
               for i in range(5):
                   for j in range(2):
                       print(f"{a}. {w['seat'][a-1]}", end="\t")
                       a+=1
                   for j in range(2):
                       print(f"{a}. {w['seat'][a-1]}", end="\t")
                       a+=1
                   print()
               print('*'*50)

    def get_users(self):
        return self.user_list

    def create_account(self):
        name = input("Enter Your Username: ")
        password = input("Enter Your Password: ")
        self.new_user = User(name, password)
        self.user_list.append(vars(self.new_user))

    def available_buses(self):
        if len(self.total_bus_list) == 0:
            print("No Buses Available!!\n")
        else:
            print('*'*50)
            for bus in self.total_bus_list:
                print()
                print(f"{' '*10}{'#'*10} BUS {bus['coach']} INFO {'#'*10}")
                print(f"Bus Number: {bus['coach']} \t Driver: {bus['driver']}")
                print(f"Arrival: {bus['arrival']} \t Departure Time: {bus['departure']} \n From: \t{bus['from_des']} \t\t To: \t{bus['to']}")
            print('*'*50)


# c = Counter()
# c.reservation()


while True:
    company = Phitron()
    b = Counter()
    print("1. Create an account\n2. Login to your account\n3. Exit")
    user_input = int(input("Enter Your Choice: "))

    if user_input == 3:
        break
    elif user_input == 1:
        b.create_account()
    elif user_input == 2:
        name = input("Enter Your Username: ")
        password = input("Enter Your Password: ")

        flag = 0
        isAdmin = False

        if name=="admin" and password=="123":
            isAdmin = True
        if isAdmin == False:
            for user in b.get_users():
                if user['username'] == name and user['password']==password:
                    flag = 1
                    break
            if flag:
                while True:
                    print(f"\n{' '*10} Welcome to BUS TICKET BOOKING SYSTEM")
                    print("1. Available Buses\n2. Show Bus Info\n3. Reservation\n4. Exit")
                    a = int(input("Enter Your Choice: "))
                    if a==4:
                        break
                    elif a==1:
                        b.available_buses()
                    elif a==2:
                        b.show_ticket()
                    elif a==3:
                        b.reservation()
            else:
                print("No Username Found!!")
        else:
            while True:
                print(f"\n{' '*10}Hello ADMIN Welcome to BUS TICKET BOOKING SYSTEM")
                print("1. Add Bus\n2. Available Buses\n3. SHow Bus Info\n4. Exit")
                a = int(input("Enter Your Choice: "))
                if a == 4:
                    break
                elif a == 1:
                    b.add_bus()
                elif a == 2:
                    b.available_buses()
                elif a == 3:
                    b.show_ticket()

'''
Global:
    1. Create an account
    2. Login to yout account
    3. Exit 
    
    Admin:
        1. Add Bus
        2. Available Buses
        3. Can Check bus info
        4. Exit
        
    User:
        1. Bus Info
        2. Reserve/ticket booking
        3. Available buses
        4. exit
'''









