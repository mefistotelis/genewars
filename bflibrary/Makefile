#******************************************************************************
#  Bullfrog Library reimplementation
#******************************************************************************
#   @file Makefile
#      A script used by GNU Make to recompile the project.
#  @par Purpose:
#      Allows to invoke "make all" or similar commands to compile all
#      source code files and link them into executable file.
#  @par Comment:
#      None.
#  @author   Tomasz Lis
#  @date     01 May 2008 - 22 Sep 2021
#  @par  Copying and copyrights:
#      This program is free software; you can redistribute it and/or modify
#      it under the terms of the GNU General Public License as published by
#      the Free Software Foundation; either version 2 of the License, or
#      (at your option) any later version.
#
#******************************************************************************
CPP  = $(CROSS_COMPILE)g++
CC   = $(CROSS_COMPILE)gcc
AR   = $(CROSS_COMPILE)ar
RM = rm -f
MV = mv -f
CP = cp -f
MKDIR = mkdir -p
ECHO = @echo

STATLIB=lib/libbflibrary.a

LIBS =


OBJS = \
obj/general/arctan.o \
obj/general/box_clip.o \
obj/general/gbox.o \
obj/general/gbuffer.o \
obj/general/gcircle.o \
obj/general/gdata.o \
obj/general/gerrorlg.o \
obj/general/gexe_key.o \
obj/general/gfile.o \
obj/general/ggenf.o \
obj/general/ggengh.o \
obj/general/giff.o \
obj/general/gkeybd.o \
obj/general/gline.o \
obj/general/glog.o \
obj/general/gpalette.o \
obj/general/gscreen.o \
obj/general/gsprite.o \
obj/general/gspr_col.o \
obj/general/gspr_std.o \
obj/general/gtext.o \
obj/general/gtrig.o \
obj/general/gutility.o \
obj/general/hvline.o \
obj/general/pixel.o \
obj/general/poly.o \
obj/general/rnc_1fm.o \
obj/general/rom.o \
obj/general/scr_copy.o \
obj/general/spr_scl.o \
obj/general/sqroot.o \
obj/os/sdir.o \
obj/os/sfile.o \
obj/os/skeybd.o \
obj/os/smemory.o \
obj/os/smouse.o \
obj/os/spalette.o \
obj/os/sscreen.o \
obj/os/stime.o \
obj/os/svesa.o \
obj/os/swindows.o \


INCS = -I./include
CXXINCS = -I./include
# flags to generate dependency files
DEPFLAGS = -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" 
# code optimization and debugging flags
DEBUG ?= 0
ifeq ($(DEBUG), 1)
  OPTFLAGS = -O0
  DBGFLAGS = -g -DDEBUG
else
  # frame pointer is required for ASM code to work
  OPTFLAGS = -fno-omit-frame-pointer -O3
  DBGFLAGS = 
endif
# linker flags
LINKFLAGS =
# compiler warning generation flags
WARNFLAGS = -Wall -Wno-sign-compare -Wno-unused-parameter
# disabled warnings: -Wextra -Wtype-limits
CXXFLAGS = $(CXXINCS) -c -fmessage-length=0 $(WARNFLAGS) $(DEPFLAGS) $(OPTFLAGS) $(DBGFLAGS)
CFLAGS = $(INCS) -c -fmessage-length=0 $(WARNFLAGS) $(DEPFLAGS) $(OPTFLAGS) $(DBGFLAGS)
LDFLAGS = $(LINKLIB) $(OPTFLAGS) $(DBGFLAGS) $(LINKFLAGS)

.PHONY: all all-before all-after clean clean-custom

all: all-before $(STATLIB) all-after

all-before:
	$(MKDIR) obj/general obj/os lib

clean: clean-custom
	-${RM} $(OBJS) $(STATLIB) $(LIBS)
	-$(ECHO) ' '

$(STATLIB): $(OBJS) $(LIBS)
	-$(ECHO) 'Building target: $@'
	$(AR) rcs "$@" $^
	-$(ECHO) 'Finished building target: $@'
	-$(ECHO) ' '

obj/general/%.o: src/general/%.cpp
	-$(ECHO) 'Building file: $<'
	$(CPP) $(CXXFLAGS) -o"$@" "$<"
	-$(ECHO) 'Finished building: $<'
	-$(ECHO) ' '

obj/os/%.o: src/os/%.cpp
	-$(ECHO) 'Building file: $<'
	$(CPP) $(CXXFLAGS) -o"$@" "$<"
	-$(ECHO) 'Finished building: $<'
	-$(ECHO) ' '

obj/general/%.o: src/general/%.c
	-$(ECHO) 'Building file: $<'
	$(CC) $(CFLAGS) -o"$@" "$<"
	-$(ECHO) 'Finished building: $<'
	-$(ECHO) ' '

obj/os/%.o: src/os/%.c
	-$(ECHO) 'Building file: $<'
	$(CC) $(CFLAGS) -o"$@" "$<"
	-$(ECHO) 'Finished building: $<'
	-$(ECHO) ' '

#******************************************************************************
