/*-------------------------------------------------------------------------------
 * Programmer: Gheorghi Guzun
 * Name: maze.h
 * Description: This file contains a structure and associated function
 *              prototypes to model a maze for a robot. A Maze variable
 *              is designed to be initialized through the readMaze function.
 *              After initialization, the robot "sensor" functions can be
 *              called to determine whether a "black" unit is located to the
 *              left, to the right, in front, or directly below the specified
 *              robot. In addition, the maze and the robot can be printed
 *              using the printMazePlusCurrentPos function (using the curses
 *              library).
 * Example use:
 *    Maze maze;
 *    RobotModel robot;
 *    char *inputFileName = argv[1];
 *    int success = readMaze(inputFileName, &maze, &robot);
 *    if (success)
 *    {
 *        int bTL = blackToLeft(maze, robot);
 *        printMazePlusCurrentPos(maze, robot);
 *        ....
 *        clearMaze(&maze);
 *    }
 -------------------------------------------------------------------------------*/
#ifndef MAZE_H
#define MAZE_H

#if 0
/* current direction (0=East ->, 1=North ^, 2=West <-, 3=South v) */
typedef int DirectionType;
static const DirectionType EAST  = 0;
static const DirectionType NORTH = 1;
static const DirectionType WEST  = 2;
static const DirectionType SOUTH = 3;
#else

enum myDir {
  EAST=0,
  NORTH=1,
  WEST=2,
  SOUTH=3
};
typedef enum myDir DirectionType;

#endif


/* struct m_maze is a data type to model a robot m_maze */
class Maze
{

public:
/*--------------------------------------------------------------------------
 *Function name: getRows
 * Returns the number of rows in the Maze
 */
  int getRows();

/*--------------------------------------------------------------------------
 *Function name: getCols
 * Returns the number of cols in the Maze
 */
  int getCols();

/*--------------------------------------------------------------------------
 *Function name: getRobotRow
 * Returns the row number
 */
  int getRobotRow();

/*--------------------------------------------------------------------------
 *Function name: getRobotCol
 * Returns the col number
 */
  int getRobotCol();

/*--------------------------------------------------------------------------
 *Function name: getDir
 * Returns the direction
 */
  int getRobotDir();

/*--------------------------------------------------------------------------
 *Function name: setRow
 * Sets the row number
 */
  void setRobotRow(int newRow);

/*--------------------------------------------------------------------------
 *Function name: setCol
 * Sets the col number
 */
  void setRobotCol(int newCol);

/*--------------------------------------------------------------------------
 *Function name: setDir
 * Sets the dir
 */
  void setRobotDir(DirectionType newDir);

/*-----------------------------------------------------------------------------
 * Function name: readMaze
 * Description: This function reads an input m_maze file in order to initialize
 *              the given Maze and RobotModel variables. The m_maze file contains
 *              the size of the m_maze and its individual values. It also
 *              contains the starting position and direction of the robot.
 * Inputs: filename = string = name of m_maze file
 *         m = Maze * = pointer to Maze structure that should be initialized
 *                      in this function (passed by simulated reference)
 *         robot = RobotModel * = pointer to RobotModel that should be
 *                                initialized in this function (passed by
 *                                simulated reference)
 * Outputs: m = Maze * = pointer to initialized Maze
 *          robot = RobotModel * = pointer to initialized RobotModel
 *          int = 1 if m_maze file read successfully
 *                0 if error encountered while reading m_maze file
 ----------------------------------------------------------------------------*/
  int readMaze(const char *fileName);

/*-----------------------------------------------------------------------------
 * Function name: clearMaze
 * Description: This function frees the dynamically allocated memory
 *              associated with a Maze that was initialized using the
 *              readMaze function. It also sets the rows/cols to zero.
 * Input: m = Maze * = pointer to Maze structure that should be cleared
 *                      in this function (passed by simulated reference)
 * Output: m = Maze * = pointer to cleared Maze
 ----------------------------------------------------------------------------*/
  void clearMaze();

/*-----------------------------------------------------------------------------
 * Function name: printMazePlusCurrentPos
 * Description: This function displays (using the curses library, when
 *              defined) the m_maze and indicated robot. "Black" portions of
 *              the m_maze are displayed with the 'X' character, "white"
 *              portions of the m_maze are displayed with the '.' character,
 *              and the current position of the robot is displayed with the
 *              '*' character.
 * Inputs: m = Maze = m_maze to be displayed
 *         robot = RobotModel = robot to be displayed
 ----------------------------------------------------------------------------*/
  void printMazePlusCurrentPos();

/*-----------------------------------------------------------------------------
 * Function name: blackToLeft
 * Description: Given a m_maze and robot, this function returns whether a
 *              black unit is to the left of the robot's current position
 *              and direction
 * Inputs: m = Maze = m_maze
 *         robot = RobotModel = robot
 * Output: int = 1 if black is to the left; 0 otherwise
 ----------------------------------------------------------------------------*/
  int blackToLeft();

/*-----------------------------------------------------------------------------
 * Function name: blackToRight
 * Description: Given a m_maze and robot, this function returns whether a
 *              black unit is to the right of the robot's current position
 *              and direction
 * Inputs: m = Maze = m_maze
 *         robot = RobotModel = robot
 * Output: int = 1 if black is to the right; 0 otherwise
 ----------------------------------------------------------------------------*/
  int blackToRight();

/*-----------------------------------------------------------------------------
 * Function name: blackInFront
 * Description: Given a m_maze and robot, this function returns whether a
 *              black unit is in front of the robot's current position
 *              and direction
 * Inputs: m = Maze = m_maze
 *         robot = RobotModel = robot
 * Output: int = 1 if black is in front; 0 otherwise
 ----------------------------------------------------------------------------*/
  int blackInFront();

/*-----------------------------------------------------------------------------
 * Function name: onBlack
 * Description: Given a m_maze and robot, this function returns whether the
 *              robot is on a black unit
 * Inputs: m = Maze = m_maze
 *         robot = RobotModel = robot
 * Output: int = 1 if robot is on black unit; 0 otherwise
 ----------------------------------------------------------------------------*/
  int onBlack();

/*-----------------------------------------------------------------------------
 * Function name: scanLocation
 * Description: Given a m_maze and robot, this function returns what's on the m_maze
 *              at the location of the robot
 * Inputs: m = Maze = m_maze
 *         robot = RobotModel = robot
 * Output: int = the number on the m_maze
 ----------------------------------------------------------------------------*/
  int scanLocation();


  void CopyArray(Maze * in)
  {
    m_mazeArray = in->m_mazeArray;
    m_rows = in->m_rows;
    m_cols = in->m_cols;
    m_robotRow = in->m_robotRow;
    m_robotCol = in->m_robotCol;
    m_robotDir = in->m_robotDir;
  }
private:
  int *m_mazeArray; /* array to store m_maze */
  int  m_rows;      /* number of rows of m_maze */
  int  m_cols;      /* number of columns of m_maze */
  int  m_robotRow;  /* current row position */
  int  m_robotCol;  /* current column position */
  DirectionType m_robotDir;  /* current direction (0=East ->, 1=North ^, 2=West <-, 3=South v) */
};

#endif // MAZE_H
