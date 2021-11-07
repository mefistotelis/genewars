#******************************************************************************
#  Free implementation of Bullfrog game
#******************************************************************************
#   @file Makefile
#      A script used by GNU Make to recompile the project.
#  @par Purpose:
#      Allows to invoke "make all" or similar commands to compile all
#      source code files and link them into executable file.
#  @par Comment:
#      None.
#  @author   Tomasz Lis
#  @date     25 Jul 2012 - 18 Aug 2021
#  @par  Copying and copyrights:
#      This program is free software; you can redistribute it and/or modify
#      it under the terms of the GNU General Public License as published by
#      the Free Software Foundation; either version 2 of the License, or
#      (at your option) any later version.
#
#******************************************************************************
ifneq (,$(findstring Windows,$(OS)))
  EXEEXT = .exe
else
  EXEEXT =
endif

BIN  = bio/bin/genewars$(EXEEXT)
LIBS = bflibrary bfmydraw bfnet2 bfsound smack

.PHONY: all all-before all-after clean clean-libs package $(LIBS)

all: all-before $(BIN) all-after

clean: clean-libs
	$(MAKE) -C ./bio clean

clean-libs:
	$(MAKE) -C ./bflibrary clean
	$(MAKE) -C ./bfmydraw clean
	$(MAKE) -C ./bfnet2lib clean
	$(MAKE) -C ./bfsoundlib clean
	$(MAKE) -C ./smacklib clean

$(BIN): $(LIBS)
	$(MAKE) -C bio

bflibrary: bflibrary/lib/libbflibrary.a

bflibrary/lib/libbflibrary.a:
	$(MAKE) -C bflibrary

bfmydraw: bfmydraw/lib/libbfmydraw.a

bfmydraw/lib/libbfmydraw.a:
	$(MAKE) -C bfmydraw

bfnet2: bfnet2lib/lib/libbfnet2.a

bfnet2lib/lib/libbfnet2.a:
	$(MAKE) -C bfnet2lib

bfsound: bfsoundlib/lib/libbfsound.a

bfsoundlib/lib/libbfsound.a:
	$(MAKE) -C bfsoundlib

smack: smacklib/lib/libsmack.a

smacklib/lib/libsmack.a:
	$(MAKE) -C smacklib

package:
	$(MAKE) -C bio package

#******************************************************************************
