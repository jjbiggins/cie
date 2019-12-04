/*------------------------------------------------------------------------------
 * Programmer: Mathews Jacob
 * Name: RentalCustomer.h
 * Description: This file contains the class definition for a RentalCustomer
 -------------------------------------------------------------------------------*/

#ifndef SRC_USER_H
#define SRC_USER_H

#include "string.h"
#include "Movie.h"
#include "RobotString.h"

class RentalCustomer {
public:

  RobotString GetName() const
  {
    return m_Name;
  }

  void SetName(const RobotString & Name)
  {
     m_Name.SetStringArray(Name);
  }

  int GetNumberRented() const
  {
    return m_NumberRented;
  }

  void SetNumberRented(int NumberRented)
  {
    m_NumberRented = NumberRented;
  }

  Movie& GetRentedMovie()
  {
    return m_RentedMovie;
  }

  void SetRentedMovie(const Movie& RentedMovie)
  {
    m_RentedMovie = RentedMovie;
  }

private:
  RobotString m_Name;
  int m_NumberRented;
  Movie m_RentedMovie;
};
#endif // SRC_USER_H
