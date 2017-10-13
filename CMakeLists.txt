cmake_minimum_required(VERSION 3.5.1)
project(dreal_cmake_example)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# ----------
# Find dReal
# ----------
list (APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake/modules")
find_package(Dreal REQUIRED)

include_directories(${DREAL_INCLUDE_DIRS})
link_directories(${DREAL_LIBRARY_DIRS})
add_definitions(${DREAL_DEFINITIONS})
add_executable(check_sat check_sat.cc)
target_link_libraries(check_sat ${DREAL_LIBRARIES})

