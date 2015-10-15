# Revision changelog (version - date, svn rev. from upstream that was merged)
#    0.1 - 21 Oct 2011, r789
AC_INIT([webrtc-audio-processing], [0.1])
AM_INIT_AUTOMAKE([dist-xz subdir-objects tar-ustar])

AC_SUBST(LIBWEBRTC_AUDIO_PROCESSING_VERSION_INFO, [0:0:0])

AM_SILENT_RULES([yes])

AC_PROG_CC
AC_PROG_CXX
AC_PROG_LIBTOOL
AC_PROG_INSTALL

AC_LANG_C
AC_LANG_CPLUSPLUS

AC_ARG_WITH([ns-mode],
	    AS_HELP_STRING([--with-ns-mode=float|fixed], [Noise suppresion mode to use. Default is float]))

AS_CASE(["x${with_ns_mode}"],
	["fixed"], [NS_FIXED=1],
	["float"], [NS_FIXED=0],
	[NS_FIXED=0])
AM_CONDITIONAL(NS_FIXED, [test "x${NS_FIXED}" = "x1"])


# Borrowed from gst-plugins-bad
AC_CHECK_HEADER(MobileCoreServices/MobileCoreServices.h, HAVE_IOS="yes", HAVE_IOS="no", [-])

# Based on gst-plugins-bad configure.ac and defines in
# <chromium source>/build/config/BUILDCONFIG.gn and
# webrtc/BUILD.gn
AS_CASE(["${host}"],
    [*android*],
        [
         OS_CFLAGS="-DWEBRTC_ANDROID -DWEBRTC_LINUX"
         PLATFORM_CFLAGS="-DWEBRTC_POSIX"
        ],
    [*-*linux*],
        [
         OS_CFLAGS="-DWEBRTC_LINUX"
         PLATFORM_CFLAGS="-DWEBRTC_POSIX"
        ],
    [*-*darwin*],
        [
         AS_IF([test "$HAVE_IOS" = "yes"],
             [OS_FLAGS="-DWEBRTC_MAC -DWEBRTC_IOS"],
             [OS_FLAGS="-DWEBRTC_MAC"])
         PLATFORM_CFLAGS="-DWEBRTC_POSIX"
        ]
    # FIXME: Add Windows support
)
AC_SUBST(PLATFORM_CFLAGS)

COMMON_CFLAGS="-DWEBRTC_AUDIO_PROCESSING_ONLY_BUILD ${PLATFORM_CFLAGS} ${OS_CFLAGS} -DNDEBUG -I\$(top_srcdir)"
COMMON_CXXFLAGS="-std=c++11 -DWEBRTC_AUDIO_PROCESSING_ONLY_BUILD ${PLATFORM_CFLAGS} ${OS_CFLAGS} -DNDEBUG -I\$(top_srcdir)"
AC_SUBST([COMMON_CFLAGS])
AC_SUBST([COMMON_CXXFLAGS])

AC_CONFIG_FILES([
webrtc-audio-processing.pc
Makefile
webrtc/Makefile
webrtc/base/Makefile
webrtc/common_audio/Makefile
webrtc/system_wrappers/Makefile
webrtc/modules/Makefile
webrtc/modules/audio_coding/Makefile
webrtc/modules/audio_processing/Makefile
])

AC_OUTPUT
