#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "picotool" for configuration "Release"
set_property(TARGET picotool APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(picotool PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/picotool/picotool"
  )

list(APPEND _cmake_import_check_targets picotool )
list(APPEND _cmake_import_check_files_for_picotool "${_IMPORT_PREFIX}/picotool/picotool" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
