import tkinter as tk
import random
x = 0

class NewGraph(tk.Toplevel):
    def __init__(self):
        super().__init__()
        self.geometry("400x300")

        self.x = 0
        self.y = 0
        self.canvas = tk.Canvas(self, width=400, height=300)
        self.canvas.pack(fill=tk.BOTH, expand=True)
        self.canvas.create_line(0, 295, 400, 295)  # draw X
        self.canvas.create_text(380, 280, text="time")  # label X
        self.canvas.create_line(5, 5, 5, 295)  # draw Y
        self.canvas.create_text(20, 20, text="temp")   # label Y
        self.canvas.create_text(20, 60, text="90")   
        self.canvas.create_text(20, 100, text="75")   
        self.canvas.create_text(20, 140, text="60")   
        self.canvas.create_text(20, 180, text="45")
        self.canvas.create_text(20, 220, text="30")
        self.canvas.create_text(20, 260, text="15")   
        self.line = self.canvas.create_line(5, 295, 5, 295, width=3)  # draw line


    def update(self, x, y):
        self.canvas.create_line(self.x+5, 295-self.y, x+5, 295-y, fill="blue",tags='myline', width=3)
        self.x, self.y = x, y

            


def update_data():
    global x
    x = x + 20
    y = random.randint(0, 100)
    new_window.update(x=x,y=y)
    if x >= 400:
        x, y = 0, 0
        new_window.x, new_window.y = 0, 0
        new_window.canvas.delete("myline")

    new_window.after(1000, update_data)


if __name__ == '__main__':
    new_window = NewGraph()
    new_window.after(1000, update_data)
    new_window.mainloop()
