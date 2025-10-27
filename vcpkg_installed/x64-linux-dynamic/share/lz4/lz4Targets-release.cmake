#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "LZ4::lz4_shared" for configuration "Release"
set_property(TARGET LZ4::lz4_shared APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LZ4::lz4_shared PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/liblz4.so.1.10.0"
  IMPORTED_SONAME_RELEASE "liblz4.so.1"
  )

list(APPEND _cmake_import_check_targets LZ4::lz4_shared )
list(APPEND _cmake_import_check_files_for_LZ4::lz4_shared "${_IMPORT_PREFIX}/lib/liblz4.so.1.10.0" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
