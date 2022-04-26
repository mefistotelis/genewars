ACLOCAL_AMFLAGS = --install -I m4

lib_LIBRARIES = libbfsound.a

libbfsound_a_SOURCES = \
  src/adpcm.cpp \
  src/ail.c \
  src/aila.c \
  src/aildebug.c \
  src/ailsfile.c \
  src/ailss.c \
  src/ailssa.c \
  src/ailxdig.c \
  src/ailxmidi.c \
  src/awe32.cpp \
  src/cd.cpp \
  src/cd_ctrl.cpp \
  src/dllload.c \
  src/fade_sam.cpp \
  src/free_aud.cpp \
  src/free_mus.cpp \
  src/free_sou.cpp \
  src/init_aud.cpp \
  src/init_mus.cpp \
  src/init_sou.cpp \
  src/is_samp.cpp \
  src/listsamp.cpp \
  src/load_mus.cpp \
  src/load_sou.cpp \
  src/mast_vol.cpp \
  src/play_sam.cpp \
  src/playsadd.cpp \
  src/realmode.cpp \
  src/samp_pan.cpp \
  src/samp_pit.cpp \
  src/samp_vol.cpp \
  src/setupaud.cpp \
  src/snderror.cpp \
  src/sndtimer.cpp \
  src/stop_all.cpp \
  src/stop_mus.cpp \
  src/stop_sam.cpp \
  src/streamfx.cpp \
  src/switchso.cpp \
  src/variable.cpp

libbfsound_a_CPPFLAGS = \
  -I$(top_srcdir)/include -I$(builddir)/include \
  -I$(top_srcdir)/../bflibrary/include

include_HEADERS = $(wildcard include/*.h)
