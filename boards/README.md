Working with make is simple ... if make file runs corectly ... 

Working with make ,boards.txt,json,ecc its a really help to compile without understand libraries , tecnics, ecc ... but sometimes a little bad settings blocking all chain compiler...

So ... sometimes is helpful to understand and modify some settings ... or make file manually 

Sometimes make file manually is helpful and not give errors ... because one of important is path ... path sometimes give a wronk location and is really helpfuly is you can set this path...

Automatised compiler is helpfuly ... but sometimes prevents us from understanding compiler ... and compiler it start to be a big enigma and tangle us instead of helping us

https://github.com/esp8266/Arduino/releases/download/2.0.0/esp8266-2.0.0.zip

http://arduino.esp8266.com/stable/package_esp8266com_index.json

http://arduino.esp8266.com/versions/2.5.0-beta2/package_esp8266com_index.json

{ARDUINO}/hardware/arduino/boards.txt

C:\Users\costycnc\AppData\Roaming\Arduino15\packages\esp8266\hardware\esp8266\2.4.1\boards.txt

# Change path

I have installed arduino portable in C:\Users\costycnc\Documents\arduino-1.6.5-r5-windows\arduino-1.6.5-r5

So ... {ARDUINO} same to be C:\Users\costycnc\Documents\arduino-1.6.5-r5-windows\arduino-1.6.5-r5

{ARDUINO}/hardware/arduino/platform.txt

So...now when compile arduino nano ... blink for examples ... all compiled lines begin with :

C:\Users\costycnc\Documents\arduino-1.6.5-r5-windows\arduino-1.6.5-r5

![alt text](https://github.com/costycnc/test-compile-esp8285/blob/master/boards/1.jpg)

Now i try to change path in {ARDUINO}/hardware/arduino/platform.txt










