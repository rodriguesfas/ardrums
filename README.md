# Ardrums
Arduino Drums Touch Capacitive

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
[Node Arduino SerialPort](https://github.com/FaztWeb/node-arduino-serialport)