/*------------------------------------------------------------------------------
 * Programmer: Your name here
 * Name:
 * Description:
 -------------------------------------------------------------------------------*/
#include "helperfunctions.h"
#include <iostream>


using namespace std;


void preOrderPrint(RentalCustomerPtrType customerPtr)
{
  if (customerPtr != nullptr)
  {
    cout << customerPtr->getName() << endl;
    MoviePtrType moviePtr = customerPtr->getMoviePtr();
    while(moviePtr != nullptr)
    {
      cout << moviePtr->getName() << endl;
      moviePtr = moviePtr->getNextPtr();
    }
    preOrderPrint(customerPtr->getNextPtr());
  }
}

void insertNodeToUserMovieList(RentalCustomerPtrType *customerPtr, MoviePtrType *movieList, const string userName, const string movieName)
{
  MoviePtrType rentedMoviePtr;
  rentedMoviePtr = new Movie;

  rentedMoviePtr->setNextPtr(nullptr);
  rentedMoviePtr->setName(movieName);

  MoviePtrType beforePtr = nullptr;
  MoviePtrType moviePtr = *movieList;
  RentalCustomerPtrType currentUserNodePtr = *customerPtr;

  while(currentUserNodePtr != nullptr && currentUserNodePtr->getName() != userName)
  {
    moviePtr = currentUserNodePtr->getMoviePtr();
    currentUserNodePtr = currentUserNodePtr->getNextPtr();
  }

  while(moviePtr != nullptr && moviePtr->getName() < userName)
  {
    beforePtr = moviePtr;
    moviePtr = moviePtr->getNextPtr();
  }


  if(moviePtr == nullptr && beforePtr == nullptr) {
    currentUserNodePtr->setMoviePtr(rentedMoviePtr);
    *movieList = rentedMoviePtr;
  }
  else if(beforePtr == nullptr)
  {
    rentedMoviePtr->setNextPtr(*movieList);
    *movieList = rentedMoviePtr;
  }
  else
  {
    beforePtr->setNextPtr(rentedMoviePtr);
    rentedMoviePtr->setNextPtr(moviePtr);
  }
}

void deleteNodeToUserMovieList(RentalCustomerPtrType *customerPtr, MoviePtrType *movieList, const string userName)
{
  MoviePtrType beforePtr = nullptr;
  MoviePtrType nodeToBeDeletedPtr = *movieList;
  RentalCustomerPtrType currentUserNodePtr = *customerPtr;

  while(currentUserNodePtr != nullptr && currentUserNodePtr->getName() != userName)
  {
    nodeToBeDeletedPtr = currentUserNodePtr->getMoviePtr();
    currentUserNodePtr = currentUserNodePtr->getNextPtr();
  }

  while(nodeToBeDeletedPtr != nullptr && nodeToBeDeletedPtr->getName() < userName)
  {
    beforePtr = nodeToBeDeletedPtr;
    nodeToBeDeletedPtr = nodeToBeDeletedPtr->getNextPtr();
  }


  if(nodeToBeDeletedPtr == nullptr && beforePtr == nullptr)
  {
    currentUserNodePtr->setMoviePtr(nodeToBeDeletedPtr->getNextPtr());
    delete nodeToBeDeletedPtr;
  }
  else if(nodeToBeDeletedPtr == nullptr)
  {
    beforePtr->setNextPtr(nullptr);
    delete nodeToBeDeletedPtr;
  }
  else
  {
    beforePtr->setNextPtr(nodeToBeDeletedPtr->getNextPtr());
    delete nodeToBeDeletedPtr;
  }
}























