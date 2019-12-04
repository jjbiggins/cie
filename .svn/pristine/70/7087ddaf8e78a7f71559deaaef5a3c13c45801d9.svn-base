/*------------------------------------------------------------------------------
 * Programmers: YOUR NAME HERE
 * Description: This file contains an example program and corresponding
 *              mini-assignment associated passing structures by reference. In particular,
 *              this program models a 'robot' moving around a maze based on
 *              key presses by the user. The maze and initial robot position
 *              are loaded from a file (with the file path specified via a
 *              command-line argument). The curses library (ncurses on linux/mac,
 *              pdcurses on windows) is used to display the maze and robot.
 *              For the mini-assignment, you should implement the followSegment
 *              function that takes as input a pointer to the robot
 *              and keeps moving the robot forward until the end of a straight line 
 *              This function needs to be implemented in robotMovement.cpp
 *              and called in main when the user presses 'f'.
 -------------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "useCurses.h"

#include "maze.h"
#include "robotModel.h"
#include "robotMovement.h"

#include "robotCLArgs.h"

int main(int argc, char *argv[])
{
  RobotModel robot;   /* object to model robot (contains the maze) */
  Maze *maze; /* pointer to the robot maze object */

  int        c = ' '; /* last character entered by user */

  /* initialize curses mode */
  initscr();

  /* if successfully have initialized robot and maze, move robot around based on
     user-entered characters */
  if( initMazeAndRobotFromCLArgs(argc, argv, &robot) )
    {
    int done = 0;   /* whether we are done moving the robot around */
    maze = robot.getMazePtr();
    while( !done )
      {
      /* print maze + current robot in its current position */
      clear();
      robot.printMazePlusCurrentPos();
      printw("Move the robot using the keyword: \n(s)traight, (l)eft, (r)ight, (u)turn, (p)lace, (g)otoNumberAndScan, (f)ollow segment \n");
      printw("or press q to quit \n");
      printw("%c\n", c);

      /* move robot, place robot in new position, or quit
         based on user-entered character */
      c = getch();
      if( c == 's' )       /* straight */
        {
        robot.moveStraight();
        }
      else if( c == 'l' )       /* left */
        {
        robot.turnLeft();
        }
      else if( c == 'r' )       /* right */
        {
        robot.turnRight();
        }
      else if( c == 'u' )       /* u-turn */
        {
        robot.uTurn();
        }
      else if( c == 'u' )       /* u-turn */
      {
          robot.uTurn();
      }
      else if (c == 'g') { /* confirm that the robot is at the end of a lane, move two spaces, and call the scanLocation method on the robot*/
          int number = goto_number_and_scan (&robot);
          if (number < 0) {
              printw("\nNeed to place the robot at the end of a lane first.\n");
          } else {
              printw("\nThe number scanned is %d.\n\n",number);
          }
          getch();
      }
      else if (c == 'f') {
          /*T
           *
           *
           *
           *
           *
           *
           *
           * TODO: Call the follow_segment function you implemented
           *
           * Implement follow_segment in robotMovement.cpp logic in
           *
           *
           *
           *
           *
           *
           * */
      }
      else if( c == 'p' )       /* place robot in new position */
        {
        int row;
        /* 'place' the robot at a new location */
        printw("\nEnter row: ");
        char fmt_pat[3] = "%d";          // Work around ncurses bad api for scanw
        scanw(fmt_pat, &row);
        int col;
        printw("Enter col: ");
        scanw(fmt_pat, &col);
        printw("%d %d", row, col);
        /* If a valid row and column were specified, 'place' the robot at a
           new location. Otherwise, print an error message and wait for
           character to be pressed. */

        if( row >= 0 && row < maze->getRows() && col >= 0 && col < maze->getCols() )
          {
          robot.setRow(row);
          robot.setCol(col);
          getch();
          }
        else
          {
          printw("\nInvalid row and column. Press any key to continue.\n");
          getch();
          }
        }
      else if( c == 'q' )       /* quit */
        {
        done = 1;
        }
      }

    maze->clearMaze();
    }
  else
    {
    printw("\nError initializing maze and robot...\n");
    }
  printw("\nDONE!\n");
  getch();
  endwin();

  return 0;
}
