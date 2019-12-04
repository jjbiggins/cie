/*------------------------------------------------------------------------------
 * Programmer: Your name here
 * Name:
 * Description:
 -------------------------------------------------------------------------------*/
#include "Movie.h"
#include <stdlib.h>
#include "helperfunctions.h"
#include <iostream>

using namespace std;

MoviePtrType createMovieNode(MoviePtrType startPtr, const string movieName){
  /* dynamically allocate memory for new node */
  MoviePtrType newMoviePtr = new Movie;
  /* will point to newly created node */
  newMoviePtr->setName(movieName);
  newMoviePtr->setNextPtr(nullptr);

  return newMoviePtr;
}

void insertNodeMovieLinkedList(MoviePtrType *startPtr, const string movieName)
{
  MoviePtrType newMoviePtr = createMovieNode(*startPtr, movieName);

  MoviePtrType beforeMovieNodePtr;
  MoviePtrType afterMovieNodePtr;

  beforeMovieNodePtr = nullptr;
  afterMovieNodePtr = *startPtr;
  while (afterMovieNodePtr != nullptr && afterMovieNodePtr->getName() < movieName) {
    beforeMovieNodePtr = afterMovieNodePtr;
    afterMovieNodePtr = afterMovieNodePtr->getNextPtr();
  }

  if (beforeMovieNodePtr == nullptr)
  {
    newMoviePtr->setNextPtr(*startPtr);
    *startPtr = newMoviePtr;
  }
  else
  {
    beforeMovieNodePtr->setNextPtr(newMoviePtr);
    newMoviePtr->setNextPtr(afterMovieNodePtr);
  }
}

void deleteMovieListNode(MoviePtrType *moviePtr, const string movieName)
{
  MoviePtrType nodeToBeDeletedPtr = *moviePtr;
  MoviePtrType beforeNodePtr = nullptr;

  while(nodeToBeDeletedPtr != nullptr && nodeToBeDeletedPtr->getName() != movieName)
  {
    beforeNodePtr = nodeToBeDeletedPtr;
    nodeToBeDeletedPtr = nodeToBeDeletedPtr->getNextPtr();
  }

  if(nodeToBeDeletedPtr == nullptr)
  {
    return;
  }
  else if(beforeNodePtr == nullptr){
    *moviePtr = (*moviePtr)->getNextPtr();
    free(nodeToBeDeletedPtr);
  }
  else
  {
    beforeNodePtr->setNextPtr(nodeToBeDeletedPtr->getNextPtr());
    delete nodeToBeDeletedPtr;
  }
}

void printMovieLinkedList(MoviePtrType startPtr)
{
    MoviePtrType currentPtr;
    for (currentPtr = startPtr; currentPtr != nullptr; currentPtr = currentPtr->getNextPtr())
    {
      cout << currentPtr->getName() << endl;
    }
    cout << endl;
}

void freeMemoryMovieList(MoviePtrType *moviePtr)
{
  MoviePtrType currentPtr = *moviePtr;
  while(currentPtr != nullptr)
  {
    MoviePtrType tmpPtr = currentPtr;
    currentPtr = currentPtr->getNextPtr();

    delete tmpPtr;
  }

  *moviePtr = nullptr;
}