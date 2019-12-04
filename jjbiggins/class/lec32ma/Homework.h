//-----------------------------------------------------------------------------
// Programmer: TODO: Your name here
// Name: Homework.h
// Description: Header file for Homework class. This class represents a
//              homework assignment with a due date and the number of points
//              the homework assignment is worth.
//-----------------------------------------------------------------------------
#ifndef HOMEWORK_H
#define HOMEWORK_H

#include "Date.h" // include Date class definition

class Homework
{
public:
  Homework(const Date dueDate, const int totalPoints): m_due_date{dueDate}, m_total_points{totalPoints}{}
  void print(const Date dueDate, const int totalPoints);
private:
  const Date m_due_date;
  const int m_total_points;
};

#endif
