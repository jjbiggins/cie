/*-------------------------------------------------------------------------------
 * Programmer: Gheorghi Guzun
 * Name: robotModel.h
 * Description: This file contains a structure and associated function
 *              prototypes to model a robot. A RobotModel variable
 *              has members to model its current position (given by a row
 *              and column) and direction. The direction defines where
 *              the robot will move if the robot is to move straight ahead:
 *              0 = east or an increasing column direction,
 *              1 = north or a decreasing row direction
 *              2 = west or a decreasing column direction
 *              3 = south or an increasing row direction
 *              Functions are also provided to modify the current position and
 *              direction of a given robot to move one unit straight, move one
 *              unit to the left, move one unit to the right, and make a u-turn.
 -------------------------------------------------------------------------------*/
#ifndef ROBOTMODEL_H
#define ROBOTMODEL_H
#include "maze.h"

/* struct robotModel is a data type to model a robot */
class RobotModel
{
public:
/*-----------------------------------------------------------------------------
 * Function name: moveStraight
 * Description: This function modifies the given robot's position so that it
 *              moves forward one unit.
 ----------------------------------------------------------------------------*/
  void moveStraight();

/*-----------------------------------------------------------------------------
 * Function name: turnLeft
 * Description: This function modifies the given robot's position and direction
 *              so that the robot turns and moves one unit to the left.
 ----------------------------------------------------------------------------*/
  void turnLeft();

/*-----------------------------------------------------------------------------
 * Function name: turnRight
 * Description: This function modifies the given robot's position and direction
 *              so that the robot turns and moves one unit to the right.
 ----------------------------------------------------------------------------*/
  void turnRight();

/*-----------------------------------------------------------------------------
 * Function name: uTurn
 * Description: This function modifies the given robot's position and direction
 *              so that the robot performs a 180 degree turn and moves
 *              one unit in the new direction.
 ----------------------------------------------------------------------------*/
  void uTurn();

/*-----------------------------------------------------------------------------
 * Function name: reverse
 * Description: This function modifies the given robot's position so that
 *              it moves one unit in reverse (without changing its direction).
 ----------------------------------------------------------------------------*/
  void reverse();

/*-----------------------------------------------------------------------------
 * Function name: get_surrounding_status
 * Description: Determine if there is black maze lines to the left, front, right, or all around
 *
 * Input/Output: line_to_left  - 1 if there is a line to the left
 *               line_ahead    - 1 if there is a line ahead
 *               line_to_right - 1 if there is a line to the right
 *               at_end        - 1 if there is black all around
 */
  void get_surrounding_status(int *line_to_left, int *line_ahead, int *line_to_right, int *at_end);

/*-----------------------------------------------------------------------------
 * Function name: scanLocation
 * Description: Given a m_maze and robot, this function returns what's on the m_maze
 *              at the location of the robot
 * Output: int = the number on the m_maze
 ----------------------------------------------------------------------------*/
  int scanLocation();

  /*
   * Place the robot on a maze structure
   */
  void placeRobotOnMaze(Maze *maze);

  /*-----------------------------------------------------------------------------
   * Funciton name: printMazePlusCurrentPos
   * Description: Prints the robot on the maze at its current position
   */
   void printMazePlusCurrentPos();

    /*Get/Set methods for the current position of the robot */
    void setRow (int row) {m_maze.setRobotRow(row);}
    void setCol (int col) {m_maze.setRobotCol(col);}
    int getRow () {return m_maze.getRobotRow();}
    int getCol () {return m_maze.getRobotCol();}
    Maze *getMazePtr () {return &m_maze;}

/**
 * @brief Clear the maze
 */
  void clearMaze();
private:
  Maze m_maze;
};

#endif // ROBOTMODEL_H
