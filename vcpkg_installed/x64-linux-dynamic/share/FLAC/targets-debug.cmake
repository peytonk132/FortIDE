#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "FLAC::FLAC" for configuration "Debug"
set_property(TARGET FLAC::FLAC APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(FLAC::FLAC PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/debug/lib/libFLAC.so.14.0.0"
  IMPORTED_SONAME_DEBUG "libFLAC.so.14"
  )

list(APPEND _cmake_import_check_targets FLAC::FLAC )
list(APPEND _cmake_import_check_files_for_FLAC::FLAC "${_IMPORT_PREFIX}/debug/lib/libFLAC.so.14.0.0" )

# Import target "FLAC::FLAC++" for configuration "Debug"
set_property(TARGET FLAC::FLAC++ APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(FLAC::FLAC++ PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/debug/lib/libFLAC++.so.11.0.0"
  IMPORTED_SONAME_DEBUG "libFLAC++.so.11"
  )

list(APPEND _cmake_import_check_targets FLAC::FLAC++ )
list(APPEND _cmake_import_check_files_for_FLAC::FLAC++ "${_IMPORT_PREFIX}/debug/lib/libFLAC++.so.11.0.0" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
