class schedule():
    def __init__(self,capacity):
        self.cap=capacity
        self.passenger=[]
        
    def add_passenger(self,name):
        if not self.open_seats():
            return False
        self.passenger.append(name)
        return True
        
    def open_seats(self):
        return self.cap-len(self.passenger)

Schedule=schedule(5)
Characters=["Naruto","Sasuke","Sakura","Madara","Obito","Hinata"]
Characters.append("Neji")
Characters.remove("Sakura")

for person in Characters:
    if Schedule.add_passenger(person):
        print(f"{person}'s ticket is booked. ")
    
    else:
        print(f"Sorry! No seats are available for {person}.")