## \author Hans J. Johnson

if(NOT CIE_SETTINGS_CONFIGURED)
    message(FATAL_ERROR "ERROR: clion must be started in the parent directory in order to configure the C++11 compiler flags" )
endif()

##================================
## Build the application
add_executable(lec36ma lec36ma.cpp TheBaseClass.cpp Derived1.cpp)
