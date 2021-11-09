#******************************************************************************
#  Bullfrog Network Library reimplementation
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

STATLIB=lib/libbfmydraw.a

LIBS =


OBJS = \
obj/drawspr.o \
obj/drawsprr.o \
obj/drawrng.o \
obj/mygad.o \
obj/myspr.o \
obj/mysprr.o \
obj/nldata.o \
obj/pixbuf.o \
obj/str.o \

INCS = -I./include -I../bflibrary/include
CXXINCS = -I./include -I../bflibrary/include
# flags to generate dependency files
DEPFLAGS = -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" 
# code optimization flags
OPTFLAGS = -O2
DBGFLAGS =
# linker flags
LINKFLAGS =
# compiler warning generation flags
WARNFLAGS = -Wall -Wno-sign-compare -Wno-unused-parameter
# disabled warnings: -Wextra -Wtype-limits
CXXFLAGS = $(CXXINCS) -c -fmessage-length=0 $(WARNFLAGS) $(DEPFLAGS) $(OPTFLAGS)
CFLAGS = $(INCS) -c -fmessage-length=0 $(WARNFLAGS) $(DEPFLAGS) $(OPTFLAGS)
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
