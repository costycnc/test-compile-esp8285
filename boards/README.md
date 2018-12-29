http://gnutoolchains.com/esp8266/

-------------------------------------------------------------------

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

# I make test with windows7 32bit ... i dont know if working with another system or settings

I have installed arduino portable in C:\Users\costycnc\Documents\arduino-1.6.5-r5-windows\arduino-1.6.5-r5

So ... {ARDUINO} same to be C:\Users\costycnc\Documents\arduino-1.6.5-r5-windows\arduino-1.6.5-r5

{ARDUINO}/hardware/arduino/platform.txt

So...now when compile arduino nano ... blink for examples ... all compiled lines begin with :

C:\Users\costycnc\Documents\arduino-1.6.5-r5-windows\arduino-1.6.5-r5

![alt text](https://github.com/costycnc/test-compile-esp8285/blob/master/boards/1.jpg)

Now i try to change path in {ARDUINO}/hardware/arduino/platform.txt

Here is original text:

![alt text](https://github.com/costycnc/test-compile-esp8285/blob/master/boards/2.jpg)

I moved all arduino files from C:\Users\costycnc\Documents\arduino-1.6.5-r5-windows\arduino-1.6.5-r5 to

C:\Users\costycnc\Documents\test

And i modify in C:\Users\costycnc\Documents\test\hardware\arduino\avr/platform.txt

Need to find bin directory ... in my arduino package the bin directory is at :

C:\Users\costycnc\Documents\test\hardware\tools\avr\bin

Attention!!! Path need to be with "\" if is with "/" wil not working !!!!!!

So i change path in platform.txt (attention !!! platform.txt from new package !!!)

So i change "\" with "/" ... result is:

compiler.path=C:/Users/costycnc/Documents/test/hardware/tools/avr/bin/

![alt text](https://github.com/costycnc/test-compile-esp8285/blob/master/boards/3a.jpg)

![alt text](https://github.com/costycnc/test-compile-esp8285/blob/master/boards/4.jpg)

save and open arduino from new folder:

![alt text](https://github.com/costycnc/test-compile-esp8285/blob/master/boards/5.jpg)

---------------------------------------------------------------------------

# Compile esp8285 with arduino

https://github.com/esp8266/Arduino

https://arduino-esp8266.readthedocs.io/en/latest/eclipse/eclipse.html

https://ip.cadence.com/uploads/103/SWdev-pdf

--------------------------------------------------------------------------------------------

http://arduino.esp8266.com/stable/package_esp8266com_index.json i find these files for download:

  https://github.com/esp8266/Arduino/releases/download/2.0.0/esp8266-2.0.0.zip

   https://github.com/esp8266/Arduino/releases/download/2.3.0/esp8266-2.3.0.zip

   https://github.com/esp8266/Arduino/releases/download/2.4.0-rc2/esp8266-2.4.0-rc2.zip

   https://github.com/esp8266/Arduino/releases/download/2.4.0-rc1/esp8266-2.4.0-rc1.zip

   http://arduino.esp8266.com/versions/1.6.5-947-g39819f0/esp8266-1.6.5-947-g39819f0.zip

   https://github.com/esp8266/Arduino/releases/download/2.2.0/esp8266-2.2.0.zip

   https://github.com/esp8266/Arduino/releases/download/2.4.2/esp8266-2.4.2.zip

   https://github.com/esp8266/Arduino/releases/download/2.4.1/esp8266-2.4.1.zip

   https://github.com/esp8266/Arduino/releases/download/2.4.0/esp8266-2.4.0.zip

   https://github.com/esp8266/Arduino/releases/download/2.5.0-beta1/esp8266-2.5.0-beta1.zip
     
   https://github.com/esp8266/Arduino/releases/download/2.1.0/esp8266-2.1.0.zip
     
   https://github.com/esp8266/Arduino/releases/download/2.5.0-beta2/esp8266-2.5.0-beta2.zip
     
   https://github.com/esp8266/Arduino/releases/download/2.3.0/win32-xtensa-lx106-elf-gb404fb9-2.tar.gz
     
   https://github.com/esp8266/Arduino/releases/download/2.3.0/osx-xtensa-lx106-elf-gb404fb9-2.tar.gz
     
   https://github.com/esp8266/Arduino/releases/download/2.3.0/osx-xtensa-lx106-elf-gb404fb9-2.tar.gz
     
     .
     
     -
     
     -
     
     Is file for any os like windows,linux,mac,ecc
     
     
     
     
     
     





























