@echo off

REM cleanup
DEL /S /Q *.pbo

"C:\Program Files (x86)\Mikero\DePboTools\bin\MakePbo.exe" -UP NLD_Main
"C:\Program Files (x86)\Mikero\DePboTools\bin\MakePbo.exe" -UP NLD_Insignia
"C:\Program Files (x86)\Mikero\DePboTools\bin\MakePbo.exe" -U NLD_Weapons
"C:\Program Files (x86)\Mikero\DePboTools\bin\MakePbo.exe" -UP NLD_Flags
"C:\Program Files (x86)\Mikero\DePboTools\bin\MakePbo.exe" -U NLD_Backpacks
"C:\Program Files (x86)\Mikero\DePboTools\bin\MakePbo.exe" -U NLD_Gear
"C:\Program Files (x86)\Mikero\DePboTools\bin\MakePbo.exe" -UP NLD_F-16
"C:\Program Files (x86)\Mikero\DePboTools\bin\MakePbo.exe" -UP NLD_Grouped_Units
"C:\Program Files (x86)\Mikero\DePboTools\bin\MakePbo.exe" -UP NLD_Infantry_Units
"C:\Program Files (x86)\Mikero\DePboTools\bin\MakePbo.exe" -UP NLD_Vehicle_Units

copy ..\External_Addons\*.pbo .
