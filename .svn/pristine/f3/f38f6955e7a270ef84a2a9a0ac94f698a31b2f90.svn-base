#include "robotMovement.h"
#include "robotModel.h"

int goto_number_and_scan (RobotModel *robot) {
    int bToL; //blackToLeft
    int bToR; //blackToRight
    int bInF; //blackInFront
    int allB; //BlackAllAround
    robot->get_surrounding_status(&bToL,&bInF,&bToR,&allB);   //Get the sensor values
    if( !bToL && !bToR && !bInF ) //If this is the end of the lane
    {
        robot->moveStraight();
        robot->moveStraight();
        robot->printMazePlusCurrentPos();
        return robot->scanLocation();
    }
    else
    {
        return -1;
    }
}

/*TODO: Implement the follow_segment function*/
void follow_segment(RobotModel *robot){
    int bToL = 0; 
    int bToR = 0; 
    int bInF = 0;
    int allB = 0;
    while(1){
        robot->get_surrounding_status(&bToL, &bInF, &bToR, &allB);
        if((bInF == 1) && (bToL == 0) && (bToR == 0)){
            robot->moveStraight();
        }
        else{
            return;
        }
    }
}
