class Engine:
    def __init__(self):
        pass

    def start(self):
        return 'Engine Started'

class Driver:
    def __init__(self):
        pass

# Car "has a" engine
class Car:
    def __init__(self):
        self.engine = Engine()
        self.driver = Driver()

    def start(self):
        self.engine.start()
