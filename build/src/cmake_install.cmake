# Install script for directory: /home/amber/Documents/AZURE_new/src

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
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
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/home/amber/Documents/AZURE_new/build/AZURE2" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/home/amber/Documents/AZURE_new/build/AZURE2")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/home/amber/Documents/AZURE_new/build/AZURE2"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/amber/Documents/AZURE_new/build/AZURE2")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/amber/Documents/AZURE_new/build" TYPE EXECUTABLE FILES "/home/amber/Documents/AZURE_new/build/src/AZURE2")
  if(EXISTS "$ENV{DESTDIR}/home/amber/Documents/AZURE_new/build/AZURE2" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/home/amber/Documents/AZURE_new/build/AZURE2")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/home/amber/Documents/AZURE_new/build/AZURE2"
         OLD_RPATH "/home/amber/executables/root-6.12.06/install/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/home/amber/Documents/AZURE_new/build/AZURE2")
    endif()
  endif()
endif()

