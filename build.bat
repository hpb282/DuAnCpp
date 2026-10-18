@echo off
cd /d "%~dp0"
g++ -std=c++11 -Wall -Wextra -Wpedantic main.cpp src/menus/Bac.cpp -o NOC_Bac.exe
if errorlevel 1 exit /b 1
echo Bien dich thanh cong. Chay: .\NOC_Bac.exe
