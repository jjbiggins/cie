## \author Hans J. Johnson

##================================
## Build the support libraries
add_library(lec06ma_support ComplexNumber.cpp complexExamples.cpp stringExamples.cpp miniAssignment.cpp)

##================================
## Build the application
add_executable(lec06ma lec06ma.cpp)
target_link_libraries(lec06ma lec06ma_support)
