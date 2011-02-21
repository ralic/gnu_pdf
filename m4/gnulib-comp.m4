# DO NOT EDIT! GENERATED AUTOMATICALLY!
# Copyright (C) 2002-2011 Free Software Foundation, Inc.
#
# This file is free software, distributed under the terms of the GNU
# General Public License.  As a special exception to the GNU General
# Public License, this file may be distributed as part of a program
# that contains a configuration script generated by Autoconf, under
# the same distribution terms as the rest of that program.
#
# Generated by gnulib-tool.
#
# This file represents the compiled summary of the specification in
# gnulib-cache.m4. It lists the computed macro invocations that need
# to be invoked from configure.ac.
# In projects that use version control, this file can be treated like
# other built files.


# This macro should be invoked from ./configure.ac, in the section
# "Checks for programs", right after AC_PROG_CC, and certainly before
# any checks for libraries, header files, types and library functions.
AC_DEFUN([gl_EARLY],
[
  m4_pattern_forbid([^gl_[A-Z]])dnl the gnulib macro namespace
  m4_pattern_allow([^gl_ES$])dnl a valid locale name
  m4_pattern_allow([^gl_LIBOBJS$])dnl a variable
  m4_pattern_allow([^gl_LTLIBOBJS$])dnl a variable
  AC_REQUIRE([AC_PROG_RANLIB])
  AC_REQUIRE([AM_PROG_CC_C_O])
  # Code from module arg-nonnull:
  # Code from module autobuild:
  AB_INIT
  # Code from module binary-io:
  # Code from module c++defs:
  # Code from module configmake:
  # Code from module dirname-lgpl:
  # Code from module double-slash-root:
  # Code from module dup2:
  # Code from module errno:
  # Code from module error:
  # Code from module exitfail:
  # Code from module extensions:
  AC_REQUIRE([gl_USE_SYSTEM_EXTENSIONS])
  # Code from module fcntl:
  # Code from module fcntl-h:
  # Code from module fflush:
  AC_REQUIRE([AC_FUNC_FSEEKO])
  # Code from module float:
  # Code from module fopen:
  # Code from module fopen-safer:
  # Code from module fpurge:
  # Code from module freading:
  # Code from module freopen:
  # Code from module freopen-safer:
  # Code from module fseeko:
  AC_REQUIRE([AC_FUNC_FSEEKO])
  # Code from module ftello:
  AC_REQUIRE([AC_FUNC_FSEEKO])
  # Code from module gendocs:
  # Code from module getdelim:
  # Code from module getdtablesize:
  # Code from module getline:
  # Code from module getopt-gnu:
  # Code from module getopt-posix:
  # Code from module gettext-h:
  # Code from module gettimeofday:
  # Code from module gnumakefile:
  # Code from module havelib:
  # Code from module include_next:
  # Code from module inline:
  # Code from module intprops:
  # Code from module linked-list:
  # Code from module linkedhash-list:
  # Code from module list:
  # Code from module localcharset:
  # Code from module localename:
  # Code from module lock:
  # Code from module lseek:
  # Code from module lstat:
  # Code from module maintainer-makefile:
  # Code from module malloc-gnu:
  # Code from module malloc-posix:
  # Code from module math:
  # Code from module mkdir:
  # Code from module multiarch:
  # Code from module open:
  # Code from module pathmax:
  # Code from module pmccabe2html:
  # Code from module progname:
  # Code from module realloc-posix:
  # Code from module rmdir:
  # Code from module size_max:
  # Code from module stat:
  # Code from module stdbool:
  # Code from module stddef:
  # Code from module stdint:
  # Code from module stdio:
  # Code from module stdlib:
  # Code from module streq:
  # Code from module strerror:
  # Code from module string:
  # Code from module sys_stat:
  # Code from module sys_time:
  # Code from module tempname:
  # Code from module threadlib:
  gl_THREADLIB_EARLY
  # Code from module time:
  # Code from module tmpdir:
  # Code from module tmpfile:
  # Code from module tmpfile-safer:
  # Code from module unistd:
  # Code from module unistd-safer:
  # Code from module unistr/base:
  # Code from module unistr/u8-check:
  # Code from module unitypes:
  # Code from module unused-parameter:
  # Code from module useless-if-before-free:
  # Code from module vc-list-files:
  # Code from module warn-on-use:
  # Code from module xalloc:
  # Code from module xalloc-die:
  # Code from module xsize:
])

