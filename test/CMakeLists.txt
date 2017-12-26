cmake_minimum_required(VERSION 2.8)

add_definitions("-Wall -std=c++11")
add_definitions(-D__DIR__="${PROJECT_SOURCE_DIR}")
add_definitions(-DWEBRTC_POSIX)
add_definitions(-DWEBRTC_AUDIO_PROCESSING_ONLY_BUILD)

include_directories(${PROJECT_SOURCE_DIR}/../webrtc)
include_directories(${PROJECT_SOURCE_DIR}/../)
link_directories(${PROJECT_SOURCE_DIR}/../webrtc/modules/audio_processing/.libs/)
add_executable(webrtcInitializeTest initializeTest.cpp)

target_link_libraries(webrtcInitializeTest
  webrtc_audio_processing
  )