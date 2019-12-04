/* implementations of the RobotModel functions */
/* see robotModel.h for documentation */
#include "robotModel.h"
#include "useCurses.h"

/*
Maze * RobotModel::getMazePointer()
{
  return &m_maze;
}
 */

void RobotModel::moveStraight()
{
  if( m_maze.getRobotDir() == EAST )
    {
    m_maze.setRobotCol(m_maze.getRobotCol() + 1);
    }
  else if( m_maze.getRobotDir() == NORTH )
    {
    m_maze.setRobotRow(m_maze.getRobotRow() - 1);
    }
  else if( m_maze.getRobotDir() == WEST )
    {
    m_maze.setRobotCol(m_maze.getRobotCol() - 1);

    }
  else if( m_maze.getRobotDir() == SOUTH )
    {
    m_maze.setRobotRow(m_maze.getRobotRow() + 1);
    }
}

void RobotModel::turnLeft()
{
  if( m_maze.getRobotDir() ==  EAST)
    {
    m_maze.setRobotRow(m_maze.getRobotRow() - 1);
    m_maze.setRobotDir(NORTH);
    }
  else if( m_maze.getRobotDir() == NORTH )
    {
    m_maze.setRobotCol(m_maze.getRobotCol() - 1);
    m_maze.setRobotDir(WEST);
    }
  else if( m_maze.getRobotDir() == WEST )
    {
    m_maze.setRobotRow(m_maze.getRobotRow() + 1);
    m_maze.setRobotDir(SOUTH);
    }
  else if( m_maze.getRobotDir() == SOUTH )
    {
    m_maze.setRobotCol(m_maze.getRobotCol() + 1);
    m_maze.setRobotDir(EAST);
    }
}

void RobotModel::turnRight()
{
  if( m_maze.getRobotDir() == EAST )
    {
    m_maze.setRobotRow(m_maze.getRobotRow() + 1);
    m_maze.setRobotDir(SOUTH);
    }
  else if( m_maze.getRobotDir() == NORTH )
    {
    m_maze.setRobotCol(m_maze.getRobotCol() + 1);
    m_maze.setRobotDir(EAST);
    }
  else if( m_maze.getRobotDir() == WEST )
    {
    m_maze.setRobotRow(m_maze.getRobotRow() - 1);
    m_maze.setRobotDir(NORTH);
    }
  else if( m_maze.getRobotDir() == SOUTH )
    {
    m_maze.setRobotCol(m_maze.getRobotCol() - 1);
    m_maze.setRobotDir(WEST);
    }
}

void RobotModel::uTurn()
{
  if( m_maze.getRobotDir() == EAST )
    {
    m_maze.setRobotCol(m_maze.getRobotCol() - 1);
    m_maze.setRobotDir(WEST);
    }
  else if( m_maze.getRobotDir() == NORTH )
    {
    m_maze.setRobotRow(m_maze.getRobotRow() + 1);
    m_maze.setRobotDir(SOUTH);
    }
  else if( m_maze.getRobotDir() == WEST )
    {
    m_maze.setRobotCol(m_maze.getRobotCol() + 1);
    m_maze.setRobotDir(EAST);
    }
  else if( m_maze.getRobotDir() == SOUTH )
    {
    m_maze.setRobotRow(m_maze.getRobotRow() - 1);
    m_maze.setRobotDir(NORTH);
    }
}

void RobotModel::reverse()
{
  if( m_maze.getRobotDir() == EAST )
    {
    m_maze.setRobotCol(m_maze.getRobotCol() - 1);
    }
  else if( m_maze.getRobotDir() == NORTH )
    {
    m_maze.setRobotRow(m_maze.getRobotRow() + 1);
    }
  else if( m_maze.getRobotDir() == WEST )
    {
    m_maze.setRobotCol(m_maze.getRobotCol() + 1);
    }
  else if( m_maze.getRobotDir() == SOUTH )
    {
    m_maze.setRobotRow(m_maze.getRobotRow() - 1);
    }
}

int RobotModel::scanLocation()
{
  return m_maze.scanLocation();

}

void RobotModel::printMazePlusCurrentPos()
{
  m_maze.printMazePlusCurrentPos();
}

void RobotModel::placeRobotOnMaze(Maze *maze)
{
  m_maze.CopyArray(maze);
}

void RobotModel::get_surrounding_status(int *line_to_left, int *line_ahead, int *line_to_right, int *at_end)
{
  *line_to_left =  m_maze.blackToLeft();
  *line_ahead =  m_maze.blackInFront();
  *line_to_right = m_maze.blackToRight();
  //*at_end = (*line_to_left  && *line_ahead && *line_to_right);
  *at_end = m_maze.onBlack();
}

void RobotModel::clearMaze()
{
    m_maze.clearMaze();
}
