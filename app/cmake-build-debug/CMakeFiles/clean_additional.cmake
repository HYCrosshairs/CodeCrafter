# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "lib/cxxplot/CMakeFiles/cxxplot_autogen.dir/AutogenUsed.txt"
  "lib/cxxplot/CMakeFiles/cxxplot_autogen.dir/ParseCache.txt"
  "lib/cxxplot/cxxplot_autogen"
  )
endif()
