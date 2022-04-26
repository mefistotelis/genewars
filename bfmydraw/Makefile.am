ACLOCAL_AMFLAGS = --install -I m4

lib_LIBRARIES = libbfmydraw.a

libbfmydraw_a_SOURCES = \
  src/drawrng.cpp \
  src/drawspr.cpp \
  src/drawsprr.cpp \
  src/myfont.cpp \
  src/mygad.cpp \
  src/myspr.cpp \
  src/mysprr.cpp \
  src/nldata.cpp \
  src/pixbuf.cpp \
  src/str.cpp

libbfmydraw_a_CPPFLAGS = \
  -I$(top_srcdir)/include -I$(builddir)/include \
  -I$(top_srcdir)/../bflibrary/include

include_HEADERS = $(wildcard include/*.h)
