@ECHO OFF
cd driver
cl -c /I ".\include" src\*.cpp synthlib\*.cpp
link *.obj bufferoverflowU.lib kernel32.lib user32.lib winmm.lib /dll /def:"src\winmm_drv.def" /OUT:opl3windows.dll
del *.obj
cd ..\installer
cl drvinst.c advapi32.lib bufferoverflowU.lib kernel32.lib user32.lib /Fedrvsetup.exe
del *.obj
cd ..
