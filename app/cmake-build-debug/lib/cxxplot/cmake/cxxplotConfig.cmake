
####### Expanded from @PACKAGE_INIT@ by configure_package_config_file() #######
####### Any changes to this file will be overwritten by the next CMake run ####
####### The input file was cxxplotConfigOpenGL.cmake.in                            ########

get_filename_component(PACKAGE_PREFIX_DIR "${CMAKE_CURRENT_LIST_DIR}/../../../" ABSOLUTE)

macro(set_and_check _var _file)
  set(${_var} "${_file}")
  if(NOT EXISTS "${_file}")
    message(FATAL_ERROR "File or directory ${_file} referenced by variable ${_var} does not exist !")
  endif()
endmacro()

macro(check_required_components _NAME)
  foreach(comp ${${_NAME}_FIND_COMPONENTS})
    if(NOT ${_NAME}_${comp}_FOUND)
      if(${_NAME}_FIND_REQUIRED_${comp})
        set(${_NAME}_FOUND FALSE)
      endif()
    endif()
  endforeach()
endmacro()

####################################################################################

include( CMakeFindDependencyMacro )

# if Qt is not found here, ${QT_VERSION_MAJOR} will not be populated and find_dependency will fail
# which is what we want whether the caller has designated our package with REQUIRED or not.
# Therefore REQUIRED should be avoided here.
find_package( QT NAMES Qt6 Qt5 COMPONENTS Core Widgets Gui OpenGL PrintSupport )

# No REQUIRED below because find_dependency forwards from the caller and the caller may not have our
# package designated REQUIRED
find_dependency( Qt${QT_VERSION_MAJOR}
  COMPONENTS
    Core
    Widgets
    Gui
    OpenGL
    PrintSupport
    )

find_dependency( Threads )

find_dependency( OpenGL )

if ( NOT TARGET cxxplot::cxxplot )
  include( ${CMAKE_CURRENT_LIST_DIR}/cxxplotTargets.cmake )
endif( )
