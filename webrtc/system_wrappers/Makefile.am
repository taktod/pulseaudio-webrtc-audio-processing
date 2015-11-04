noinst_LTLIBRARIES = libsystem_wrappers.la

noinst_HEADERS = include/aligned_array.h \
		 include/asm_defines.h \
		 include/compile_assert_c.h \
		 include/event_wrapper.h \
		 include/scoped_vector.h \
		 include/static_instance.h \
		 include/stl_util.h

libsystem_wrappers_la_SOURCES = include/aligned_malloc.h \
				include/cpu_features_wrapper.h \
				include/critical_section_wrapper.h \
				include/file_wrapper.h \
				include/logging.h \
				include/metrics.h \
				include/rw_lock_wrapper.h \
				include/sleep.h \
				include/thread_wrapper.h \
				include/trace.h \
				source/aligned_malloc.cc \
				source/cpu_features.cc \
				source/event.cc \
				source/event_timer_posix.h \
				source/event_timer_win.h \
				source/file_impl.cc \
				source/file_impl.h \
				source/critical_section.cc \
				source/critical_section_posix.h \
				source/critical_section_win.h \
				source/logging.cc \
				source/metrics_default.cc \
				source/rw_lock.cc \
				source/rw_lock_generic.h \
				source/rw_lock_posix.h \
				source/rw_lock_win.h \
				source/sleep.cc \
				source/thread.cc \
				source/thread_posix.h \
				source/thread_win.h \
				source/trace_impl.cc \
				source/trace_impl.h \
				source/trace_posix.h \
				source/trace_win.h
# This assumes that we want the POSIX implementation -- should eventually be
# converted to a conditional to include Windows support
libsystem_wrappers_la_SOURCES += source/critical_section_posix.cc \
				 source/event_timer_posix.cc \
				 source/rw_lock_posix.cc \
				 source/thread_posix.cc \
				 source/trace_posix.cc
libsystem_wrappers_la_CXXFLAGS = $(AM_CXXFLAGS) $(COMMON_CXXFLAGS)

EXTRA_DIST = BUILD.gn \
	     source/critical_section_win.cc \
	     source/event_timer_win.cc \
	     source/rw_lock_generic.cc \
	     source/rw_lock_win.cc \
	     source/thread_win.cc \
	     source/trace_win.cc
