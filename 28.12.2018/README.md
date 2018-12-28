-IC:\Users\costycnc\AppData\Roaming\Arduino15\packages\esp8266\hardware\esp8266\2.4.1/tools/sdk/include  delete without problem

-IC:\Users\costycnc\AppData\Roaming\Arduino15\packages\esp8266\hardware\esp8266\2.4.1\cores\esp8266 delete without problem

-IC:\Users\costycnc\AppData\Roaming\Arduino15\packages\esp8266\hardware\esp8266\2.4.1\variants\generic delete without problem

In test.bat not remain any library folder ... and compiled succesfully!

nee to retest o to elf

esptool.exe insert a boot.elf ... need try without boot.elf

----------------------------------------------------------------------------------------------------------

https://www.esp8266.com/viewtopic.php?f=8&t=7586

I have this command line for esptool added to boards.txt:

generic.menu.FlashSize.4M.recipe.objcopy.hex.pattern="{runtime.tools.esptool.path}/{compiler.esptool.cmd}" -eo "{build.path}/{build.project_name}.elf" -bo "{build.path}/{build.project_name}.bin" -bm {build.flash_mode} -bf {build.flash_freq} -bz {build.flash_size} -bs .text -bs .data -bs .rodata -bc -ec

-----------------------------------------------------------------------------------------------------------

C:\Users\costycnc\AppData\Roaming\Arduino15\packages\esp8266\tools\xtensa-lx106-elf-gcc\1.20.0-26-gb404fb9-2\xtensa-lx106-elf\bin 

is gcc ,g++ and another important programs


