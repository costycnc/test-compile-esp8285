@echo off 
cls

objdump -SC test.cpp.elf  > test.elf.txt
pause