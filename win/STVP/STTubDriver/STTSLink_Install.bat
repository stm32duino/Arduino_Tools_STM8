IF "%PROCESSOR_ARCHITECTURE%"=="x86" GOTO X86
IF "%PROCESSOR_ARCHITECTURE%"=="IA64" GOTO IA64

:AMD64
dpinst_x64.exe
GOTO end

:IA64
dpinst_ia64.exe
GOTO end

:X86
dpinst_x86.exe
:end