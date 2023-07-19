import tkinter as tk
from graph import NewGraph

class LongxinApp(tk.Tk):
    def __init__(self, master = None):
        super().__init__()
        # bsae
        self.master = master
        self.title("LongxinApp")
        self.geometry("585x385")
        self.configure(background="white")

        self.color = ["#037EF3", "#f85a40", "#00c16e", "#00bce4", "#7552cc", "#52565E"]
        self.running = [0,0,0,0,0,0]
        self.message_count1 = 0
        self.message_count2 = 0
        self.message_count3 = 0
        self.message_count4 = 0

        # node1
        self.RunningState1 = 0
        self.Temperature1 = 0
        self.Humidity1 = 0
        self.BatteryPercentage1 = 0
        self.LightLux1 = 0
        self.Smoke1 = 0
        # node2
        self.RunningState2 = 0
        self.Temperature2 = 0
        self.Humidity2 = 0
        self.BatteryPercentage2 = 0
        self.LightLux2 = 0
        self.Smoke2 = 0
        # node3
        self.RunningState3 = 0
        self.Temperature3 = 0
        self.Humidity3 = 0
        self.BatteryPercentage3 = 0
        self.LightLux3 = 0
        self.Smoke3 = 0
        # node4
        self.RunningState4 = 0
        self.Temperature4 = 0
        self.Humidity4 = 0
        self.BatteryPercentage4 = 0
        self.LightLux4 = 0
        self.Smoke4 = 0

        self.numb = 0

        # buttons
        self.window_opened = False
        self.graph_opened = False

        self.button0 = tk.Button(
                    self,
                    text="Settings\nView",
                    width=25, height=10,
                    background=self.color[0],
                    relief="flat", overrelief="sunken",
                    command=lambda: self.create_window(0)
                    )
        self.button0.grid(row=0, column=0, padx=5, pady=5)

        self.button1 = tk.Button(
                    self,
                    text="NODE1\nClosed",
                    width=25, height=10, 
                    background=self.color[1],
                    relief="flat", overrelief="sunken",
                    command=lambda: self.create_window(1)
                    )
        self.button1.grid(row=0, column=1, padx=5, pady=5)

        self.button2 = tk.Button(
                    self,
                    text="NODE2\nClosed",
                    width=25, height=10, 
                    background=self.color[2], 
                    relief="flat", overrelief="sunken",
                    command=lambda: self.create_window(2)
                    )
        self.button2.grid(row=0, column=2, padx=5, pady=5)

        self.button3 = tk.Button(
                    self,
                    text="NODE3\nClosed",
                    width=25, height=10, 
                    background=self.color[3], 
                    relief="flat", overrelief="sunken",
                    command=lambda: self.create_window(3)
                    )
        self.button3.grid(row=1, column=0, padx=5, pady=5)

        self.button4 = tk.Button(
                    self,
                    text="NODE4\nClosed",
                    width=25, height=10, 
                    background=self.color[4], 
                    relief="flat", overrelief="sunken",
                    command=lambda: self.create_window(4)
                    )
        self.button4.grid(row=1, column=1, padx=5, pady=5)

        self.button5 = tk.Button(
                    self,
                    text="Unused",
                    width=25, height=10, 
                    background=self.color[5], 
                    relief="flat", overrelief="sunken",
                    command=lambda: self.create_window(5)
                    )
        self.button5.grid(row=1, column=2, padx=5, pady=5)


    def update_message(self, str_message):
        try:
            self.RunningState1 = str_message['RunningState1']['value']
            self.Temperature1 = str_message['Temperature1']['value']
            self.Humidity1 = str_message['Humidity1']['value']
            self.BatteryPercentage1 = str_message['BatteryPercentage1']['value']
            self.LightLux1 = str_message['LightLux1']['value']
            self.Smoke1 = str_message['Smoke1']['value']
            
            if self.RunningState1 == True:
                self.message_count1 = 0
                text1 = "NODE1: Running\n"
                text1 = text1 + "Temperature: "           + str(self.Temperature1) + "\n"
                text1 = text1 + " Humidity  : "           + str(self.Humidity1) + "\n"
                text1 = text1 + " LightLux  : "           + str(self.LightLux1) + "\n"
                text1 = text1 + "Smokescope : "           + str(self.Smoke1) + "\n"
                text1 = text1 + "BatteryPercentage: "     + str(self.BatteryPercentage1) + "\n"
            
                self.button1.configure(text=text1, bg=self.color[1], anchor='w')
            elif self.RunningState1 == False:
                self.button1.configure(text="NODE1\nClosed", bg=self.color[5], anchor="center")
        except:
            self.message_count1 += 1

        try:
            self.RunningState2 = str_message['RunningState2']['value']
            self.Temperature2 = str_message['Temperature2']['value']
            self.Humidity2 = str_message['Humidity2']['value']
            self.BatteryPercentage2 = str_message['BatteryPercentage2']['value']
            self.LightLux2 = str_message['LightLux2']['value']
            self.Smoke2 = str_message['Smoke2']['value']
            
            if self.RunningState2 == True:
                self.message_count2 = 0
                text2 = "NODE2: Running\n"
                text2 = text2 + "Temperature: "           + str(self.Temperature2) + "\n"
                text2 = text2 + " Humidity  : "           + str(self.Humidity2) + "\n"
                text2 = text2 + " LightLux  : "           + str(self.LightLux2) + "\n"
                text2 = text2 + "Smokescope : "           + str(self.Smoke2) + "\n"
                text2 = text2 + "BatteryPercentage: "     + str(self.BatteryPercentage2) + "\n"
            
                self.button2.configure(text=text2, bg=self.color[2], anchor='w')
            elif self.RunningState2 == False:
                self.button2.configure(text="NODE2\nClosed", bg=self.color[5], anchor="center")
        except:
            self.message_count2 += 1

        try:
            self.RunningState3 = str_message['RunningState3']['value']
            self.Temperature3 = str_message['Temperature3']['value']
            self.Humidity3 = str_message['Humidity3']['value']
            self.BatteryPercentage3 = str_message['BatteryPercentage3']['value']
            self.LightLux3 = str_message['LightLux3']['value']
            self.Smoke3 = str_message['Smoke3']['value']
            
            if self.RunningState3 == True:
                self.message_count3 = 0
                text3 = "NODE3: Running\n"
                text3 = text3 + "Temperature: "           + str(self.Temperature3) + "\n"
                text3 = text3 + " Humidity  : "           + str(self.Humidity3) + "\n"
                text3 = text3 + " LightLux  : "           + str(self.LightLux3) + "\n"
                text3 = text3 + "Smokescope : "           + str(self.Smoke3) + "\n"
                text3 = text3 + "BatteryPercentage: "     + str(self.BatteryPercentage3) + "\n"
            
                self.button3.configure(text=text3, bg=self.color[3], anchor='w')
            elif self.RunningState3 == False:
                self.button3.configure(text="NODE3\nClosed", bg=self.color[5], anchor="center")
        except:
            self.message_count3 += 1

        try:
            self.RunningState4 = str_message['RunningState4']['value']
            self.Temperature4 = str_message['Temperature4']['value']
            self.Humidity4 = str_message['Humidity4']['value']
            self.BatteryPercentage4 = str_message['BatteryPercentage4']['value']
            self.LightLux4 = str_message['LightLux4']['value']
            self.Smoke4 = str_message['Smoke4']['value']

            if self.RunningState4 == True:
                self.message_count4 = 0
                text4 = "NODE4: Running\n"
                text4 = text4 + "Temperature: "           + str(self.Temperature4) + "\n"
                text4 = text4 + " Humidity  : "           + str(self.Humidity4) + "\n"
                text4 = text4 + " LightLux  : "           + str(self.LightLux4) + "\n"
                text4 = text4 + "Smokescope : "           + str(self.Smoke4) + "\n"
                text4 = text4 + "BatteryPercentage: "     + str(self.BatteryPercentage4) + "\n"
            
                self.button4.configure(text=text4, bg=self.color[4], anchor='w')
            elif self.RunningState4 == False:
                self.button4.configure(text="NODE4\nClosed", bg=self.color[5], anchor="center")
        except:
            self.message_count4 += 1

        


    def create_window(self, num):
        if not self.window_opened:
            self.window_opened = True
            self.new_window = tk.Toplevel(self.master)
            #self.new_window.configure(background="white")
            self.new_window.protocol('WM_DELETE_WINDOW', self.on_window_close)
            if   num == 0:
                self.new_window.title("Settings")
                self.new_window.geometry("385x385")
                self.label = tk.Label(
                    self.new_window, 
                    text="HOST:\n" + "iot-06z00itmv0vajzw.\nmqtt.iothub.aliyuncs.com" + "\n" 
                    + "\nPORT: 1883" + "\n" 
                    + "DEV_ID:\njk3pz9zX1pF.longxinpi|securemode=2,\nsignmethod=hmacsha256,\ntimestamp=1688816652077|\n" 
                    + "PRO_ID:\nlongxinpi&jk3pz9zX1pF\n",
                    anchor='w'
                    )
                self.label.grid()
                
            else:
                self.new_window.geometry("385x385")
                self.new_window.button0 = tk.Button(
                            self.new_window,
                            text="temp",
                            width=25, height=10,
                            background=self.color[0],
                            relief="flat", overrelief="sunken",
                            command=lambda: self.create_graph(0)
                            )
                self.new_window.button0.grid(row=0, column=0, padx=5, pady=5)

                self.new_window.button1 = tk.Button(
                            self.new_window,
                            text="humi",
                            width=25, height=10, 
                            background=self.color[1],
                            relief="flat", overrelief="sunken",
                            command=lambda: self.create_graph(1)
                            )
                self.new_window.button1.grid(row=0, column=1, padx=5, pady=5)

                self.new_window.button2 = tk.Button(
                            self.new_window,
                            text="smoke",
                            width=25, height=10, 
                            background=self.color[2], 
                            relief="flat", overrelief="sunken",
                            command=lambda: self.create_graph(2)
                            )
                self.new_window.button2.grid(row=1, column=0, padx=5, pady=5)

                self.new_window.button3 = tk.Button(
                            self.new_window,
                            text="light",
                            width=25, height=10, 
                            background=self.color[3], 
                            relief="flat", overrelief="sunken",
                            command=lambda: self.create_graph(3)
                            )
                self.new_window.button3.grid(row=1, column=1, padx=5, pady=5)
                if num == 1 and self.running[num] == 1:
                    self.new_window.title("NODE1")

                elif num == 2 and self.running[num] == 1:
                    self.new_window.title("NODE2")

                elif num == 3 and self.running[num] == 1:
                    self.new_window.title("NODE3")

                elif num == 4 and self.running[num] == 1:
                    self.new_window.title("NODE4")

                else:
                    self.new_window.title("WARNING")
                    self.label = tk.Label(self.new_window, text="Unable to use!", anchor='center')
                    self.label.grid()

    def on_window_close(self):
        self.window_opened = False
        self.new_window.destroy()

    def create_graph(self, num):
        if not self.graph_opened:
            self.graph_opened = True
            self.new_graph = NewGraph()
            self.new_graph.protocol('WM_DELETE_WINDOW', self.on_graph_close)
            if num == 0:
                self.new_graph.title("temp")
                self.numb = 0
            if num == 1:
                self.new_graph.title("humi")
                self.numb = 1
            if num == 2:
                self.new_graph.title("smoke")
                self.numb = 2
            if num == 3:
                self.new_graph.title("light")
                self.numb = 3


    def on_graph_close(self):
        self.graph_opened = False
        self.new_graph.destroy()
