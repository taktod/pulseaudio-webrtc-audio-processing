SUBDIRS = webrtc

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = webrtc-audio-processing.pc

webrtcincludedir = $(includedir)/webrtc_audio_processing
nobase_webrtcinclude_HEADERS = webrtc/base/arraysize.h \
			       webrtc/base/basictypes.h \
			       webrtc/base/platform_file.h \
			       webrtc/common.h \
			       webrtc/typedefs.h \
			       webrtc/modules/audio_processing/beamformer/array_util.h \
			       webrtc/modules/audio_processing/include/audio_processing.h
# FIXME: We should deprecate installing this to the top directory soon
webrtcinclude_HEADERS = webrtc/modules/audio_processing/include/audio_processing.h
