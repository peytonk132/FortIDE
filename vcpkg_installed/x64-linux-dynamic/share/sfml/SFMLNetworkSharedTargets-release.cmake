#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "SFML::Network" for configuration "Release"
set_property(TARGET SFML::Network APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(SFML::Network PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libsfml-network.so.3.0.2"
  IMPORTED_SONAME_RELEASE "libsfml-network.so.3.0"
  )

list(APPEND _cmake_import_check_targets SFML::Network )
list(APPEND _cmake_import_check_files_for_SFML::Network "${_IMPORT_PREFIX}/lib/libsfml-network.so.3.0.2" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
