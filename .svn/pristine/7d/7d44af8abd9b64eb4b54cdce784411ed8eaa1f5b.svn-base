#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#include "Node.h"
#include "linkedListFunctions.h"
using namespace std;

/*-----------------------------------------------------------------------------
 * Function name: printLinkedList
 * Description: This function prints all of the values in a linked list.
 * Input: startPtr = NodeAddress = pointer to first node of linked list
 ----------------------------------------------------------------------------*/
void printLinkedList(NodeAddress startPtr)
{
  NodeAddress currentPtr;
  for (currentPtr = startPtr; currentPtr != nullptr; currentPtr = currentPtr->getNextPtr())
  {
    cout << currentPtr->getData() << " ";
  }
  cout << endl;
}


void insertNodeInLinkedList(NodeAddress *startPtr, int value)
{
  /* dynamically allocate memory for new node */
  /* will point to newly created node */
  NodeAddress newNodePtr; // TODO: dynamically allocate a new note here
  // TODO: If memory was not allocated successfully, provide an error message, and exit

  // TODO: setData for the new value
  // TODO: setNextPtr to nullptr

    /* determine where node should be inserted    */
    /* by defining beforeNodePtr and afterNodePtr */
    NodeAddress beforeNodePtr = nullptr;
    NodeAddress afterNodePtr = *startPtr;
    // TODO: find location in linked list where new node needs to be added
    while (afterNodePtr != nullptr && afterNodePtr->getData() < value)
    {
      //TODO: insert new node into existing linked list
    }

    //if (beforeNodePtr == nullptr) // TODO:  case 1: insert at beginning of list (beforeNodePtr is still NULL)
    //else                          // TODO: case 2: insert in middle or at end of list
}
