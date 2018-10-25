project(headeronly)
add_library(headeronly INTERFACE)
target_include_directories(headeronly INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
