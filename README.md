# IoT Warehouse Monitoring System
Radioactive *`V1.0`*<br>
Time  :2023/7/19

<h3 align="center">LongXin socchina</h3>

---

<a target="_blank" rel="noopener noreferrer" href="https://www.microsoft.com/zh-cn/windows"><img src="https://camo.githubusercontent.com/b44114213a5a462903bd69611bb6846f1dc41fe6f3230bd37c67c3d4eb65f08c/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f2d57696e646f77732d626c61636b3f7374796c653d666c61742d737175617265266c6f676f3d77696e646f7773266c6f676f436f6c6f723d626c7565" alt="Windows" data-canonical-src="https://img.shields.io/badge/-Windows-black?style=flat-square&amp;logo=windows&amp;logoColor=blue" style="max-width: 100%;"></a> <a target="_blank" rel="noopener noreferrer" href="https://ubuntu.com/"><img src="https://camo.githubusercontent.com/9c4bc049e33f41f122342a1714ccf872c34098a9f2c593c33c2322cf0129fa04/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f2d5562756e74752d626c61636b3f7374796c653d666c61742d737175617265266c6f676f3d7562756e7475" alt="Ubuntu" data-canonical-src="https://img.shields.io/badge/-Ubuntu-black?style=flat-square&amp;logo=ubuntu" style="max-width: 100%;"></a> [![long](https://img.shields.io/badge/Loongnix-FF0000?style=flat-square)](https://www.loongson.cn/)
[![alibabacloud](https://img.shields.io/badge/Aliyun-FF6A00?logo=alibabacloud&logoColor=white)](https://iot.aliyun.com/) [![Github Actions Badge](https://img.shields.io/badge/-Git%20-2088FF?style=flat&logo=Git&logoColor=white)](https://git-scm.com/)  [![Static Badge](https://img.shields.io/badge/Conda-Python-0099e5?logo=anaconda&logoColor=44A833)](https://radioactive-jkl.github.io/) [![qt](https://img.shields.io/badge/Qt-C%2B%2B-41CD52?logo=qt&logoColor=white)](https://www.qt.io/zh-cn/) [![arduino](https://img.shields.io/badge/Arduino-ESP32-00878F?logo=arduino&logoColor=white)](https://www.arduino.cc/)

#### Contents

* [Background](#background)
* [Highlights](#highlights)


## Background

* 放养摆烂比赛[*`全国大学生嵌入式芯片与系统设计竞赛/芯片应用赛道/龙芯赛道`*](http://www.socchina.net/)


##### Files
```
APP
  ├── Android
  |    └── 和下面PC是同一套代码
  └── PC
       ├── images
      ... (Qt codes)

ESP32
  ├── node1
 ... (代码几乎相同)
  ├── node4
  |    └── node4.ino
  ├── PubSubClient.zip
  ├── aliyun_mqtt.zip
  └── README_Load_lib.md

LongXinPI
  ├── paho
  |    └── mqtt库
  ├── sysfs_pin.py
  ├── i2c.py
  ├── graph.py
  ├── app.py
  ├── main.py
  └── requirements.txt
```


## Highlights

### APP
```
远程监控程序：包含桌面端的可执行程序和移动端应用程序的Qt/C++源码。
构建环境：Qt5.12
```

### ESP32
```
节点程序：包含每个节点的Arduino代码。
库环境配置：详见ESP32/README_Load_lib.md
```

### LongXinPi
```
终端程序：包含龙芯派2k1000LA上运行的Python程序。
Python环境：详见LongXinPi/requirements.txt
```
