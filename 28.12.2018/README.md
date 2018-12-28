Undertand how make bin file for esp8285 manually ... 

(after i see interesting example here https://www.instructables.com/id/Blink-for-ESP8266-native-like-arduino-using-Window/  )

I try to understand how arduino make bin file... and i understand that is 3 stages ... cpp to o and d > o to elf > elf to bin

I begin with:

run compile_cpp_to_o.bat ... will compile test.cpp to test.cpp.d (contain library address) and test.cpp.o  (contain compiled code)

In compile_o_to_elf_tot.bat i run :

C:\Users\costycnc\AppData\Roaming\Arduino15\packages\esp8266\tools\xtensa-lx106-elf-gcc\1.20.0-26-gb404fb9-2/bin/xtensa-lx106-elf-gcc 
-g -w 
-Os -nostdlib 
-Wl,--no-check-sections 
-u call_user_start 
-u _printf_float 
-u _scanf_float 
-Wl,-static 
-LC:\Users\costycnc\AppData\Roaming\Arduino15\packages\esp8266\hardware\esp8266\2.4.1/tools/sdk/lib 

-LC:\Users\costycnc\AppData\Roaming\Arduino15\packages\esp8266\hardware\esp8266\2.4.1/tools/sdk/ld 

-LC:\Users\costycnc\AppData\Roaming\Arduino15\packages\esp8266\hardware\esp8266\2.4.1/tools/sdk/libc/xtensa-lx106-elf/lib 

-Teagle.flash.1m512.ld 

-Wl,--gc-sections 
-Wl,-wrap,system_restart_local 
-Wl,-wrap,spi_flash_read 

-o C:\Users\costycnc\AppData\Local\Temp\build3378903159558416982.tmp/Blink.cpp.elf 

-Wl,--start-group

 C:\Users\costycnc\AppData\Local\Temp\build3378903159558416982.tmp\Blink.cpp.o 

C:\Users\costycnc\AppData\Local\Temp\build3378903159558416982.tmp/arduino.ar 

-lhal -lphy -lpp -lnet80211 -llwip2 -lwpa -lcrypto -lmain -lwps -laxtls -lespnow -lsmartconfig -lairkiss -lwpa2 -lstdc++ -lm -lc -lgcc 

-Wl,--end-group 

-LC:\Users\costycnc\AppData\Local\Temp\build3378903159558416982.tmp

-----------------------------------------------------------------------------------------------------------------

I need understand how working!

------------------------------------------------------------------------------------------------------------------

For this i download xtensa-lx106-elf-gcc.exe and libiconv-2.dll from C:\Users\costycnc\AppData\Roaming\Arduino15\packages\esp8266\tools\xtensa-lx106-elf-gcc\1.20.0-26-gb404fb9-2/bin/

I create xtensa-lx106-elf-gcc_help.bat for see commands!

In xtensa-lx106-elf-gcc_help.txt i have all commands!

Now understand commands:

 -g -w

help:Options starting with -g, -f, -m, -O, -W, or --param are automatically
 passed on to the various sub-processes invoked by xtensa-lx106-elf-gcc.  In ord
er to pass
 other options on to these processes the -W<letter> options must be used.

-------------------------------------------------------

-Os -nostdlib i dont know

-----------------------------------------------------
-Wl,--no-check-sections  

help: 
  -Wl,<options>  Pass comma-separated <options> on to the linker

----------------------------------------------------------

-u call_user_start -u _printf_float -u _scanf_float i dont know

----------------------------------------------------------------

-Wl,-static (see above)

----------------------------------------------------------------

-LC:\Users\costycnc\AppData\Roaming\Arduino15\packages\esp8266\hardware\esp8266\2.4.1/tools/sdk/lib

L is not in help but i thing that is include libraries
 
----------------------------------------------------------------

-Teagle.flash.1m512.ld i do not understand ... but i thing that is memory declared 1mega ram 512kb spiffs

----------------------------------------------------------------

-o C:\Users\costycnc\AppData\Local\Temp\build3378903159558416982.tmp/Blink.cpp.elf 

help: -o <file>   Place the output into <file>

----------------------------------------------------------------

 C:\Users\costycnc\AppData\Local\Temp\build3378903159558416982.tmp\Blink.cpp.o 

File that need to be compiled

----------------------------------------------------------------

-lhal -lphy -lpp -lnet80211 -llwip2 -lwpa -lcrypto -lmain -lwps -laxtls -lespnow -lsmartconfig -lairkiss -lwpa2 -lstdc++ -lm -lc -lgcc

I dont know ... but i thing that is libraries!

---------------------------------------------------------------

