case $CONFIG in
'')
	if test ! -f ../config.sh; then
		(echo "Can't find ../config.sh."; exit 1)
	fi 2>/dev/null
	. ../config.sh
	;;
esac
case "$O" in
*/*) cd `expr X$0 : 'X\(.*\)/'` ;;
esac
echo "Compiling C code in C5"
$spitshell >Makefile <<!GROK!THIS!
INCLUDE_PATH =  -I"\$(ISE_LIBRARY)\library\time\spec\include" -I"\$(ISE_LIBRARY)\library\process\base\platform\windows\include" -I"\$(ISE_LIBRARY)\library\wel\spec\windows\include"
SHELL = /bin/sh
CC = $cc
CPP = $cpp
CFLAGS = $wkoptimize $mtccflags $large -DWORKBENCH -I"$rt_include" -I. \$(INCLUDE_PATH)
CPPFLAGS = $wkoptimize $mtcppflags $large -DWORKBENCH -I"$rt_include" -I. \$(INCLUDE_PATH)
LDFLAGS = $ldflags
CCLDFLAGS = $ccldflags  $console_flags
LDSHAREDFLAGS =  $mtldsharedflags
EIFLIB = "$rt_lib/$prefix$mt_prefix$wkeiflib$suffix"
EIFTEMPLATES = $rt_templates
LIBS = $mtlibs
MAKE = $make
AR = $ar
LD = $ld
MKDEP = $mkdep \$(DPFLAGS) --
MV = $mv
CP = $cp
RANLIB = $ranlib
RM = $rm -f
FILE_EXIST = $file_exist
RMDIR = $rmdir
X2C = "$x2c"
SHAREDLINK = $sharedlink
SHAREDLIBS = $sharedlibs
SHARED_SUFFIX = $shared_suffix
COMMAND_MAKEFILE = 
START_TEST = $start_test 
END_TEST = $end_test 
CREATE_TEST = $create_test 
SYSTEM_IN_DYNAMIC_LIB = simple_scheduler$shared_suffix 
!GROK!THIS!
$spitshell >>Makefile <<'!NO!SUBS!'

.SUFFIXES:.cpp .o

.c.o:
	$(CC) $(CFLAGS) -c $<

.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C5_c.obj 

OLDOBJECTS =  is132.o is132d.o in155.o in155d.o eq143.o eq143d.o se142.o se142d.o \
	in139.o in139d.o c_153.o c_153d.o ex136.o ex136d.o er137.o er137d.o \
	pl157.o pl157d.o pa159.o pa159d.o ex135.o ex135d.o si148.o si148d.o \
	si147.o si147d.o si146.o si146d.o in141.o in141d.o in140.o in140d.o \
	so154.o so154d.o co164.o co164d.o da163.o da163d.o se134.o se134d.o \
	se133.o se133d.o se158.o se158d.o it138.o it138d.o st152.o st152d.o \
	cu149.o cu149d.o ar151.o ar151d.o ha150.o ha150d.o si145.o si145d.o \
	da162.o da162d.o ti161.o ti161d.o ne156.o ne156d.o du160.o du160d.o \
	me144.o me144d.o 

all: Cobj5.o

Cobj5.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj5.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

!NO!SUBS!
chmod 644 Makefile
$eunicefix Makefile

