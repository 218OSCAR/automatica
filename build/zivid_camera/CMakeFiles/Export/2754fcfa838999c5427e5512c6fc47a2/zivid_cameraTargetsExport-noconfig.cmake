#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "zivid_camera::zivid_camera_component" for configuration ""
set_property(TARGET zivid_camera::zivid_camera_component APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(zivid_camera::zivid_camera_component PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libzivid_camera_component.so"
  IMPORTED_SONAME_NOCONFIG "libzivid_camera_component.so"
  )

list(APPEND _cmake_import_check_targets zivid_camera::zivid_camera_component )
list(APPEND _cmake_import_check_files_for_zivid_camera::zivid_camera_component "${_IMPORT_PREFIX}/lib/libzivid_camera_component.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
