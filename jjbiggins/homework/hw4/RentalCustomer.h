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

    void setUserNumber(int userNumber)
    {
        m_userNumber = userNumber;
    }

    int getUserNumber()
    {
        return m_userNumber;
    }

private:
  string m_Name;
  MoviePtrType m_moviePtr;
  RentalCustomer* m_nextPtr;
    int m_userNumber;
};

typedef RentalCustomer* RentalCustomerPtrType;

void printRentalCustomerList(RentalCustomerPtrType customerPtr);

void insertRentalCustomerNode(RentalCustomerPtrType *customerPtr, const string userName);

void deleteCustomerListNode(RentalCustomerPtrType *customerPtr, const string userName);

void freeMemoryCustomerList(RentalCustomerPtrType *customerPtr);

#endif //HOMEWORK4_RENTALCUSTOMER_H
