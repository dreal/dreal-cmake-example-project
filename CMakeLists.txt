cmake_minimum_required(VERSION 3.5.1)
project(dreal_cmake_example)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# ---------------------------------
# Find dreal package via pkg-config
# ---------------------------------
find_package(PkgConfig)
pkg_check_modules(DREAL REQUIRED dreal)
include_directories(${DREAL_INCLUDE_DIRS})
link_directories(${DREAL_LIBRARY_DIRS})
add_definitions(${DREAL_CFLAGS_OTHER})
set(LIBS ${LIBS} ${DREAL_LIBRARIES})

add_executable(check_sat check_sat.cc)
target_link_libraries(check_sat ${LIBS})
