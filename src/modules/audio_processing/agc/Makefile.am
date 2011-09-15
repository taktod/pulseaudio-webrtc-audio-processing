noinst_LTLIBRARIES = libagc.la

libagc_la_SOURCES = main/interface/gain_control.h \
		    main/source/analog_agc.c \
		    main/source/analog_agc.h \
		    main/source/digital_agc.c \
		    main/source/digital_agc.h
libagc_la_CFLAGS = $(AM_CFLAGS) $(COMMON_CFLAGS) \
		   -I$(top_srcdir)/src/common_audio/signal_processing_library/main/interface \
		   -I$(top_srcdir)/src/modules/audio_processing/utility
