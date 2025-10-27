#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "SFML::Audio" for configuration "Debug"
set_property(TARGET SFML::Audio APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(SFML::Audio PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/debug/lib/libsfml-audio-d.so.3.0.2"
  IMPORTED_SONAME_DEBUG "libsfml-audio-d.so.3.0"
  )

list(APPEND _cmake_import_check_targets SFML::Audio )
list(APPEND _cmake_import_check_files_for_SFML::Audio "${_IMPORT_PREFIX}/debug/lib/libsfml-audio-d.so.3.0.2" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
