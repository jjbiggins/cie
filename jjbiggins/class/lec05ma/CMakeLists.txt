## \author Hans J. Johnson
add_library(lec05_support_library ComplexStruct.cpp)
##================================
## Build the application
add_executable(lec05ma lec05ma.cpp)
target_link_libraries(lec05ma lec05_support_library)

add_executable(lec05exCardExample lec05exCardExample.cpp)