import paho.mqtt.client as mqtt
import json

import queue
import time


from app import LongxinApp



# message
q_ali = queue.Queue()

# data
x = 0



# NETWORK----MQTT
PORT=1883
HOST=r"iot-xxxxxxxxxxx.mqtt.iothub.aliyuncs.com"
DEV_ID = r"xxxxxxxxxxx.longxinpi|securemode=2,signmethod=hmacsha256,timestamp=xxxxxxxxxxxx|" 
PRO_ID = r"longxinpi&xxxxxxxxxxxx" 
AUTH_INFO = r"xxxxxxxxxxxxxxxxxxx"

# The callback for when the client receives a CONNACK response from the server.
def on_connect(client, userdata, flags, rc):
    print("Connected with result code "+str(rc))
    # Subscribing in on_connect() means that if we lose the connection and
    # reconnect then subscriptions will be renewed.
    client.subscribe(r"/sys/jk3pz9zX1pF/longxinpi/thing/service/property/set")

# The callback for when a PUBLISH message is received from the server.
def on_message(client, userdata, msg):
    #print(msg.topic)
    str = json.loads(msg.payload)['items']
    #print(str)
    q_ali.put(str)
   

def update_data():
    print(q_ali.qsize())

    if q_ali.qsize() != 0: 
        message = q_ali.get()
        app.update_message(str_message=message)

    else:
        app.message_count1 += 1
        app.message_count2 += 1
        app.message_count3 += 1
        app.message_count4 += 1

    if app.message_count1 >= 3:
        app.message_count1 = 0
        app.button1.configure(text="NODE1\nClosed", bg=app.color[5], anchor="center")

    if app.message_count2 >= 3:
        app.message_count2 = 0
        app.button2.configure(text="NODE2\nClosed", bg=app.color[5], anchor="center")

    if app.message_count3 >= 3:
        app.message_count3 = 0
        app.button3.configure(text="NODE3\nClosed", bg=app.color[5], anchor="center")

    if app.message_count4 >= 3:
        app.message_count4 = 0
        app.button4.configure(text="NODE4\nClosed", bg=app.color[5], anchor="center")

    #print(app.RunningState1,app.Temperature1,app.Humidity1,app.BatteryPercentage1,app.LightLux1,app.Smoke1)  
    app.after(1000, update_data)


def update_graph():
    if app.graph_opened ==True:
        global x
        x = x + 20
        y = 0
        if app.numb == 0:
            y = app.Temperature1
        if app.numb == 1:
            y = app.Humidity1
        if app.numb == 2:
            y = app.Smoke1
        if app.numb == 3:
            y = app.LightLux1
            
        app.new_graph.update(x=x,y=y)
        if x >= 400:
            x, y = 0, 0
            app.new_graph.x, app.new_graph.y = 0, 0
            app.new_graph.canvas.delete("myline")

    app.after(1000, update_graph)

def update_warning():
    if app.Temperature1>30:
        app.button1.configure(text="NODE1\nWarning", bg=app.color[5], anchor="center")
    if app.Temperature2>30:
        app.button2.configure(text="NODE2\nWarning", bg=app.color[5], anchor="center")
    if app.Temperature3>30:
        app.button3.configure(text="NODE3\nWarning", bg=app.color[5], anchor="center")
    if app.Temperature4>30:
        app.button4.configure(text="NODE4\nWarning", bg=app.color[5], anchor="center")    
    app.after(10000, update_warning)

if __name__ == '__main__':
    client = mqtt.Client(DEV_ID)
    
    client.on_connect = on_connect
    client.on_message = on_message
    
    client.username_pw_set(PRO_ID,AUTH_INFO)
    client.connect(HOST, PORT, 90)
    client.loop_start()


    app = LongxinApp()
    app.after(1000, update_data)
    app.after(1000, update_graph)
    app.after(1000, update_warning)
    app.mainloop()
    

    while True:
        pass




