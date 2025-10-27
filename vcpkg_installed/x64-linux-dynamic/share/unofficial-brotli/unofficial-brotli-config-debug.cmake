#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "unofficial::brotli::brotlienc" for configuration "Debug"
set_property(TARGET unofficial::brotli::brotlienc APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(unofficial::brotli::brotlienc PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/debug/lib/libbrotlienc.so.1.1.0"
  IMPORTED_SONAME_DEBUG "libbrotlienc.so.1"
  )

list(APPEND _cmake_import_check_targets unofficial::brotli::brotlienc )
list(APPEND _cmake_import_check_files_for_unofficial::brotli::brotlienc "${_IMPORT_PREFIX}/debug/lib/libbrotlienc.so.1.1.0" )

# Import target "unofficial::brotli::brotlidec" for configuration "Debug"
set_property(TARGET unofficial::brotli::brotlidec APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(unofficial::brotli::brotlidec PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/debug/lib/libbrotlidec.so.1.1.0"
  IMPORTED_SONAME_DEBUG "libbrotlidec.so.1"
  )

list(APPEND _cmake_import_check_targets unofficial::brotli::brotlidec )
list(APPEND _cmake_import_check_files_for_unofficial::brotli::brotlidec "${_IMPORT_PREFIX}/debug/lib/libbrotlidec.so.1.1.0" )

# Import target "unofficial::brotli::brotlicommon" for configuration "Debug"
set_property(TARGET unofficial::brotli::brotlicommon APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(unofficial::brotli::brotlicommon PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/debug/lib/libbrotlicommon.so.1.1.0"
  IMPORTED_SONAME_DEBUG "libbrotlicommon.so.1"
  )

list(APPEND _cmake_import_check_targets unofficial::brotli::brotlicommon )
list(APPEND _cmake_import_check_files_for_unofficial::brotli::brotlicommon "${_IMPORT_PREFIX}/debug/lib/libbrotlicommon.so.1.1.0" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
