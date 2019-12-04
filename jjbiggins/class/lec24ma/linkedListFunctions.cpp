#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#include "Node.h"
#include "linkedListFunctions.h"
using namespace std;

/*-----------------------------------------------------------------------------
 * Function name: printLinkedList
 * Description: This function prints all of the values in a linked list.
 * Input: startPtr = NodePtr = pointer to first node of linked list
 ----------------------------------------------------------------------------*/
void printLinkedList(NodePtr startPtr)
{
  NodePtr currentPtr;
  for (currentPtr = startPtr; currentPtr != nullptr; currentPtr = currentPtr->getNextPtr())
  {
    cout << currentPtr->getData() << " ";
  }
  cout << endl;
}

/*-----------------------------------------------------------------------------
 * Function name: isEmpty
 * Description: This function tests whether the given linked list is empty.
 * Input: startPtr = NodePtr = pointer to first node of linked list
 * Output: int = 1 if linked list is empty; 0 otherwise
 ----------------------------------------------------------------------------*/
int isEmpty(NodePtr startPtr) { return startPtr == nullptr; }


void freeAllMemoryInLinkedList(NodePtr *startPtr)
{
  NodePtr currentPtr = *startPtr;
  while (currentPtr != nullptr)
  {
    NodePtr tmpPtr = currentPtr;              /* keep a pointer to the node to be deleted */
    currentPtr = currentPtr->getNextPtr(); /* before memory for the node is freed, obtain a pointer to the next node */

    delete tmpPtr; /* free memory for the node */
  }
  /* indicate that the list is empty */
  *startPtr = nullptr;
}