# This macro should be invoked from ./configure.ac, in the section
# "Check for header files, types and library functions".
AC_DEFUN([gl_INIT],
[
  AM_CONDITIONAL([GL_COND_LIBTOOL], [true])
  gl_cond_libtool=true
  gl_m4_base='m4'
  m4_pushdef([AC_LIBOBJ], m4_defn([gl_LIBOBJ]))
  m4_pushdef([AC_REPLACE_FUNCS], m4_defn([gl_REPLACE_FUNCS]))
  m4_pushdef([AC_LIBSOURCES], m4_defn([gl_LIBSOURCES]))
  m4_pushdef([gl_LIBSOURCES_LIST], [])
  m4_pushdef([gl_LIBSOURCES_DIR], [])
  gl_COMMON
  gl_source_base='lib'
  # Code from module arg-nonnull:
  # Code from module autobuild:
  # Code from module binary-io:
  # Code from module c++defs:
  # Code from module configmake:
  gl_CONFIGMAKE_PREP
  # Code from module dirname-lgpl:
  gl_DIRNAME_LGPL
  # Code from module double-slash-root:
  gl_DOUBLE_SLASH_ROOT
  # Code from module dup2:
  gl_FUNC_DUP2
  gl_UNISTD_MODULE_INDICATOR([dup2])
  # Code from module errno:
  gl_HEADER_ERRNO_H
  # Code from module error:
  gl_ERROR
  m4_ifdef([AM_XGETTEXT_OPTION],
    [AM_][XGETTEXT_OPTION([--flag=error:3:c-format])
     AM_][XGETTEXT_OPTION([--flag=error_at_line:5:c-format])])
  # Code from module exitfail:
  # Code from module extensions:
  # Code from module fcntl:
  gl_FUNC_FCNTL
  gl_FCNTL_MODULE_INDICATOR([fcntl])
  # Code from module fcntl-h:
  gl_FCNTL_H
  # Code from module fflush:
  gl_FUNC_FFLUSH
  gl_STDIO_MODULE_INDICATOR([fflush])
  # Code from module float:
  gl_FLOAT_H
  # Code from module fopen:
  gl_FUNC_FOPEN
  gl_STDIO_MODULE_INDICATOR([fopen])
  # Code from module fopen-safer:
  gl_FOPEN_SAFER
  gl_MODULE_INDICATOR([fopen-safer])
  # Code from module fpurge:
  gl_FUNC_FPURGE
  gl_STDIO_MODULE_INDICATOR([fpurge])
  # Code from module freading:
  gl_FUNC_FREADING
  # Code from module freopen:
  gl_FUNC_FREOPEN
  gl_STDIO_MODULE_INDICATOR([freopen])
  # Code from module freopen-safer:
  gl_FREOPEN_SAFER
  gl_MODULE_INDICATOR([freopen-safer])
  # Code from module fseeko:
  gl_FUNC_FSEEKO
  gl_STDIO_MODULE_INDICATOR([fseeko])
  # Code from module ftello:
  gl_FUNC_FTELLO
  gl_STDIO_MODULE_INDICATOR([ftello])
  # Code from module gendocs:
  # Code from module getdelim:
  gl_FUNC_GETDELIM
  gl_STDIO_MODULE_INDICATOR([getdelim])
  # Code from module getdtablesize:
  gl_FUNC_GETDTABLESIZE
  gl_UNISTD_MODULE_INDICATOR([getdtablesize])
  # Code from module getline:
  gl_FUNC_GETLINE
  gl_STDIO_MODULE_INDICATOR([getline])
  # Code from module getopt-gnu:
  gl_FUNC_GETOPT_GNU
  gl_MODULE_INDICATOR_FOR_TESTS([getopt-gnu])
  # Code from module getopt-posix:
  gl_FUNC_GETOPT_POSIX
  # Code from module gettext-h:
  AC_SUBST([LIBINTL])
  AC_SUBST([LTLIBINTL])
  # Code from module gettimeofday:
  gl_FUNC_GETTIMEOFDAY
  gl_SYS_TIME_MODULE_INDICATOR([gettimeofday])
  # Code from module gnumakefile:
  # Autoconf 2.61a.99 and earlier don't support linking a file only
  # in VPATH builds.  But since GNUmakefile is for maintainer use
  # only, it does not matter if we skip the link with older autoconf.
  # Automake 1.10.1 and earlier try to remove GNUmakefile in non-VPATH
  # builds, so use a shell variable to bypass this.
  GNUmakefile=GNUmakefile
  m4_if(m4_version_compare([2.61a.100],
  	m4_defn([m4_PACKAGE_VERSION])), [1], [],
        [AC_CONFIG_LINKS([$GNUmakefile:$GNUmakefile], [],
  	[GNUmakefile=$GNUmakefile])])
  # Code from module havelib:
  # Code from module include_next:
  # Code from module inline:
  gl_INLINE
  # Code from module intprops:
  # Code from module linked-list:
  # Code from module linkedhash-list:
  # Code from module list:
  gl_LIST
  # Code from module localcharset:
  gl_LOCALCHARSET
  LOCALCHARSET_TESTS_ENVIRONMENT="CHARSETALIASDIR=\"\$(top_builddir)/$gl_source_base\""
  AC_SUBST([LOCALCHARSET_TESTS_ENVIRONMENT])
  # Code from module localename:
  gl_LOCALENAME
  # Code from module lock:
  gl_LOCK
  # Code from module lseek:
  gl_FUNC_LSEEK
  gl_UNISTD_MODULE_INDICATOR([lseek])
  # Code from module lstat:
  gl_FUNC_LSTAT
  gl_SYS_STAT_MODULE_INDICATOR([lstat])
  # Code from module maintainer-makefile:
  AC_CONFIG_COMMANDS_PRE([m4_ifdef([AH_HEADER],
    [AC_SUBST([CONFIG_INCLUDE], m4_defn([AH_HEADER]))])])
  # Code from module malloc-gnu:
  gl_FUNC_MALLOC_GNU
  gl_MODULE_INDICATOR([malloc-gnu])
  # Code from module malloc-posix:
  gl_FUNC_MALLOC_POSIX
  gl_STDLIB_MODULE_INDICATOR([malloc-posix])
  # Code from module math:
  gl_MATH_H
  # Code from module mkdir:
  gl_FUNC_MKDIR
  # Code from module multiarch:
  gl_MULTIARCH
  # Code from module open:
  gl_FUNC_OPEN
  gl_FCNTL_MODULE_INDICATOR([open])
  # Code from module pathmax:
  gl_PATHMAX
  # Code from module pmccabe2html:
  AC_PATH_PROG([PMCCABE], [pmccabe], [false])
  # Code from module progname:
  AC_CHECK_DECLS([program_invocation_name], [], [], [#include <errno.h>])
  AC_CHECK_DECLS([program_invocation_short_name], [], [], [#include <errno.h>])
  # Code from module realloc-posix:
  gl_FUNC_REALLOC_POSIX
  gl_STDLIB_MODULE_INDICATOR([realloc-posix])
  # Code from module rmdir:
  gl_FUNC_RMDIR
  gl_UNISTD_MODULE_INDICATOR([rmdir])
  # Code from module size_max:
  gl_SIZE_MAX
  # Code from module stat:
  gl_FUNC_STAT
  gl_SYS_STAT_MODULE_INDICATOR([stat])
  # Code from module stdbool:
  AM_STDBOOL_H
  # Code from module stddef:
  gl_STDDEF_H
  # Code from module stdint:
  gl_STDINT_H
  # Code from module stdio:
  gl_STDIO_H
  # Code from module stdlib:
  gl_STDLIB_H
  # Code from module streq:
  # Code from module strerror:
  gl_FUNC_STRERROR
  gl_STRING_MODULE_INDICATOR([strerror])
  # Code from module string:
  gl_HEADER_STRING_H
  # Code from module sys_stat:
  gl_HEADER_SYS_STAT_H
  AC_PROG_MKDIR_P
  # Code from module sys_time:
  gl_HEADER_SYS_TIME_H
  AC_PROG_MKDIR_P
  # Code from module tempname:
  gl_FUNC_GEN_TEMPNAME
  # Code from module threadlib:
  gl_THREADLIB
  # Code from module time:
  gl_HEADER_TIME_H
  # Code from module tmpdir:
  gt_TMPDIR
  # Code from module tmpfile:
  gl_FUNC_TMPFILE
  gl_STDIO_MODULE_INDICATOR([tmpfile])
  # Code from module tmpfile-safer:
  gl_TMPFILE_SAFER
  gl_MODULE_INDICATOR([tmpfile-safer])
  # Code from module unistd:
  gl_UNISTD_H
  # Code from module unistd-safer:
  gl_UNISTD_SAFER
  # Code from module unistr/base:
  gl_LIBUNISTRING_LIBHEADER([0.9.2], [unistr.h])
  # Code from module unistr/u8-check:
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u8-check])
  # Code from module unitypes:
  gl_LIBUNISTRING_LIBHEADER([0.9], [unitypes.h])
  # Code from module unused-parameter:
  # Code from module useless-if-before-free:
  # Code from module vc-list-files:
  # Code from module warn-on-use:
  # Code from module xalloc:
  gl_XALLOC
  # Code from module xalloc-die:
  # Code from module xsize:
  gl_XSIZE
  # End of code from modules
  m4_ifval(gl_LIBSOURCES_LIST, [
    m4_syscmd([test ! -d ]m4_defn([gl_LIBSOURCES_DIR])[ ||
      for gl_file in ]gl_LIBSOURCES_LIST[ ; do
        if test ! -r ]m4_defn([gl_LIBSOURCES_DIR])[/$gl_file ; then
          echo "missing file ]m4_defn([gl_LIBSOURCES_DIR])[/$gl_file" >&2
          exit 1
        fi
      done])dnl
      m4_if(m4_sysval, [0], [],
        [AC_FATAL([expected source file, required through AC_LIBSOURCES, not found])])
  ])
  m4_popdef([gl_LIBSOURCES_DIR])
  m4_popdef([gl_LIBSOURCES_LIST])
  m4_popdef([AC_LIBSOURCES])
  m4_popdef([AC_REPLACE_FUNCS])
  m4_popdef([AC_LIBOBJ])
  AC_CONFIG_COMMANDS_PRE([
    gl_libobjs=
    gl_ltlibobjs=
    if test -n "$gl_LIBOBJS"; then
      # Remove the extension.
      sed_drop_objext='s/\.o$//;s/\.obj$//'
      for i in `for i in $gl_LIBOBJS; do echo "$i"; done | sed -e "$sed_drop_objext" | sort | uniq`; do
        gl_libobjs="$gl_libobjs $i.$ac_objext"
        gl_ltlibobjs="$gl_ltlibobjs $i.lo"
      done
    fi
    AC_SUBST([gl_LIBOBJS], [$gl_libobjs])
    AC_SUBST([gl_LTLIBOBJS], [$gl_ltlibobjs])
  ])
  gltests_libdeps=
  gltests_ltlibdeps=
  m4_pushdef([AC_LIBOBJ], m4_defn([gltests_LIBOBJ]))
  m4_pushdef([AC_REPLACE_FUNCS], m4_defn([gltests_REPLACE_FUNCS]))
  m4_pushdef([AC_LIBSOURCES], m4_defn([gltests_LIBSOURCES]))
  m4_pushdef([gltests_LIBSOURCES_LIST], [])
  m4_pushdef([gltests_LIBSOURCES_DIR], [])
  gl_COMMON
  gl_source_base='tests'
changequote(,)dnl
  gltests_WITNESS=IN_`echo "${PACKAGE-$PACKAGE_TARNAME}" | LC_ALL=C tr abcdefghijklmnopqrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ | LC_ALL=C sed -e 's/[^A-Z0-9_]/_/g'`_GNULIB_TESTS
changequote([, ])dnl
  AC_SUBST([gltests_WITNESS])
  gl_module_indicator_condition=$gltests_WITNESS
  m4_pushdef([gl_MODULE_INDICATOR_CONDITION], [$gl_module_indicator_condition])
  m4_popdef([gl_MODULE_INDICATOR_CONDITION])
  m4_ifval(gltests_LIBSOURCES_LIST, [
    m4_syscmd([test ! -d ]m4_defn([gltests_LIBSOURCES_DIR])[ ||
      for gl_file in ]gltests_LIBSOURCES_LIST[ ; do
        if test ! -r ]m4_defn([gltests_LIBSOURCES_DIR])[/$gl_file ; then
          echo "missing file ]m4_defn([gltests_LIBSOURCES_DIR])[/$gl_file" >&2
          exit 1
        fi
      done])dnl
      m4_if(m4_sysval, [0], [],
        [AC_FATAL([expected source file, required through AC_LIBSOURCES, not found])])
  ])
  m4_popdef([gltests_LIBSOURCES_DIR])
  m4_popdef([gltests_LIBSOURCES_LIST])
  m4_popdef([AC_LIBSOURCES])
  m4_popdef([AC_REPLACE_FUNCS])
  m4_popdef([AC_LIBOBJ])
  AC_CONFIG_COMMANDS_PRE([
    gltests_libobjs=
    gltests_ltlibobjs=
    if test -n "$gltests_LIBOBJS"; then
      # Remove the extension.
      sed_drop_objext='s/\.o$//;s/\.obj$//'
      for i in `for i in $gltests_LIBOBJS; do echo "$i"; done | sed -e "$sed_drop_objext" | sort | uniq`; do
        gltests_libobjs="$gltests_libobjs $i.$ac_objext"
        gltests_ltlibobjs="$gltests_ltlibobjs $i.lo"
      done
    fi
    AC_SUBST([gltests_LIBOBJS], [$gltests_libobjs])
    AC_SUBST([gltests_LTLIBOBJS], [$gltests_ltlibobjs])
  ])
])

# Like AC_LIBOBJ, except that the module name goes
# into gl_LIBOBJS instead of into LIBOBJS.
AC_DEFUN([gl_LIBOBJ], [
  AS_LITERAL_IF([$1], [gl_LIBSOURCES([$1.c])])dnl
  gl_LIBOBJS="$gl_LIBOBJS $1.$ac_objext"
])

# Like AC_REPLACE_FUNCS, except that the module name goes
# into gl_LIBOBJS instead of into LIBOBJS.
AC_DEFUN([gl_REPLACE_FUNCS], [
  m4_foreach_w([gl_NAME], [$1], [AC_LIBSOURCES(gl_NAME[.c])])dnl
  AC_CHECK_FUNCS([$1], , [gl_LIBOBJ($ac_func)])
])

# Like AC_LIBSOURCES, except the directory where the source file is
# expected is derived from the gnulib-tool parameterization,
# and alloca is special cased (for the alloca-opt module).
# We could also entirely rely on EXTRA_lib..._SOURCES.
AC_DEFUN([gl_LIBSOURCES], [
  m4_foreach([_gl_NAME], [$1], [
    m4_if(_gl_NAME, [alloca.c], [], [
      m4_define([gl_LIBSOURCES_DIR], [lib])
      m4_append([gl_LIBSOURCES_LIST], _gl_NAME, [ ])
    ])
  ])
])

# Like AC_LIBOBJ, except that the module name goes
# into gltests_LIBOBJS instead of into LIBOBJS.
AC_DEFUN([gltests_LIBOBJ], [
  AS_LITERAL_IF([$1], [gltests_LIBSOURCES([$1.c])])dnl
  gltests_LIBOBJS="$gltests_LIBOBJS $1.$ac_objext"
])

# Like AC_REPLACE_FUNCS, except that the module name goes
# into gltests_LIBOBJS instead of into LIBOBJS.
AC_DEFUN([gltests_REPLACE_FUNCS], [
  m4_foreach_w([gl_NAME], [$1], [AC_LIBSOURCES(gl_NAME[.c])])dnl
  AC_CHECK_FUNCS([$1], , [gltests_LIBOBJ($ac_func)])
])

# Like AC_LIBSOURCES, except the directory where the source file is
# expected is derived from the gnulib-tool parameterization,
# and alloca is special cased (for the alloca-opt module).
# We could also entirely rely on EXTRA_lib..._SOURCES.
AC_DEFUN([gltests_LIBSOURCES], [
  m4_foreach([_gl_NAME], [$1], [
    m4_if(_gl_NAME, [alloca.c], [], [
      m4_define([gltests_LIBSOURCES_DIR], [tests])
      m4_append([gltests_LIBSOURCES_LIST], _gl_NAME, [ ])
    ])
  ])
])

# This macro records the list of files which have been installed by
# gnulib-tool and may be removed by future gnulib-tool invocations.
AC_DEFUN([gl_FILE_LIST], [
  build-aux/arg-nonnull.h
  build-aux/c++defs.h
  build-aux/config.rpath
  build-aux/gendocs.sh
  build-aux/pmccabe.css
  build-aux/pmccabe2html
  build-aux/unused-parameter.h
  build-aux/useless-if-before-free
  build-aux/vc-list-files
  build-aux/warn-on-use.h
  doc/gendocs_template
  lib/basename-lgpl.c
  lib/binary-io.h
  lib/config.charset
  lib/dirname-lgpl.c
  lib/dirname.h
  lib/dup-safer.c
  lib/dup2.c
  lib/errno.in.h
  lib/error.c
  lib/error.h
  lib/exitfail.c
  lib/exitfail.h
  lib/fcntl.c
  lib/fcntl.in.h
  lib/fd-safer.c
  lib/fflush.c
  lib/float.in.h
  lib/fopen-safer.c
  lib/fopen.c
  lib/fpurge.c
  lib/freading.c
  lib/freading.h
  lib/freopen-safer.c
  lib/freopen.c
  lib/fseeko.c
  lib/ftello.c
  lib/getdelim.c
  lib/getdtablesize.c
  lib/getline.c
  lib/getopt.c
  lib/getopt.in.h
  lib/getopt1.c
  lib/getopt_int.h
  lib/gettext.h
  lib/gettimeofday.c
  lib/gl_anyhash_list1.h
  lib/gl_anyhash_list2.h
  lib/gl_anylinked_list1.h
  lib/gl_anylinked_list2.h
  lib/gl_linked_list.c
  lib/gl_linked_list.h
  lib/gl_linkedhash_list.c
  lib/gl_linkedhash_list.h
  lib/gl_list.c
  lib/gl_list.h
  lib/glthread/lock.c
  lib/glthread/lock.h
  lib/glthread/threadlib.c
  lib/intprops.h
  lib/localcharset.c
  lib/localcharset.h
  lib/localename.c
  lib/localename.h
  lib/lseek.c
  lib/lstat.c
  lib/malloc.c
  lib/math.in.h
  lib/mkdir.c
  lib/open.c
  lib/pathmax.h
  lib/pipe-safer.c
  lib/progname.c
  lib/progname.h
  lib/realloc.c
  lib/ref-add.sin
  lib/ref-del.sin
  lib/rmdir.c
  lib/size_max.h
  lib/stat.c
  lib/stdbool.in.h
  lib/stddef.in.h
  lib/stdint.in.h
  lib/stdio--.h
  lib/stdio-impl.h
  lib/stdio-safer.h
  lib/stdio-write.c
  lib/stdio.in.h
  lib/stdlib.in.h
  lib/streq.h
  lib/strerror.c
  lib/string.in.h
  lib/stripslash.c
  lib/sys_stat.in.h
  lib/sys_time.in.h
  lib/tempname.c
  lib/tempname.h
  lib/time.in.h
  lib/tmpdir.c
  lib/tmpdir.h
  lib/tmpfile-safer.c
  lib/tmpfile.c
  lib/unistd--.h
  lib/unistd-safer.h
  lib/unistd.in.h
  lib/unistr.in.h
  lib/unistr/u8-check.c
  lib/unitypes.in.h
  lib/xalloc-die.c
  lib/xalloc.h
  lib/xmalloc.c
  lib/xsize.h
  m4/00gnulib.m4
  m4/asm-underscore.m4
  m4/autobuild.m4
  m4/codeset.m4
  m4/configmake.m4
  m4/dirname.m4
  m4/dos.m4
  m4/double-slash-root.m4
  m4/dup2.m4
  m4/errno_h.m4
  m4/error.m4
  m4/extensions.m4
  m4/fcntl-o.m4
  m4/fcntl.m4
  m4/fcntl_h.m4
  m4/fflush.m4
  m4/float_h.m4
  m4/fopen.m4
  m4/fpurge.m4
  m4/freading.m4
  m4/freopen.m4
  m4/fseeko.m4
  m4/ftello.m4
  m4/getdelim.m4
  m4/getdtablesize.m4
  m4/getline.m4
  m4/getopt.m4
  m4/gettimeofday.m4
  m4/gl_list.m4
  m4/glibc21.m4
  m4/gnulib-common.m4
  m4/include_next.m4
  m4/inline.m4
  m4/intlmacosx.m4
  m4/lcmessage.m4
  m4/lib-ld.m4
  m4/lib-link.m4
  m4/lib-prefix.m4
  m4/libunistring-base.m4
  m4/localcharset.m4
  m4/localename.m4
  m4/lock.m4
  m4/longlong.m4
  m4/lseek.m4
  m4/lstat.m4
  m4/malloc.m4
  m4/math_h.m4
  m4/mkdir.m4
  m4/mode_t.m4
  m4/multiarch.m4
  m4/onceonly.m4
  m4/open.m4
  m4/pathmax.m4
  m4/realloc.m4
  m4/rmdir.m4
  m4/size_max.m4
  m4/stat.m4
  m4/stdbool.m4
  m4/stddef_h.m4
  m4/stdint.m4
  m4/stdio-safer.m4
  m4/stdio_h.m4
  m4/stdlib_h.m4
  m4/strerror.m4
  m4/string_h.m4
  m4/sys_stat_h.m4
  m4/sys_time_h.m4
  m4/tempname.m4
  m4/threadlib.m4
  m4/time_h.m4
  m4/tmpdir.m4
  m4/tmpfile.m4
  m4/unistd-safer.m4
  m4/unistd_h.m4
  m4/warn-on-use.m4
  m4/wchar_t.m4
  m4/xalloc.m4
  m4/xsize.m4
  top/GNUmakefile
  top/maint.mk
])
