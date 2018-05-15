@echo off

REM -- STM8 flasher

set FILE_HEX=%1
set DEVICE=%2

"%0\..\STVP\STVP_CmdLine.exe" -BoardName=ST-LINK -Port=USB -ProgMode=SWIM -Device=%DEVICE% -verbose -no_log -no_progress -no_loop -verif -FileProg=%FILE_HEX%
