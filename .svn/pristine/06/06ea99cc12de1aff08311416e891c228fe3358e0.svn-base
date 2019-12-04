## \author Hans J. Johnson

if(NOT CIE_SETTINGS_CONFIGURED) 
    message(FATAL_ERROR "ERROR: clion must be started in the parent directory in order to configure the C++11 compiler flags" ) 
endif()

##================================
## Build the support libraries
add_library(lec33ma_support Stack1.cpp Stack2.cpp StackFunctions.cpp Node.cpp Node.h)

##================================
## Build the application
add_executable(lec33ma lec33ma.cpp)
target_link_libraries(lec33ma lec33ma_support)
