# Install script for directory: /home/hy/CLionProjects/Algorithms/app/lib/cxxplot

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
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
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

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cxxplot-0.4.2" TYPE STATIC_LIBRARY FILES "/home/hy/CLionProjects/Algorithms/app/cmake-build-debug/lib/cxxplot/libcxxplot.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cxxplot-0.4.2/cxxplot" TYPE FILE FILES
    "/home/hy/CLionProjects/Algorithms/app/lib/cxxplot/include/cxxplot/align.hpp"
    "/home/hy/CLionProjects/Algorithms/app/lib/cxxplot/include/cxxplot/color.hpp"
    "/home/hy/CLionProjects/Algorithms/app/lib/cxxplot/include/cxxplot/concepts.hpp"
    "/home/hy/CLionProjects/Algorithms/app/lib/cxxplot/include/cxxplot/cxxplot"
    "/home/hy/CLionProjects/Algorithms/app/lib/cxxplot/include/cxxplot/execution.hpp"
    "/home/hy/CLionProjects/Algorithms/app/lib/cxxplot/include/cxxplot/figure.hpp"
    "/home/hy/CLionProjects/Algorithms/app/lib/cxxplot/include/cxxplot/image.hpp"
    "/home/hy/CLionProjects/Algorithms/app/lib/cxxplot/include/cxxplot/gettersetter.hpp"
    "/home/hy/CLionProjects/Algorithms/app/lib/cxxplot/include/cxxplot/graph.hpp"
    "/home/hy/CLionProjects/Algorithms/app/lib/cxxplot/include/cxxplot/named_parameter.hpp"
    "/home/hy/CLionProjects/Algorithms/app/lib/cxxplot/include/cxxplot/point2d.hpp"
    "/home/hy/CLionProjects/Algorithms/app/lib/cxxplot/include/cxxplot/range.hpp"
    "/home/hy/CLionProjects/Algorithms/app/lib/cxxplot/include/cxxplot/styles.hpp"
    "/home/hy/CLionProjects/Algorithms/app/lib/cxxplot/include/cxxplot/typetraits.hpp"
    "/home/hy/CLionProjects/Algorithms/app/lib/cxxplot/include/cxxplot/utils.hpp"
    "/home/hy/CLionProjects/Algorithms/app/lib/cxxplot/include/cxxplot/window.hpp"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/cxxplot-0.4.2/cxxplotTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/cxxplot-0.4.2/cxxplotTargets.cmake"
         "/home/hy/CLionProjects/Algorithms/app/cmake-build-debug/lib/cxxplot/CMakeFiles/Export/9c6f1a8c98bfafc1ac9dedafbbd09e1b/cxxplotTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/cxxplot-0.4.2/cxxplotTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/cxxplot-0.4.2/cxxplotTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/cxxplot-0.4.2" TYPE FILE FILES "/home/hy/CLionProjects/Algorithms/app/cmake-build-debug/lib/cxxplot/CMakeFiles/Export/9c6f1a8c98bfafc1ac9dedafbbd09e1b/cxxplotTargets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/cxxplot-0.4.2" TYPE FILE FILES "/home/hy/CLionProjects/Algorithms/app/cmake-build-debug/lib/cxxplot/CMakeFiles/Export/9c6f1a8c98bfafc1ac9dedafbbd09e1b/cxxplotTargets-debug.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/cxxplot-0.4.2" TYPE FILE FILES
    "/home/hy/CLionProjects/Algorithms/app/cmake-build-debug/lib/cxxplot/cmake/cxxplotConfig.cmake"
    "/home/hy/CLionProjects/Algorithms/app/cmake-build-debug/lib/cxxplot/cmake/cxxplotConfigVersion.cmake"
    )
endif()

