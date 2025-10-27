#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "Boost::system" for configuration "Debug"
set_property(TARGET Boost::system APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(Boost::system PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/debug/lib/libboost_system.so.1.86.0"
  IMPORTED_SONAME_DEBUG "libboost_system.so.1.86.0"
  )

list(APPEND _cmake_import_check_targets Boost::system )
list(APPEND _cmake_import_check_files_for_Boost::system "${_IMPORT_PREFIX}/debug/lib/libboost_system.so.1.86.0" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
