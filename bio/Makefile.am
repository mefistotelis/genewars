ACLOCAL_AMFLAGS = --install -I m4

bin_PROGRAMS = bio

bio_SOURCES = \
  src/bioeng.cpp \
  src/building.cpp \
  src/clonepad.cpp \
  src/comppersonal.cpp \
  src/computer.cpp \
  src/control.cpp \
  src/creature.cpp \
  src/creaturestat.cpp \
  src/cvector.cpp \
  src/data.cpp \
  src/draw.cpp \
  src/drone.cpp \
  src/effect.cpp \
  src/effectstat.cpp \
  src/engine.cpp \
  src/ethereal.cpp \
  src/etherscope.cpp \
  src/etherzone.cpp \
  src/event.cpp \
  src/eventstat.cpp \
  src/flicker.cpp \
  src/game.cpp \
  src/gridtile.cpp \
  src/grouppad.cpp \
  src/gupoint.cpp \
  src/iface.cpp \
  src/ifccomped.cpp \
  src/ifccomputer.cpp \
  src/ifccustom.cpp \
  src/ifceditor.cpp \
  src/ifclevel.cpp \
  src/ifcoptions.cpp \
  src/ifcplanet.cpp \
  src/ifctitle.cpp \
  src/io.cpp \
  src/labpad.cpp \
  src/level.cpp \
  src/mainpad.cpp \
  src/map.cpp \
  src/mapdisp.cpp \
  src/misc.cpp \
  src/mvthing.cpp \
  src/nibble.cpp \
  src/optimize.cpp \
  src/packets.cpp \
  src/pads.cpp \
  src/paletsel.cpp \
  src/pchost.cpp \
  src/pcmain.cpp \
  src/planet.cpp \
  src/plant.cpp \
  src/player.cpp \
  src/plsiface.cpp \
  src/plspec.cpp \
  src/pointscan.cpp \
  src/printinfo.cpp \
  src/probe.cpp \
  src/record.cpp \
  src/research.cpp \
  src/scan.cpp \
  src/scanadv.cpp \
  src/scanaware.cpp \
  src/scanbldsite.cpp \
  src/scanether.cpp \
  src/screenlock.cpp \
  src/setup.cpp \
  src/smvthing.cpp \
  src/sound.cpp \
  src/spec.cpp \
  src/stuff.cpp \
  src/tables.cpp \
  src/thebase.cpp \
  src/theship.cpp \
  src/thing.cpp \
  src/thingidx.cpp \
  src/topo.cpp \
  src/xy.cpp

bio_CPPFLAGS = \
  -I"$(top_srcdir)/include" -I"$(builddir)/include" \
  -I"$(top_srcdir)/../bflibrary/include" \
  -I"$(top_srcdir)/../bfmydraw/include" \
  -I"$(top_srcdir)/../bfnet2lib/include" \
  -I"$(top_srcdir)/../bfsoundlib/include" \
  -I"$(top_srcdir)/../smacklib/include"

bio_RCFLAGS = \
  -I"$(top_srcdir)/include" -I"$(builddir)/include" \
  $(RCFLAGS)

if HAS_WINDRES
bio_RESRCS = bio_stdres.res
else
bio_RESRCS =
endif

bio_LDADD= \
  $(builddir)/../bflibrary/libbullfrog.a \
  $(builddir)/../bfmydraw/libbfmydraw.a \
  $(builddir)/../bfnet2lib/libbfnet2.a \
  $(builddir)/../bfsoundlib/libbfsound.a \
  $(builddir)/../smacklib/libsmack.a \
  $(bio_RESRCS)

if HAS_WINDRES
%.res: $(top_srcdir)/res/%.rc
	$(WINDRES) $(bio_RCFLAGS) -i $< -J rc -o $@ -O coff
endif
