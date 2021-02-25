project(wsplugin)

set(HEADERS
    ${CMAKE_SOURCE_DIR}/src/include/destr_proto.h
  )
set(SOURCES
    wsplugin.c
  )

pkg_check_modules(WS wireshark REQUIRED)

include_directories(${WS_INCLUDE_DIRS})

add_library(ws_proto_plugin SHARED
  ${SOURCES}
  ${HEADERS}
  )
