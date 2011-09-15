SUBDIRS = utility ns aec aecm agc
lib_LTLIBRARIES = libwebrtc_audio_processing.la

if NS_FIXED
COMMON_CXXFLAGS += -DWEBRTC_NS_FIXED=1
NS_LIB = libns_fix
else
COMMON_CXXFLAGS += -DWEBRTC_NS_FLOAT=1
NS_LIB = libns
endif

webrtcincludedir = $(includedir)/webrtc_audio_processing
webrtcinclude_HEADERS = $(top_srcdir)/src/typedefs.h \
			$(top_srcdir)/src/modules/interface/module.h \
			main/interface/audio_processing.h \
			$(top_srcdir)/src/common_types.h \
			$(top_srcdir)/src/modules/interface/module_common_types.h

libwebrtc_audio_processing_la_SOURCES =  main/interface/audio_processing.h \
					 main/source/audio_buffer.cc \
					 main/source/audio_buffer.h \
					 main/source/audio_processing_impl.cc \
					 main/source/audio_processing_impl.h \
					 main/source/echo_cancellation_impl.cc \
					 main/source/echo_cancellation_impl.h \
					 main/source/echo_control_mobile_impl.cc \
					 main/source/echo_control_mobile_impl.h \
					 main/source/gain_control_impl.cc \
					 main/source/gain_control_impl.h \
					 main/source/high_pass_filter_impl.cc \
					 main/source/high_pass_filter_impl.h \
					 main/source/level_estimator_impl.cc \
					 main/source/level_estimator_impl.h \
					 main/source/noise_suppression_impl.cc \
					 main/source/noise_suppression_impl.h \
					 main/source/splitting_filter.cc \
					 main/source/splitting_filter.h \
					 main/source/processing_component.cc \
					 main/source/processing_component.h \
					 main/source/voice_detection_impl.cc \
					 main/source/voice_detection_impl.h
libwebrtc_audio_processing_la_CXXFLAGS = $(AM_CXXFLAGS) $(COMMON_CXXFLAGS) \
				       -I$(top_srcdir)/src/common_audio/signal_processing_library/main/interface \
				       -I$(top_srcdir)/src/common_audio/vad/main/interface \
				       -I$(top_srcdir)/src/system_wrappers/interface \
				       -I$(top_srcdir)/src/modules/audio_processing/utility \
				       -I$(top_srcdir)/src/modules/audio_processing/ns/main/interface \
				       -I$(top_srcdir)/src/modules/audio_processing/aec/main/interface \
				       -I$(top_srcdir)/src/modules/audio_processing/aecm/main/interface \
				       -I$(top_srcdir)/src/modules/audio_processing/agc/main/interface
libwebrtc_audio_processing_la_LIBADD = $(top_builddir)/src/system_wrappers/libsystem_wrappers.la \
				       $(top_builddir)/src/common_audio/signal_processing_library/libspl.la \
				       $(top_builddir)/src/common_audio/vad/libvad.la \
				       $(top_builddir)/src/modules/audio_processing/utility/libapm_util.la \
				       $(top_builddir)/src/modules/audio_processing/ns/$(NS_LIB).la \
				       $(top_builddir)/src/modules/audio_processing/aec/libaec.la \
				       $(top_builddir)/src/modules/audio_processing/aecm/libaecm.la \
				       $(top_builddir)/src/modules/audio_processing/agc/libagc.la
libwebrtc_audio_processing_la_LDFLAGS = $(AM_LDFLAGS) -version-info $(LIBWEBRTC_AUDIO_PROCESSING_VERSION_INFO)
