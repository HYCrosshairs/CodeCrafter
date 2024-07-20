#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "cxxplot::cxxplot" for configuration "Debug"
set_property(TARGET cxxplot::cxxplot APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(cxxplot::cxxplot PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "CXX"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/cxxplot-0.4.2/libcxxplot.a"
  )

list(APPEND _cmake_import_check_targets cxxplot::cxxplot )
list(APPEND _cmake_import_check_files_for_cxxplot::cxxplot "${_IMPORT_PREFIX}/lib/cxxplot-0.4.2/libcxxplot.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
