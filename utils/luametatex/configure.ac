dnl Process this file with autoconf to produce a configure script.
dnl
dnl   Copyright (C) 2023 Karl Berry <tex-live@tug.org>
dnl
dnl   This file is free software; the copyright holder
dnl   gives unlimited permission to copy and/or distribute it,
dnl   with or without modifications, as long as this notice is preserved.
dnl
AC_INIT([luametatex (TeX Live)], [2.15], [tex-k@tug.org])
AC_PREREQ([2.65])
AC_CONFIG_SRCDIR([luametatex-src/])
AC_CONFIG_AUX_DIR([../../build-aux])
AC_CONFIG_MACRO_DIR([../../m4])

KPSE_BASIC([luametatex])

dnl AC_CONFIG_HEADERS([config.h])[]dnl unused, to avoid zillions of -D's on command line

dnl Checks for programs.
AC_PROG_CC
AC_PROG_INSTALL

if test "x$enable_build" != xno || test -f config.force; then

echo timestamp >config.force
fi

dnl AC_CONFIG_FILES([Makefile])

AC_OUTPUT
