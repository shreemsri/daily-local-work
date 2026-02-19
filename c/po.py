
class Car:
    def __init__(self):
        self.wheels = 4
        self.seats = 5

    def drive(self):
        print("Driving a car...")

class SportsCar(Car):  # Not nested
    def __init__(self):
        super().__init__()
        self.engine_power = '400 Hp'
        self.seats = 2

    def drive(self):
        print("Driving a sports car...")

mySportsCar = SportsCar()
mySportsCar.drive()