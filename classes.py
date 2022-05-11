class Flight():
    def __init__(self,capacity):
        self.capacity=capacity
        self.passengers=[]
    def add_passenger(self,name):
        if self.open_seats():
            self.passengers.append(name)
            return True
        else:
            return False
    def open_seats(self):
        return (self.capacity-len(self.passengers))

flight = Flight(3)

people= ["MJ","Spidey","Minu","Nanu"]
for person in people:

    if flight.add_passenger(person):
        print(f"Added {person} to flight successfully.")
    else:
        print(f"No available seats for {person}")