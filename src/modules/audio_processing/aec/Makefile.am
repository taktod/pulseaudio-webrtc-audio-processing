noinst_LTLIBRARIES = libaec.la

libaec_la_SOURCES = main/interface/echo_cancellation.h \
		    main/source/echo_cancellation.c \
		    main/source/aec_core.h \
		    main/source/aec_core.c \
		    main/source/aec_core_sse2.c \
		    main/source/aec_rdft.h \
		    main/source/aec_rdft.c \
		    main/source/aec_rdft_sse2.c \
		    main/source/resampler.h \
		    main/source/resampler.c
libaec_la_CFLAGS = $(AM_CFLAGS) $(COMMON_CFLAGS) \
		   -I$(top_srcdir)/src/common_audio/signal_processing_library/main/interface \
		   -I$(top_srcdir)/src/system_wrappers/interface \
		   -I$(top_srcdir)/src/modules/audio_processing/utility
