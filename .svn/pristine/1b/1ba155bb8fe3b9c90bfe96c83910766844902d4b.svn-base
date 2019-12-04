#ifndef ROBOTMOVEMENT_H
#define ROBOTMOVEMENT_H

#include "useCurses.h"
#include "robotModel.h"

/*-----------------------------------------------------------------------------
 * Function name: goto_number_and_scan
 * Description: Given a robot, this function determines whether the robot is at 
 *              the end of a lane and moves the robot two positions forward to reach
 *              the number and then call the scanLocation method to the return the
 *              value on the maze at the location of the robot
 * Output: int = -1 if the robot is not at the end of the lane or facing the right 
 * direction, the number read from the maze otherwise
 ----------------------------------------------------------------------------*/
extern int goto_number_and_scan (RobotModel *robot);


/*-----------------------------------------------------------------------------
 * Function name: follow_segment
 * Description: Given a robot, this function will continuosly move the robot 
 *              forward as long as the only sensor set is black in front 
 ----------------------------------------------------------------------------*/
extern void follow_segment (RobotModel *robot);


#endif // ROBOTMOVEMENT_H
