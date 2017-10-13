# This sets the following variables:
# DREAL_FOUND - True if dReal was found.
# DREAL_VERSION - dReal Version
# DREAL_INCLUDE_DIRS - Directories containing the dReal include files.
# DREAL_LIBRARY_DIRS - Directories containing the dReal library files.
# DREAL_LIBRARIES - dReal library names.
# DREAL_DEFINITIONS - Compiler flags for dReal.

find_package(PkgConfig)
pkg_check_modules(DREAL dreal)

set(DREAL_DEFINITIONS ${DREAL_CFLAGS_OTHER})
set(DREAL_LIBRARY_DIRS ${DREAL_LIBRARY_DIRS})

include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(DREAL
  FOUND_VAR DREAL_FOUND
  REQUIRED_VARS DREAL_INCLUDE_DIRS DREAL_LIBRARIES DREAL_DEFINITIONS DREAL_LIBRARY_DIRS
  VERSION_VAR DREAL_VERSION)
