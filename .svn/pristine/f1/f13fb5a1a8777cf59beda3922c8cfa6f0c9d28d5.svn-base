/* implementations of the Maze functions */
/* see m_maze.h for documentation */

/* set to zero if you aren't using curses */
#define CURSESPRINT 1

#include "maze.h"
#include <stdio.h>
#include <stdlib.h>
#if CURSESPRINT            /* if using curses */
#include "useCurses.h"     /* include header */
#define PRINT printw       /* define macro for printing in curses */
#define MOVE00 move(0, 0); /* define macro for calling move(0,0); */
#else /* if not using curses */
#define PRINT printf /* define macro for printing using printf */
#define MOVE00       /* define MOVE00 macro to do nothing */
#endif

int Maze::getRows()
{
  return m_rows;
}

int Maze::getCols()
{
  return m_cols;
}

int Maze::getRobotRow()
{
  return m_robotRow;
}

int Maze::getRobotCol()
{
  return m_robotCol;
}

int Maze::getRobotDir()
{
  return m_robotDir;
}

void Maze::setRobotRow(int newRobotRow)
{
  m_robotRow = newRobotRow;
}

void Maze::setRobotCol(int newRobotCol)
{
  m_robotCol = newRobotCol;
}

void Maze::setRobotDir(DirectionType newRobotDir)
{
  m_robotDir = newRobotDir;
}

int Maze::readMaze(const char *fileName)
{
  int   r, c;           /* current row and column indices */
  FILE *inputFile;      /* file pointer to input file */
  int   numGates = 0;   /* whether we succeeded */

  /* open input file */
  inputFile = fopen(fileName, "r");

  /* fill data array */
  if( inputFile != NULL )
    {
    fscanf(inputFile, "%d %d %d", &(m_rows), &(m_cols), &(numGates) );
    fscanf(inputFile, "%d %d %d", &(m_robotRow), &(m_robotCol), &(m_robotDir) );
    m_mazeArray = new  int[m_rows * m_cols];
    int *arr = m_mazeArray;
    for( r = 0; r < m_rows; r++ )
      {
      for( c = 0; c < m_cols; c++ )
        {
        if( fscanf(inputFile, "%d", &(arr[r * m_cols + c]) ) == EOF )
          {
          numGates = 0;
          }
        }
      }

    fclose(inputFile);
    }
  else
    {

    printw("couldn't open m_maze file!!");
    }

  return numGates;
}

void Maze::clearMaze()
{
  if( m_mazeArray != NULL )
    {
    // free(m_mazeArray);
    delete[] m_mazeArray;
    m_mazeArray = NULL;
    }

  m_rows = 0;
  m_cols = 0;
}

void Maze::printMazePlusCurrentPos()
{
  /* note: in this program, anything > 0 is considered black
           to mimic robot sensor values that result in larger
           values when placed over a dark surface.
           (opposite of the convention used for images) */
  MOVE00   /* move(0,0); in curses mode */
  int r, c;

  for( r = 0; r < m_rows; r++ )
    {
    for( c = 0; c < m_cols; c++ )
      {
      if( r == m_robotRow && c == m_robotCol )
        {
            switch (m_robotDir) {
                case NORTH: PRINT("^ "); break;
                case EAST: PRINT("> "); break;
                case WEST: PRINT("< "); break;
                case SOUTH: PRINT("v "); break;
                default: PRINT("* ");
            }
        }
      else if( m_mazeArray[r * m_cols + c] == 8 )
        {
        PRINT("x ");
        }
      else if( m_mazeArray[r * m_cols + c] == 0 )
        {
        PRINT(". ");
        }
      else
        {
        PRINT("%d ", m_mazeArray[r * m_cols + c]);
        }
      }
    PRINT("\n");
    }
}

int Maze::blackToLeft()
{
  int bToL = 0;

  if( (m_robotDir == 0 && m_mazeArray[(m_robotRow - 1) * m_cols + m_robotCol] > 0) ||   /* moving in increasing column direction */
      (m_robotDir == 1 && m_mazeArray[m_robotRow * m_cols + m_robotCol - 1] > 0) ||     /* moving in decreasing row direction */
      (m_robotDir == 2 && m_mazeArray[(m_robotRow + 1) * m_cols + m_robotCol] > 0) ||   /* moving in decreasing column direction */
      (m_robotDir == 3 && m_mazeArray[m_robotRow * m_cols + m_robotCol + 1] > 0) )      /* moving in increasing row direction */
    {
    bToL = 1;
    }

  return bToL;
}

int Maze::blackToRight()
{
  int bToR = 0;

  if( (m_robotDir == 0 && m_mazeArray[(m_robotRow + 1) * m_cols + m_robotCol] > 0) ||   /* moving in increasing column direction */
      (m_robotDir == 1 && m_mazeArray[m_robotRow * m_cols + m_robotCol + 1] > 0) ||     /* moving in decreasing row direction */
      (m_robotDir == 2 && m_mazeArray[(m_robotRow - 1) * m_cols + m_robotCol] > 0) ||   /* moving in decreasing column direction */
      (m_robotDir == 3 && m_mazeArray[m_robotRow * m_cols + m_robotCol - 1] > 0) )      /* moving in increasing row direction */
    {
    bToR = 1;
    }

  return bToR;
}

int Maze::blackInFront()
{
  int bInF = 0;

  if( (m_robotDir == 0 && m_mazeArray[m_robotRow * m_cols + m_robotCol + 1] > 0) ||     /* moving in increasing column direction */
      (m_robotDir == 1 && m_mazeArray[(m_robotRow - 1) * m_cols + m_robotCol] > 0) ||   /* moving in decreasing row direction */
      (m_robotDir == 2 && m_mazeArray[m_robotRow * m_cols + m_robotCol - 1] > 0) ||     /* moving in decreasing column direction */
      (m_robotDir == 3 && m_mazeArray[(m_robotRow + 1) * m_cols + m_robotCol] > 0) )    /* moving in increasing row direction */
    {
    bInF = 1;
    }

  return bInF;
}

int Maze::onBlack()
{
  int onB = 0;

  if( m_mazeArray[m_robotRow * m_cols + m_robotCol] > 0 )
    {
    onB = 1;
    }

  return onB;
}

int Maze::scanLocation()
{
  return m_mazeArray[m_robotRow * m_cols + m_robotCol];
}
