@echo off 
cls

objdump -SC %1  > %1.txt
pause