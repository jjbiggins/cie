## \author Hans J. Johnson
#project(lec04ma CXX)

add_library(lec04_support_lib count_twos.cpp)
##================================
## Build the application
add_executable(lec04ma lec04ma.cpp)
target_link_libraries(lec04ma lec04_support_lib)
