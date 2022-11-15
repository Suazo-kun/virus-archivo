@ECHO off

ld -r -b binary -o virus.o virus.jpg
windres -i virus.rc -o virus.res --output-format=coff
gcc -O2 -Wall virus.c virus.res virus.o -o virus.exe -mwindows

del virus.res
del virus.o
