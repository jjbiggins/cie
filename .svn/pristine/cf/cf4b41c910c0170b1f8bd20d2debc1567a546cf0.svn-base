#include "robotCLArgs.h"

/*-----------------------------------------------------------------------------
 * Function name: initMazeAndRobotFromCLArgs
 * Description: This function uses the specified command-line arguments to
 *              initialize the given Maze and RobotModel variables. If the
 *              incorrect number of command-line arguments is passed, an
 *              error message is displayed (and 0 is returned).
 * Inputs: argc = int = number of command-line arguments
 *         argv = array of strings = command-line arguments, with argv[1]
 *                                   being the input file name
 *         m = Maze * = pointer to Maze structure that should be initialized
 *                      in this function (passed by simulated reference)
 *         robot = RobotModel * = pointer to RobotModel that should be
 *                                initialized in this function (passed by
 *                                simulated reference)
 * Outputs: m = Maze * = pointer to initialized Maze
 *          robot = RobotModel * = pointer to initialized RobotModel
 * Returns: numOfTerminals if initialization successful
 *          0 if error encountered
 ----------------------------------------------------------------------------*/
int initMazeAndRobotFromCLArgs(int argc, char *argv[], RobotModel *robot)
{
  int   success = 1;
  char *inputFileName;    /* input file name containing m_maze */

  /* obtain input filename from command line */
  if( argc >= 2 ) /* require at least two command-line arguments */
    {
    inputFileName = argv[1];
    }
  else
    {
    /* when incorrect number of command-line arguments are passed,
       print message indicating proper usage of program  */
    printw("Usage: %s inputFileName.txt\n", argv[0]);
    printw("Try again with the m_maze file included \n");
    getch();
    success = 0;
    }

  if( success )
    {
      Maze inputMaze;
      success = inputMaze.readMaze(inputFileName);
      robot->placeRobotOnMaze( &inputMaze );
    }
  return success;
}
