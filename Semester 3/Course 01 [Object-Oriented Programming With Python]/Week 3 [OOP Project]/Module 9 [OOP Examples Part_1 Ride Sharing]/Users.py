from abc import ABC, abstractmethod
from datetime import datetime

class Ride_Sharing:
    def __init__(self, company_name):
        self.company_name = company_name
        self.riders = []
        self.drivers = []
        self.riders = []

    def add_rider(self, rider):
        self.riders.append(rider)

    def add_drivers(self, driver):
        self.drivers.append(driver)

    def __repr__(self):
        return f'{self.company_name} with riders: {len(self.riders)} and drivers: {len(self.drivers)}'


class User(ABC):
    def __init__(self, name, email, nid):
        self.name = name
        self.email = email
        #TODO: Set user id dynamically
        self.__id = 0
        self.__nid = nid
        self.__wallet = 0

    @abstractmethod
    def display_profile(self):
        raise NotImplementedError


class Rider(User):
    def __init__(self, name, email, nid, current_location, initial_amount):
        self.current_ride = None
        self.wallet = initial_amount
        self.current_location = current_location
        super().__init__(name, email, nid)

    def display_profile(self):
        print(f'Rider: with name: {self.name} and email: {self.email}')

    def load_cash(self, amount):
        if amount > 0:
            self.wallet += amount

    def update_location(self, current_location):
        self.current_location = current_location

    def request_ride(self, ride_sharing, destination):
        if not self.current_ride:
            ride_request = Ride_Request(self, destination)
            ride_matcher = Ride_Matching(ride_sharing.drivers)
            ride = ride_matcher.find_driver(ride_request)
            print("Got the ride, YAY ", ride)
            self.current_ride = ride

    def show_current_ride(self):
        print(self.current_ride)


class Driver(User):
    def __init__(self, name, email, nid, current_location):
        super().__init__(name, email, nid)
        self.current_location = current_location
        self.wallet = 0

    def display_profile(self):
        print(f'Driver with name: {self.name} and email: {self.email}')

    def accept_ride(self, ride):
        ride.set_driver(self)

class Ride:
    def __init__(self, start_location, end_location):
        self.start_location = start_location
        self.end_location = end_location
        self.driver = None
        self.rider = None
        self.start_time = None
        self.end_time = None
        self.estimated_fare = None

    def set_driver(self, driver):
        self.driver = driver

    def start_ride(self):
        self.seart_time = datetime.now()

    def end_ride(self, rider, amount):
        self.end_time = datetime.now()
        self.rider.wallet -= self.estimated_fare
        self.driver.wallet += self.estimated_fare

    def __repr__(self):
        return f'Ride details. Started: {self.start_location} to {self.end_location}'

class Ride_Request:
    def __init__(self, rider, end_location):
        self.rider = rider
        self.end_location = end_location


class Ride_Matching:
    def __init__(self, drivers):
        self.available_drivers = drivers

    def find_driver(self, ride_request):
        if len(self.available_drivers) > 0:
            # TODO: Find the closest driver of the rider
            print('Looking for a driver!')
            driver = self.available_drivers[0]
            ride = Ride(ride_request.rider.current_location, ride_request.end_location)
            driver.accept_ride(ride)
            return ride


class Vehicle(ABC):
    speed = {
        'car': 50,
        'bike': 60,
        'cng': 15
    }

    def __init__(self, vehicle_type, license_plate, rate):
        self.vehicle_type = vehicle_type
        self.license_plate = license_plate
        self.rate = rate
        self.status = 'available'

    @abstractmethod
    def start_drive(self):
        pass


class Car(Vehicle):
    def __init__(self, vehicle_type, license_pale, rate):
        super().__init__(vehicle_type, license_pale, rate)

    def start_drive(self):
        self.status = 'unavailable'


class Bike(Vehicle):
    def __init__(self, vehicle_type, license_plate, rate):
        super().__init__(vehicle_type, license_plate, rate)

    def start_drive(self):
        self.status = 'unavailable'


take_me = Ride_Sharing("Take Me")
# take_me.add_rider("Afsar")
# take_me.add_drivers("Shahin")
afsar = Rider('Afsar Hossain', 'afsar@gmail.com', 1234, 'Oxyzen', 1200)
take_me.add_rider(afsar)
shahin_driver = Driver('Shahin', 'shahin@gmail.com', 5687, 'Bayzid')
# take_me.add_rider(shahin_driver)
take_me.add_drivers(shahin_driver)
print(take_me)
afsar.request_ride(take_me, 'Uttara')
afsar.show_current_ride()
# print(take_me.riders)  # Afsar
# print(take_me.drivers) # Shahin
# print(take_me)  # Take Me with riders: 1 and drivers: 1

