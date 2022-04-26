#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.
AC_PREREQ([2.71])

m4_define([ver_major], [0])
m4_define([ver_minor], [1])
m4_define([ver_release], [0])
m4_define([ver_build], [0])

m4_define([bio_version],
      [ver_major.ver_minor.ver_release.ver_build])

AC_INIT([bio-exec], [bio_version], [mefistotelis@gmail.com], [bio])
AC_CONFIG_SRCDIR([src/mainpad.cpp])
AC_CONFIG_HEADERS([include/config.h])
AM_INIT_AUTOMAKE([foreign subdir-objects])

# Version entries for config header.
AC_DEFINE([VER_MAJOR], [ver_major], [Major version number])
AC_DEFINE([VER_MINOR], [ver_minor], [Minor version number])
AC_DEFINE([VER_RELEASE], [ver_release], [Release number])
AC_DEFINE([VER_BUILD], [ver_build], [Build number])

# Prepare for tweaking the build based on host and target OS.
AC_CANONICAL_HOST
AC_CANONICAL_TARGET

build_for_posix=yes
build_for_windows=no
build_for_darwin=no

# Despite name, we are checking target OS here.
case "$host" in
  *-*-mingw*)
    build_for_windows=yes
    build_for_posix=no
    ;;
  *-*-darwin*)
    build_for_darwin=yes
    ;;
esac

# Checks for programs.
AC_PROG_CC
AC_PROG_CXX
#AC_PROG_LIBTOOL
PKG_PROG_PKG_CONFIG
AC_CHECK_PROGS(WINDRES, $WINDRES "${target_alias}-windres" "${target}-windres", "windres", :)

# Building for Windows, we can optionaly include resources in the executable.
AM_CONDITIONAL([HAS_WINDRES], [test -n "${WINDRES}" -a "$build_for_windows" = "yes"])
AC_SUBST([WINDRES])

# Checks for libraries.

# Checks for header files.

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.

AC_CONFIG_FILES([Makefile])
AC_OUTPUT
