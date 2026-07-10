# Install script for directory: /data/data/com.termux/files/home/хуйня/kumir2/src/actors/robot

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/data/data/com.termux/files/usr")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "0")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set path to fallback-tool for dependency-resolution.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/data/data/com.termux/files/usr/bin/llvm-objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kumir2/translations" TYPE FILE FILES "/data/data/com.termux/files/home/хуйня/kumir2/build/share/kumir2/translations/ActorRobot_ru.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/kumir2/plugins" TYPE SHARED_LIBRARY FILES "/data/data/com.termux/files/home/хуйня/kumir2/build/lib/kumir2/plugins/libActorRobot.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/kumir2/plugins/libActorRobot.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/kumir2/plugins/libActorRobot.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/data/data/com.termux/files/usr/bin/llvm-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/kumir2/plugins/libActorRobot.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/data/data/com.termux/files/home/хуйня/kumir2/build/src/actors/robot/CMakeFiles/ActorRobot.dir/install-cxx-module-bmi-Release.cmake" OPTIONAL)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kumir2/actors/robot" TYPE DIRECTORY FILES "/data/data/com.termux/files/home/хуйня/kumir2/share/kumir2/actors/robot/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kumir2/actors/robot" TYPE DIRECTORY FILES "/data/data/com.termux/files/home/хуйня/kumir2/share/kumir2/actors/robot/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kumir2/actors/robot" TYPE DIRECTORY FILES "/data/data/com.termux/files/home/хуйня/kumir2/share/kumir2/actors/robot/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kumir2/actors/robot" TYPE DIRECTORY FILES "/data/data/com.termux/files/home/хуйня/kumir2/share/kumir2/actors/robot/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kumir2/actors/robot" TYPE DIRECTORY FILES "/data/data/com.termux/files/home/хуйня/kumir2/share/kumir2/actors/robot/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kumir2/actors/robot" TYPE DIRECTORY FILES "/data/data/com.termux/files/home/хуйня/kumir2/share/kumir2/actors/robot/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kumir2/actors/robot" TYPE DIRECTORY FILES "/data/data/com.termux/files/home/хуйня/kumir2/share/kumir2/actors/robot/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kumir2/actors/robot" TYPE DIRECTORY FILES "/data/data/com.termux/files/home/хуйня/kumir2/share/kumir2/actors/robot/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kumir2/actors/robot" TYPE DIRECTORY FILES "/data/data/com.termux/files/home/хуйня/kumir2/share/kumir2/actors/robot/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kumir2/actors/robot" TYPE DIRECTORY FILES "/data/data/com.termux/files/home/хуйня/kumir2/share/kumir2/actors/robot/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kumir2/actors/robot" TYPE DIRECTORY FILES "/data/data/com.termux/files/home/хуйня/kumir2/share/kumir2/actors/robot/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kumir2/actors/robot" TYPE DIRECTORY FILES "/data/data/com.termux/files/home/хуйня/kumir2/share/kumir2/actors/robot/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kumir2/actors/robot" TYPE DIRECTORY FILES "/data/data/com.termux/files/home/хуйня/kumir2/share/kumir2/actors/robot/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kumir2/actors/robot" TYPE DIRECTORY FILES "/data/data/com.termux/files/home/хуйня/kumir2/share/kumir2/actors/robot/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kumir2/actors/robot" TYPE DIRECTORY FILES "/data/data/com.termux/files/home/хуйня/kumir2/share/kumir2/actors/robot/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kumir2/actors/robot" TYPE DIRECTORY FILES "/data/data/com.termux/files/home/хуйня/kumir2/share/kumir2/actors/robot/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kumir2/actors/robot" TYPE DIRECTORY FILES "/data/data/com.termux/files/home/хуйня/kumir2/share/kumir2/actors/robot/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kumir2/actors/robot" TYPE DIRECTORY FILES "/data/data/com.termux/files/home/хуйня/kumir2/share/kumir2/actors/robot/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kumir2/actors/robot" TYPE DIRECTORY FILES "/data/data/com.termux/files/home/хуйня/kumir2/share/kumir2/actors/robot/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kumir2/actors/robot" TYPE DIRECTORY FILES "/data/data/com.termux/files/home/хуйня/kumir2/share/kumir2/actors/robot/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kumir2/actors/robot" TYPE DIRECTORY FILES "/data/data/com.termux/files/home/хуйня/kumir2/share/kumir2/actors/robot/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kumir2/actors/robot" TYPE DIRECTORY FILES "/data/data/com.termux/files/home/хуйня/kumir2/share/kumir2/actors/robot/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kumir2/actors/robot" TYPE DIRECTORY FILES "/data/data/com.termux/files/home/хуйня/kumir2/share/kumir2/actors/robot/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kumir2/actors/robot" TYPE DIRECTORY FILES "/data/data/com.termux/files/home/хуйня/kumir2/share/kumir2/actors/robot/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kumir2/actors/robot" TYPE DIRECTORY FILES "/data/data/com.termux/files/home/хуйня/kumir2/share/kumir2/actors/robot/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kumir2/actors/robot" TYPE DIRECTORY FILES "/data/data/com.termux/files/home/хуйня/kumir2/share/kumir2/actors/robot/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kumir2/actors/robot" TYPE DIRECTORY FILES "/data/data/com.termux/files/home/хуйня/kumir2/share/kumir2/actors/robot/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kumir2/actors/robot" TYPE DIRECTORY FILES "/data/data/com.termux/files/home/хуйня/kumir2/share/kumir2/actors/robot/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kumir2/actors/robot" TYPE DIRECTORY FILES "/data/data/com.termux/files/home/хуйня/kumir2/share/kumir2/actors/robot/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kumir2/actors/robot" TYPE DIRECTORY FILES "/data/data/com.termux/files/home/хуйня/kumir2/share/kumir2/actors/robot/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kumir2/actors/robot" TYPE DIRECTORY FILES "/data/data/com.termux/files/home/хуйня/kumir2/share/kumir2/actors/robot/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kumir2/actors/robot" TYPE DIRECTORY FILES "/data/data/com.termux/files/home/хуйня/kumir2/share/kumir2/actors/robot/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kumir2/actors/robot" TYPE DIRECTORY FILES "/data/data/com.termux/files/home/хуйня/kumir2/share/kumir2/actors/robot/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kumir2/actors/robot" TYPE DIRECTORY FILES "/data/data/com.termux/files/home/хуйня/kumir2/share/kumir2/actors/robot/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kumir2/actors/robot" TYPE DIRECTORY FILES "/data/data/com.termux/files/home/хуйня/kumir2/share/kumir2/actors/robot/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kumir2/actors/robot" TYPE DIRECTORY FILES "/data/data/com.termux/files/home/хуйня/kumir2/share/kumir2/actors/robot/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kumir2/actors/robot" TYPE DIRECTORY FILES "/data/data/com.termux/files/home/хуйня/kumir2/share/kumir2/actors/robot/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kumir2/actors/robot" TYPE DIRECTORY FILES "/data/data/com.termux/files/home/хуйня/kumir2/share/kumir2/actors/robot/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kumir2/actors/robot" TYPE DIRECTORY FILES "/data/data/com.termux/files/home/хуйня/kumir2/share/kumir2/actors/robot/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kumir2/actors/robot" TYPE DIRECTORY FILES "/data/data/com.termux/files/home/хуйня/kumir2/share/kumir2/actors/robot/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kumir2/actors/robot" TYPE DIRECTORY FILES "/data/data/com.termux/files/home/хуйня/kumir2/share/kumir2/actors/robot/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kumir2/actors/robot" TYPE DIRECTORY FILES "/data/data/com.termux/files/home/хуйня/kumir2/share/kumir2/actors/robot/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kumir2/actors/robot" TYPE DIRECTORY FILES "/data/data/com.termux/files/home/хуйня/kumir2/share/kumir2/actors/robot/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kumir2/actors/robot" TYPE DIRECTORY FILES "/data/data/com.termux/files/home/хуйня/kumir2/share/kumir2/actors/robot/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kumir2/actors/robot" TYPE DIRECTORY FILES "/data/data/com.termux/files/home/хуйня/kumir2/share/kumir2/actors/robot/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kumir2/actors/robot" TYPE DIRECTORY FILES "/data/data/com.termux/files/home/хуйня/kumir2/share/kumir2/actors/robot/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kumir2/actors/robot" TYPE DIRECTORY FILES "/data/data/com.termux/files/home/хуйня/kumir2/share/kumir2/actors/robot/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kumir2/actors/robot" TYPE DIRECTORY FILES "/data/data/com.termux/files/home/хуйня/kumir2/share/kumir2/actors/robot/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kumir2/actors/robot" TYPE DIRECTORY FILES "/data/data/com.termux/files/home/хуйня/kumir2/share/kumir2/actors/robot/")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/data/data/com.termux/files/home/хуйня/kumir2/build/src/actors/robot/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
