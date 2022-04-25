ACLOCAL_AMFLAGS = --install -I m4

lib_LTLIBRARIES = libsmack.la 

libsmack_la_SOURCES = \
  src/dossmk.c \
  src/rfile.c \
  src/smackinp.c \
  src/sndmss.c \
  src/sndnone.c \
  src/unsmack.c

libsmack_la_CPPFLAGS = -I$(top_srcdir)/include

include_HEADERS = $(wildcard include/*.h)
