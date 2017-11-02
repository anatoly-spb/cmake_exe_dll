project(exe)
include_directories(. ${dll_SOURCE_DIR})
add_executable(exe main.cpp)
target_link_libraries(exe dll)