## \author Hans J. Johnson

if(NOT CIE_SETTINGS_CONFIGURED) 
    message(FATAL_ERROR "ERROR: clion must be started in the parent directory in order to configure the C++11 compiler flags" ) 
endif()

##================================
## Build the support libraries
add_library(lec35ma_support BasePlusCommissionEmployee.cpp  CommissionEmployee.cpp  InheritanceExamples.cpp PhonePlan.cpp  PhonePlanWithData.cpp)

##================================
## Build the application
add_executable(lec35ma lec35ma.cpp)
target_link_libraries(lec35ma lec35ma_support)
