#******************************************************************************
#  Free implementation of Bullfrog's GeneWars strategy game
#******************************************************************************
#   @file Makefile
#      A script used by GNU Make to recompile the project.
#  @par Purpose:
#      Allows to invoke "make all" or similar commands to compile all
#      source code files and link them into executable file.
#  @par Comment:
#      None.
#  @author   Tomasz Lis
#  @date     25 Jul 2012 - 18 Aug 2012
#  @par  Copying and copyrights:
#      This program is free software; you can redistribute it and/or modify
#      it under the terms of the GNU General Public License as published by
#      the Free Software Foundation; either version 2 of the License, or
#      (at your option) any later version.
#
#******************************************************************************
ifneq (,$(findstring Windows,$(OS)))
  RES  = obj/bio_stdres.res
  EXEEXT = .exe
  PKGFMT = zip
  PKGOS = win
else
  RES  = 
  EXEEXT =
  PKGFMT = tar.gz
  PKGOS = lin
endif

CPP  = g++
CC   = gcc
WINDRES = windres
DLLTOOL = dlltool
RM = rm -f
MV = mv -f
CP = cp -f
MKDIR = mkdir -p
ECHO = @echo
TAR = tar
ZIP = zip

BIN  = bin/genewars$(EXEEXT)
LIBS = bflibrary bfmydraw bfnet2 bfsound smack

OBJS_TODO = \
obj/bioeng.o \
obj/building.o \
obj/ceditor.o \
obj/clone.o \
obj/computer.o \
obj/control.o \
obj/creature.o \
obj/custom.o \
obj/data.o \
obj/draw.o \
obj/drone.o \
obj/editor.o \
obj/effect.o \
obj/ethereal.o \
obj/font.o \
obj/game.o \
obj/gridtile.o \
obj/iface.o \
obj/io.o \
obj/lab.o \
obj/level.o \
obj/map.o \
obj/misc.o \
obj/nibble.o \
obj/optimize.o \
obj/options.o \
obj/packets.o \
obj/pads.o \
\
obj/plant.o \
obj/player.o \
obj/setup.o \
obj/smemory.o \
obj/sound.o \
obj/spec.o \
obj/tables.o \
obj/mvthing.o \
obj/smvthing.o \
obj/title.o \


OBJS = \
obj/cvector.o \
obj/pchost.o \
obj/pcmain.o \
obj/planet.o \
obj/thingidx.o \
obj/thing.o \
obj/xy.o \
$(RES)

GENSRC   = obj/ver_defs.h
LINKOBJ  = $(OBJS)
LINKLIB = -static $(foreach library,$(LIBS),-l$(library)) -L../bflibrary/lib -L../bfmydraw/lib -L../bfnet2lib/lib -L../bfsoundlib/lib -L../smacklib/lib
INCPATHS = ./include ../bflibrary/include ../bfmydraw/include ../bfnet2lib/include ../bfsoundlib/include ../smacklib/include
CXXINCPATHS = $(INCPATHS)
# flags to generate dependency files
DEPFLAGS = -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" 
# code optimization flags
OPTFLAGS = -O2
DBGFLAGS =
# linker flags
LINKFLAGS = 
# compiler warning generation flags
WARNFLAGS = -Wall -Wno-sign-compare -Wno-unused-parameter
# disable return type warns as our functions are empty
WARNFLAGS += -Wno-return-type
# disabled warnings: -Wextra -Wtype-limits
CXXFLAGS = $(foreach path,$(CXXINCPATHS),-I$(path)) -c -fmessage-length=0 $(WARNFLAGS) $(DEPFLAGS) $(OPTFLAGS)
CFLAGS = $(foreach path,$(INCPATHS),-I$(path)) -c -fmessage-length=0 $(WARNFLAGS) $(DEPFLAGS) $(OPTFLAGS)
LDFLAGS = $(LINKLIB) $(OPTFLAGS) $(DBGFLAGS) $(LINKFLAGS)

# load program version
include version.mk
VER_STRING = $(VER_MAJOR).$(VER_MINOR).$(VER_RELEASE).$(VER_BUILD)

.PHONY: all all-before all-after clean clean-custom package pkg-before zip tar.gz

all: all-before $(BIN) all-after

all-before:
	$(MKDIR) obj bin

clean: clean-custom
	-${RM} $(OBJS) $(GENSRC) $(BIN) $(LIBS)
	-${RM} pkg/*
	-$(ECHO) ' '

$(BIN): $(OBJS)
	-$(ECHO) 'Building target: $@'
	$(CPP) $(LINKOBJ) -o "$@" $(LDFLAGS)
	-$(ECHO) 'Finished building target: $@'
	-$(ECHO) ' '

obj/%.o: src/%.cpp $(GENSRC)
	-$(ECHO) 'Building file: $<'
	$(CPP) $(CXXFLAGS) -o"$@" "$<"
	-$(ECHO) 'Finished building: $<'
	-$(ECHO) ' '

obj/%.o: src/%.c $(GENSRC)
	-$(ECHO) 'Building file: $<'
	$(CC) $(CFLAGS) -o"$@" "$<"
	-$(ECHO) 'Finished building: $<'
	-$(ECHO) ' '

obj/%.res: res/%.rc $(GENSRC)
	-$(ECHO) 'Building resource: $<'
	$(WINDRES) -i "$<" --input-format=rc -o "$@" -O coff 
	-$(ECHO) 'Finished building: $<'
	-$(ECHO) ' '

obj/ver_defs.h: version.mk Makefile
	$(ECHO) \#define VER_MAJOR   $(VER_MAJOR) > "$(@D)/tmp"
	$(ECHO) \#define VER_MINOR   $(VER_MINOR) >> "$(@D)/tmp"
	$(ECHO) \#define VER_RELEASE $(VER_RELEASE) >> "$(@D)/tmp"
	$(ECHO) \#define VER_BUILD   $(VER_BUILD) >> "$(@D)/tmp"
	$(ECHO) \#define VER_STRING  \"$(VER_STRING)\" >> "$(@D)/tmp"
	$(ECHO) \#define PACKAGE_SUFFIX  \"$(PACKAGE_SUFFIX)\" >> "$(@D)/tmp"
	$(MV) "$(@D)/tmp" "$@"

package: pkg-before $(PKGFMT)

pkg-before:
	-${RM} pkg/*
	$(MKDIR) pkg
	$(CP) bin/* pkg/
	$(CP) docs/*_readme.txt pkg/

pkg/%.tar.gz: pkg-before
	-$(ECHO) 'Creating package: $<'
	cd $(@D); \
	$(TAR) --owner=0 --group=0 --exclude=*.tar.gz --exclude=*.zip -zcf "$(@F)" .
	-$(ECHO) 'Finished creating: $<'
	-$(ECHO) ' '

tar.gz: pkg/genewars-$(subst .,_,$(VER_STRING))-$(PACKAGE_SUFFIX)-$(PKGOS).tar.gz

pkg/%.zip: pkg-before
	-$(ECHO) 'Creating package: $<'
	cd $(@D); \
	$(ZIP) -x*.tar.gz -x*.zip -9 -r "$(@F)" .
	-$(ECHO) 'Finished creating: $<'
	-$(ECHO) ' '

zip: pkg/genewars-$(subst .,_,$(VER_STRING))-$(PACKAGE_SUFFIX)-$(PKGOS).zip

#******************************************************************************
