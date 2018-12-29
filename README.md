# C:\Users\costycnc\AppData\Roaming\Arduino15\packages\esp8266\hardware\esp8266\2.4.1\board.txt

# test-compile-esp8285

I try from many years to find a small windows program with that i can compile files with make ...

I find many hudge programs with too much dependencies and i install, i install and finished with a dependencies that not found

or or which can not be installed !

This file is created for not repeat same old mistakes!

---------------------------------------------------------------------------

But i find a rapid mode to compile files used arduino esp8266 ... practically i watch how arduino compile and i find these...

I try to compile esp8285 manually with a simple cpp file 

I have installed arduino in C:\Users\costycnc\Documents\arduino-1.6.5-r5-windows portable

I have installed ep8266 package see photo1

the package is installed in C:\Users\costycnc\AppData\Roaming\Arduino15

__________________________________________________________________________

Run compile o.bat and will be result two files blink.cpp.o and blink.cpp.d

If run decompile.bat will decompile blink.cpp.o and save result in blink.cpp.txt

https://github.com/esp8266/Arduino

https://github.com/plerup/makeEspArduino ... need make i i not have installed...

https://www.espressif.com/en/products/software/esp-sdk/resource ... need to have make installed , i not have ...

https://github.com/pfalcon/esp-open-sdk ... https://github.com/jcmvbkbc/gcc-xtensa ... https://github.com/jcmvbkbc/crosstool-NG

https://bbs.espressif.com/viewtopic.php?t=838

-------------------------------------------------------------------------------------------

26.12.2018

Gnuwin   .... https://sourceforge.net/projects/gnuwin32/files/make/3.81/make-3.81.exe/download?use_mirror=kent&download=

http://gnuwin32.sourceforge.net/packages/make.htm 

... https://sourceforge.net/projects/gnuwin32/files/make/3.81/make-3.81.exe/download

installed C:\Program Files\GnuWin32    in windows path >> add C:\Program Files\GnuWin32\bin

I open dos windows and run make ... make functioning >>  

C:\Users\costycnc>make

make: *** No targets specified and no makefile found.  Stop.

C:\Users\costycnc\AppData\Roaming\Arduino15\packages\esp8266\hardware\esp8266\2.4.1\bootloaders\eboot  makefile



---------------------------------------------------------------------------------------------------------------

Until now i could not find a program to install and run make !!!

install with platformio https://platformio.org/platformio-ide ...for install platformio need platform atom.io ... https://atom.io/ (128mb) >> for install atom.io need netframework 4.5.2 https://www.microsoft.com/en-us/download/details.aspx?id=42642 (72mb prefered to install first!!!) ... https://github.com/esp8266/Arduino (27mb zip)

not success... need install another dependencies and I quit...

-------------------------------------------------------------------------------------------------------------------------------

I try with http://docs.platformio.org/page/core.html

another try ... download python 2.7.15 https://www.python.org/ftp/python/2.7.15/python-2.7.15.msi (18.4mb) ... 
download https://github.com/platformio/platformio-examples ... add to windows path C:\Users\UserName\.platformio\penv\Scripts;

not exists C:\Users\UserName\.platformio  ... need install another dependencies and I quit...

------------------------------------------------------------------------------------------------------------------------------

27.12.2018

until today i not can fin yet a sample program with can run make ... so ... i use lines of compile of arduino sdk when compile

blink ... i create a folder 27.12.2018 where put all files for this experiment

See readme file in folder 27.12.2018








