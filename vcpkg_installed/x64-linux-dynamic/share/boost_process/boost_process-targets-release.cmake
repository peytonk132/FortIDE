#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "Boost::process" for configuration "Release"
set_property(TARGET Boost::process APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(Boost::process PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libboost_process.so.1.86.0"
  IMPORTED_SONAME_RELEASE "libboost_process.so.1.86.0"
  )

list(APPEND _cmake_import_check_targets Boost::process )
list(APPEND _cmake_import_check_files_for_Boost::process "${_IMPORT_PREFIX}/lib/libboost_process.so.1.86.0" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
