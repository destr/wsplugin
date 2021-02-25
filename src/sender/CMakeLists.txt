project(sender)

set(HEADERS
    sender.h
  )
set(SOURCES
  main.cpp
  sender.cpp
  )

add_executable(proto_sender
  ${SOURCES}
  ${HEADERS}
  )

qt5_use_modules(proto_sender Core Network)

