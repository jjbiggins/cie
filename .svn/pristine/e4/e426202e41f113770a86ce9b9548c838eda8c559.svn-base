/*------------------------------------------------------------------------------
 * Programmer: Your name here
 * Name:
 * Description:
 -------------------------------------------------------------------------------*/

#include "RentalCustomer.h"
#include <iostream>
#include <iostream>
#include <stdlib.h>
using namespace std;


void insertRentalCustomerNode(RentalCustomerPtrType *customerPtr, const string userName)
{
  RentalCustomerPtrType newUserPtr;
  newUserPtr = new RentalCustomer;

  if(newUserPtr != nullptr)
  {
    newUserPtr->setNextPtr(nullptr);
    newUserPtr->setName(userName);
    newUserPtr->setMoviePtr(nullptr);
  }

  RentalCustomerPtrType beforeUserNodePtr = nullptr;
  RentalCustomerPtrType afterUserNodePtr = *customerPtr;

  while(afterUserNodePtr != nullptr && afterUserNodePtr->getName() < userName){
    beforeUserNodePtr = afterUserNodePtr;
    afterUserNodePtr = afterUserNodePtr->getNextPtr();
  }

  if (beforeUserNodePtr == nullptr)
  {
    newUserPtr->setNextPtr(*customerPtr);
    *customerPtr = newUserPtr;
  }
  else
  {
    beforeUserNodePtr->setNextPtr(newUserPtr);
    newUserPtr->setNextPtr(afterUserNodePtr);
  }
}

void deleteCustomerListNode(RentalCustomerPtrType *customerPtr, const string userName)
{
  RentalCustomerPtrType nodeToBeDeletedPtr = *customerPtr;
  RentalCustomerPtrType beforeNodePtr = nullptr;

  while(nodeToBeDeletedPtr != nullptr && nodeToBeDeletedPtr->getName() != userName)
  {
    beforeNodePtr = nodeToBeDeletedPtr;
    nodeToBeDeletedPtr = nodeToBeDeletedPtr->getNextPtr();
  }

  if(nodeToBeDeletedPtr == nullptr)
  {
    return;
  }
  else if(beforeNodePtr == nullptr){
    *customerPtr = (*customerPtr)->getNextPtr();
    free(nodeToBeDeletedPtr);
  }
  else
  {
    beforeNodePtr->setNextPtr(nodeToBeDeletedPtr->getNextPtr());
    delete nodeToBeDeletedPtr;
  }
}

void printRentalCustomerList(RentalCustomerPtrType customerList)
{
    RentalCustomerPtrType currentPtr;
    for (currentPtr = customerList; currentPtr != nullptr; currentPtr = currentPtr->getNextPtr())
    {
      cout << currentPtr->getName() << endl;
      cout << &currentPtr << endl;
    }
    cout << endl;
}

void freeMemoryCustomerList(RentalCustomerPtrType *customerPtr)
{
  RentalCustomerPtrType currentPtr = *customerPtr;
  while(currentPtr != nullptr)
  {
    RentalCustomerPtrType tmpPtr = currentPtr;
    currentPtr = currentPtr->getNextPtr();

    delete tmpPtr;
  }

  *customerPtr = nullptr;
}