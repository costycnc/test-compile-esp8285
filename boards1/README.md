platform_esp8266.txt and boards_esp8266 is file copied from  platform.txt and boards.txt from 
C:\Users\costycnc\AppData\Roaming\Arduino15\packages\esp82661\hardware\esp8266\2.4.1

platform_arduino.txt and boards_arduino.txt is file copied from platform.txt and boards.txt from
C:\Users\costycnc\Documents\arduino-1.6.5-r5-windows\arduino-1.6.5-r5\hardware\arduino\avr

I copied from C:\Users\costycnc\AppData\Roaming\Arduino15\packages\esp8266\tools\xtensa-lx106-elf-gcc all folders 
and I paste to Documents and i rename folder to esp8266 and have 414 mb

C:\Users\costycnc\Documents\esp8266
contains folders: bin,lib,libexec,share,xtensa-lx106-elf

i copied from C:\Users\costycnc\AppData\Roaming\Arduino15\packages\esp8266\hardware\esp8266\2.4.1 all folders
and I pste to documents and i rename folder to tools ... have 44 mb

C:\Users\costycnc\Documents\tools
contains folders : bootloaders,cores,liraries,tests,tools and variants




platform.txt is platform_esp8266.txt with path modified for windows documents:


compiler.path=C:/Users/costycnc/Documents/esp8266/bin/

compiler.sdk.path=C:/Users/costycnc/Documents/tools/tools/sdk
compiler.libc.path=C:/Users/costycnc/Documents/tools/tools/sdk/libc/xtensa-lx106-elf

My arduino location is C:\Users\costycnc\Documents\arduino-1.6.5-r5-windows\arduino-1.6.5-r5

The platform.txt is in C:\Users\costycnc\Documents\arduino-1.6.5-r5-windows\arduino-1.6.5-r5\hardware\arduino\avr

Find and replaces platform.txt with modified path lines!

Download https://github.com/esp8266/Arduino/releases/download/2.3.0/win32-xtensa-lx106-elf-gb404fb9-2.tar.gz and use https://www.7-zip.org/download.html for extract files!


