noinst_LTLIBRARIES = libns.la libns_fix.la

libns_la_SOURCES = main/interface/noise_suppression.h \
		   main/source/noise_suppression.c \
		   main/source/windows_private.h \
		   main/source/defines.h \
		   main/source/ns_core.c \
		   main/source/ns_core.h
libns_la_CFLAGS = $(AM_CFLAGS) $(COMMON_CFLAGS) \
		  -I$(top_srcdir)/src/common_audio/signal_processing_library/main/interface \
		  -I$(top_srcdir)/src/modules/audio_processing/utility

libns_fix_la_SOURCES = main/interface/noise_suppression_x.h \
		       main/source/noise_suppression_x.c \
		       main/source/nsx_defines.h \
		       main/source/nsx_core.c \
		       main/source/nsx_core.h
libns_fix_la_CFLAGS = $(AM_CFLAGS) $(COMMON_CFLAGS) \
		      -I$(top_srcdir)/src/common_audio/signal_processing_library/main/interface \
		      -I$(top_srcdir)/src/modules/audio_processing/utility
