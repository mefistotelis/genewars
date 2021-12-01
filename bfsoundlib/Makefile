#******************************************************************************
#  Smacker video player Library reimplementation
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
CPP  = g++
CC   = gcc
AR   = ar
RM = rm -f
MV = mv -f
CP = cp -f
MKDIR = mkdir -p
ECHO = @echo

STATLIB=lib/libbfsound.a

LIBS =


OBJS = \
obj/adpcm.o \
obj/ail.o \
obj/aila.o \
obj/aildebug.o \
obj/ailsfile.o \
obj/ailss.o \
obj/ailssa.o \
obj/ailxdig.o \
obj/ailxmidi.o \
obj/awe32.o \
obj/cd.o \
obj/cd_ctrl.o \
obj/dllload.o \
obj/fade_sam.o \
obj/free_aud.o \
obj/free_mus.o \
obj/free_sou.o \
obj/init_aud.o \
obj/init_mus.o \
obj/init_sou.o \
obj/is_samp.o \
obj/listsamp.o \
obj/load_mus.o \
obj/load_sou.o \
obj/mast_vol.o \
obj/play_sam.o \
obj/playsadd.o \
obj/realmode.o \
obj/samp_pan.o \
obj/samp_pit.o \
obj/samp_vol.o \
obj/setupaud.o \
obj/snderror.o \
obj/sndtimer.o \
obj/stop_all.o \
obj/stop_mus.o \
obj/stop_sam.o \
obj/streamfx.o \
obj/switchso.o \
obj/variable.o \


INCS = -I./include -I../bflibrary/include
CXXINCS = -I./include -I../bflibrary/include
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

obj/%.o: src/%.cpp
	-$(ECHO) 'Building file: $<'
	$(CPP) $(CXXFLAGS) -o"$@" "$<"
	-$(ECHO) 'Finished building: $<'
	-$(ECHO) ' '

obj/%.o: src/%.c
	-$(ECHO) 'Building file: $<'
	$(CC) $(CFLAGS) -o"$@" "$<"
	-$(ECHO) 'Finished building: $<'
	-$(ECHO) ' '

#******************************************************************************
