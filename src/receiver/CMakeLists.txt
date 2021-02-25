project(receiver)

set(HEADERS
    receiver.h
  )
set(SOURCES
  main.cpp
  receiver.cpp
  )

add_executable(proto_receiver
  ${SOURCES}
  ${HEADERS}
  )

qt5_use_modules(proto_receiver Core Network)

