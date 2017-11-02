project(dll)
ADD_DEFINITIONS(-DDLL_EXPORT=1)
add_library(dll SHARED dll.cpp)
