INCLUDE_PATH =  -I"C:\Program Files\Eiffel Software\EiffelStudio 25.02 Standard\library\time\spec\include" -I"C:\Program Files\Eiffel Software\EiffelStudio 25.02 Standard\library\process\base\platform\windows\include" -I"C:\Program Files\Eiffel Software\EiffelStudio 25.02 Standard\library\wel\spec\windows\include"
SHELL = \bin\sh
CC = cl
CPP = cl
CFLAGS = -Od -MT -w -nologo -D_WIN32_WINNT=0x0500 -DWINVER=0x0500 -D_CRT_SECURE_NO_DEPRECATE -D_UNICODE -DUNICODE -DWIN32_LEAN_AND_MEAN  -DEIF_THREADS  -DWORKBENCH -I"C:\Program Files\Eiffel Software\EiffelStudio 25.02 Standard\studio\spec\win64\include" -I. $(INCLUDE_PATH)
CPPFLAGS = -Od -MT -w -nologo -D_WIN32_WINNT=0x0500 -DWINVER=0x0500 -D_CRT_SECURE_NO_DEPRECATE -D_UNICODE -DUNICODE -DWIN32_LEAN_AND_MEAN  -DEIF_THREADS  -DWORKBENCH -I"C:\Program Files\Eiffel Software\EiffelStudio 25.02 Standard\studio\spec\win64\include" -I. $(INCLUDE_PATH)
LDFLAGS = -STACK:5000000 -NODEFAULTLIB:libc
CCLDFLAGS = -STACK:5000000 -NODEFAULTLIB:libc  -SUBSYSTEM:CONSOLE
LDSHAREDFLAGS =  -dll -incremental:no -NODEFAULTLIB:libc
EIFLIB = "C:\Program Files\Eiffel Software\EiffelStudio 25.02 Standard\studio\spec\win64\lib\msc_vc140\mtwkbench.lib"
EIFTEMPLATES = C:\Program Files\Eiffel Software\EiffelStudio 25.02 Standard\studio\config\win64\templates
LIBS = 
MAKE = nmake -s -nologo
AR = 
LD = 
MKDEP =   --
MV = copy
CP = copy
RANLIB = echo
RM = del
FILE_EXIST = if exist
RMDIR = rd
X2C = "C:\Program Files\Eiffel Software\EiffelStudio 25.02 Standard\studio\spec\win64\bin\x2c.exe"
SHAREDLINK = link
SHAREDLIBS = USER32.lib WS2_32.lib ADVAPI32.lib GDI32.lib SHELL32.lib MSIMG32.lib \
	COMDLG32.lib UUID.lib OLE32.lib OLEAUT32.lib COMCTL32.lib MPR.LIB SHLWAPI.LIB WINSPOOL.LIB 
SHARED_SUFFIX = .dll
COMMAND_MAKEFILE = 
START_TEST = if not exist finished 
END_TEST =  
CREATE_TEST = echo "finished" >> finished 
SYSTEM_IN_DYNAMIC_LIB = simple_scheduler.dll 

.SUFFIXES:.cpp .obj 

.c.obj:
	$(CC) $(CFLAGS) -c $<

.cpp.obj:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C26_c.obj 

OLDOBJECTS =  sp830.obj sp830d.obj ar832.obj ar832d.obj sp829.obj sp829d.obj na831.obj na831d.obj \
	re835.obj re835d.obj it839.obj it839d.obj it834.obj it834d.obj li840.obj li840d.obj \
	ar855.obj ar855d.obj ar853.obj ar853d.obj re850.obj re850d.obj in848.obj in848d.obj \
	to852.obj to852d.obj li827.obj li827d.obj ge854.obj ge854d.obj re836.obj re836d.obj \
	in838.obj in838d.obj cu841.obj cu841d.obj tr845.obj tr845d.obj se856.obj se856d.obj \
	ar828.obj ar828d.obj bo851.obj bo851d.obj ta849.obj ta849d.obj fi846.obj fi846d.obj \
	un826.obj un826d.obj ch825.obj ch825d.obj ty837.obj ty837d.obj ac842.obj ac842d.obj \
	co833.obj co833d.obj bi857.obj bi857d.obj ba843.obj ba843d.obj bo847.obj bo847d.obj \
	co844.obj co844d.obj 

all::  Cobj26.lib

Cobj26.lib: $(OBJECTS) Makefile
	if exist $@ $(RM) $@
	lib -nologo -OUT:$@ $(OBJECTS)
	$(CREATE_TEST)
	$(RM) $(OBJECTS)


clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

