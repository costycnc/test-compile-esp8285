First set Arduino to can work with esp8285

In "Aditional board manager URL:" http://arduino.esp8266.com/stable/package_esp8266com_index.json (see photo a1.jpg) and in Tools/Board "Boards Manager" (see photo a2.jpg) need to install esp8266 package (see photo a3.jpg)

Need to select "Generic Esp8285 module" (see photo a5.jpg) and set variables same here (see photo a6.jpg)

--------------------------------------------------------------------------------------------------------------------

How copy compiled instructions from Arduino from study... 

I open blink file from Arduino File/Examples/01.Basics/Blink  (see photo a4.jpg) and in Files/Preferences i select "Show verbose during:" compilation and upload... (see photo a1.jpg)

... in my computer the pachage is installed at (need set to view hidden folder ... see photo 1.jpg and photo 2.jpg photos) 

The esp8266 package is installed at C:\Users\your pc name\AppData\Roaming\Arduino15\packages (AppData is a hidden folder)

When compile ...result these lines (see a7.jpg) that i copy and paste to blink_tot.txt

-----------------------------------------------------------------------------------------------------------------------------------------

Kee first line of compiled lines :

C:\Users\costycnc\AppData\Roaming\Arduino15\packages\esp8266\tools\xtensa-lx106-elf-gcc\1.20.0-26-gb404fb9-2/bin/xtensa-lx106-elf-g++ -D__ets__ -DICACHE_FLASH -U__STRICT_ANSI__ -IC:\Users\costycnc\AppData\Roaming\Arduino15\packages\esp8266\hardware\esp8266\2.4.1/tools/sdk/include -IC:\Users\costycnc\AppData\Roaming\Arduino15\packages\esp8266\hardware\esp8266\2.4.1/tools/sdk/lwip2/include -IC:\Users\costycnc\AppData\Roaming\Arduino15\packages\esp8266\hardware\esp8266\2.4.1/tools/sdk/libc/xtensa-lx106-elf/include -IC:\Users\costycnc\AppData\Local\Temp\build3378903159558416982.tmp/core -c -w -Os -g -mlongcalls -mtext-section-literals -fno-exceptions -fno-rtti -falign-functions=4 -std=c++11 -MMD -ffunction-sections -fdata-sections -DF_CPU=80000000L -DLWIP_OPEN_SRC -DTCP_MSS=536 -DARDUINO=10605 -DARDUINO_ESP8266_GENERIC -DARDUINO_ARCH_ESP8266 -DARDUINO_BOARD="ESP8266_GENERIC" -DLED_BUILTIN=2 -DESP8266 -IC:\Users\costycnc\AppData\Roaming\Arduino15\packages\esp8266\hardware\esp8266\2.4.1\cores\esp8266 -IC:\Users\costycnc\AppData\Roaming\Arduino15\packages\esp8266\hardware\esp8266\2.4.1\variants\generic C:\Users\costycnc\AppData\Local\Temp\build3378903159558416982.tmp\Blink.cpp -o C:\Users\costycnc\AppData\Local\Temp\build3378903159558416982.tmp\Blink.cpp.o 

