# Ardrums
Arduino Drums Touch Capacitive

![Ardrums](https://github.com/rodriguesfas/ardrums/screenshot/01.png)

# List Materials

- Components
	|Quant. | Item          | Link |
	| :---: | :--:          | :--: |
	|  01   | Arduino       | []() |
	|  01   | Módulo MPR121 | []() |
	|   -   | Fios e Jumps  | []() |

# Fritzing

![](https://github.com/rodriguesfas/ardrums/screenshot/02.png)

# Install Dependence 
package.json

npm install

# Configure Board
Selection board userd

# Serial Port
Permission Port Linux Ubuntu

# Load code in board Arduino
directorio project arduino/main.ino

ttyUSB0 = "Your Port USB"

sudo chmod 777 /dev/ttyUSB0
ou
sudo chmod a+rw /dev/ttyUSB0

# Config Port in Server
var mySerial = new SerialPort("/dev/ttyUSB0", {
 	baudrate : 9600,
 	parser : serialport.parsers.readline("\n")
 });

# Run Server
node-dev app.js

# Credits
[How to Create an Interactive Animated SVG Drum Kit](https://tympanus.net/codrops/2016/03/16/interactive-animated-svg-drum-kit/)

[Node Arduino SerialPort](https://github.com/FaztWeb/node-arduino-serialport)