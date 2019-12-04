/*------------------------------------------------------------------------------
 * Programmer: Mathews Jacob
 * Name: Movie.h
 * Description: This file contains the class definition for a Movie
 -------------------------------------------------------------------------------*/
#ifndef MOVIE_H
#define MOVIE_H

#include "RobotString.h"

class Movie {
public:

  RobotString GetName() const
  {
    return m_Name;
  }

  void SetName(const RobotString & Name)
  {
    m_Name.SetStringArray(Name);
  }

  const int GetNumber() const
  {
    return m_Number;
  }

  void SetNumber(int number)
  {
    m_Number = number;
  }

private:
  RobotString m_Name;
  int m_Number;
};

#endif // MOVIE_H
