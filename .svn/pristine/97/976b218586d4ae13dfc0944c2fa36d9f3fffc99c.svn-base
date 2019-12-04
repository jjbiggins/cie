//
// Created by Mathews Jacob on 3/8/17.
//

#ifndef HOMEWORK4_RENTALCUSTOMER_H
#define HOMEWORK4_RENTALCUSTOMER_H

#include "Movie.h"

using namespace std;

class RentalCustomer {
public:

  const string& getName() const
  {
    return m_Name;
  }

  void setName(const string& name)
  {
    m_Name = name;
  }

  MoviePtrType getMoviePtr() const
  {
    return m_moviePtr;
  }

  void setMoviePtr(Movie* moviePtr)
  {
    m_moviePtr = moviePtr;
  }

  RentalCustomer* getNextPtr() const
  {
    return m_nextPtr;
  }

  void setNextPtr(RentalCustomer* nextPtr)
  {
    m_nextPtr = nextPtr;
  }

private:
  string m_Name;
  MoviePtrType m_moviePtr;
  RentalCustomer* m_nextPtr;
};

typedef RentalCustomer* RentalCustomerPtrType;


#endif //HOMEWORK4_RENTALCUSTOMER_H
