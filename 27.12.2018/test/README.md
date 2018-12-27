I copy here Blink.cpp from C:\Users\costycnc\AppData\Local\Temp\build1027778238799508469.tmp

I modify bat file to compile Blink.ccp from here and put result Blink.cpp.o here

Working !!!... result Blink.cpp.o and Blink.cpp.d

Opened i see that Blink.cpp.d contain all link to include files ...

I delete -IC:\Users\costycnc\AppData\Local\Temp\build3378903159558416982.tmp/core and bat file build the two files...

mean that -IC:\Users\costycnc\AppData\Local\Temp\build3378903159558416982.tmp/core not broke anything

I delete -IC:\Users\costycnc\AppData\Roaming\Arduino15\packages\esp8266\hardware\esp8266\2.4.1/tools/sdk/include... yes brocking not find c_types.h

-IC:\Users\costycnc\AppData\Roaming\Arduino15\packages\esp8266\hardware\esp8266\2.4.1/tools/sdk/lwip2/include ... not brocking

-IC:\Users\costycnc\AppData\Roaming\Arduino15\packages\esp8266\hardware\esp8266\2.4.1/tools/sdk/libc/xtensa-lx106-elf/include... not

-IC:\Users\costycnc\AppData\Roaming\Arduino15\packages\esp8266\hardware\esp8266\2.4.1\cores\esp8266... yes brockhing not find arduino.h

-IC:\Users\costycnc\AppData\Roaming\Arduino15\packages\esp8266\hardware\esp8266\2.4.1\variants\generic ... yes brocking not find pins_arduino.h

---------------------------------------------------------------------------------------

i make test1.bat without library that not needed

I make a copy a Blink.cpp >> Blink1.cpp

Test1 bat compile Blink1.cpp without unnecesary library and Blink.cpp.d is big than Blink1.cpp.g 

Result that compiler put lirary more that is needed i dont know that this not concur to result big bin bile!!! 
