ACLOCAL_AMFLAGS = --install -I m4

lib_LIBRARIES = libbfnet2.a

libbfnet2_a_SOURCES = \
  src/ipx.c \
  src/netserv.c \
  src/serasm.c \
  src/serial.cpp

libbfnet2_a_CPPFLAGS = \
  -I$(top_srcdir)/include -I$(builddir)/include \
  -I$(top_srcdir)/../bflibrary/include

include_HEADERS = $(wildcard include/*.h)
