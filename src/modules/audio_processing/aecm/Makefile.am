noinst_LTLIBRARIES = libaecm.la

libaecm_la_SOURCES = main/interface/echo_control_mobile.h \
		     main/source/echo_control_mobile.c \
		     main/source/aecm_core.c \
		     main/source/aecm_core.h
libaecm_la_CFLAGS = $(AM_CFLAGS) $(COMMON_CFLAGS) \
		    -I$(top_srcdir)/src/common_audio/signal_processing_library/main/interface \
		    -I$(top_srcdir)/src/modules/audio_processing/utility
