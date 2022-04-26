ACLOCAL_AMFLAGS = --install -I m4

lib_LIBRARIES = libsmack.a

libsmack_a_SOURCES = \
  src/dossmk.c \
  src/rfile.c \
  src/smackinp.c \
  src/sndmss.c \
  src/sndnone.c \
  src/unsmack.c

libsmack_a_CPPFLAGS = \
  -I$(top_srcdir)/include -I$(builddir)/include

include_HEADERS = $(wildcard include/*.h)
