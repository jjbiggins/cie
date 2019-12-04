#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#include "Node.h"
#include "linkedListFunctions.h"
using namespace std;

/*-----------------------------------------------------------------------------
 * Function name: deleteFirstNodeInLinkedList
 * Description: This function deletes the first node in the given linked list.
 * Input: startPtr = pointer to NodePtr = pointer to the pointer of the first
 *                                        node of the list
 * Output: startPtr = pointer to NodePtr = pointer to the pointer of the new
 *                                         first node of the list
 ----------------------------------------------------------------------------*/
void deleteFirstNodeInLinkedList(NodePtr *startPtr)
{
  if (*startPtr != nullptr) /* if the list is not empty */
    {
      /* TODO: YOUR CODE HERE */
    }
}

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


void insertNodeInLinkedList(NodePtr *startPtr, int value)
{
  /* dynamically allocate memory for new node */
  /* will point to newly created node */
  NodePtr newNodePtr = new Node;

  /* insert node in list */
  if (newNodePtr != nullptr) /* if successfully allocated memory */
  {
    newNodePtr->setData(value);
    newNodePtr->setNextPtr(nullptr);

    /* determine where node should be inserted    */
    /* by defining beforeNodePtr and afterNodePtr */
    NodePtr beforeNodePtr = nullptr;
    NodePtr afterNodePtr = *startPtr;
    while (afterNodePtr != nullptr && afterNodePtr->getData() < value)
    {
      beforeNodePtr = afterNodePtr;
      afterNodePtr = afterNodePtr->getNextPtr();
    }

    /* case 1: insert at beginning of list (beforeNodePtr is still NULL) */
    if (beforeNodePtr == nullptr)
    {
      newNodePtr->setNextPtr( *startPtr ); /* set link to prior start */
      *startPtr = newNodePtr;          /* set new value for the startPtr */
    }
    else /* case 2: insert in middle or at end of list */
    {
      beforeNodePtr->setNextPtr( newNodePtr );
      newNodePtr->setNextPtr( afterNodePtr );
    }
  }
  else
  {
    cout << "Error allocating memory for new node of linked list." << endl;
  }
}


void deleteNodeInLinkedList(NodePtr *startPtr, int value)
{
  /* 1. determine which node should be deleted by defining nodeToDeletePtr and priorNodePtr */
  /* at the end of the while loop:
         - if the list is empty or the node is not found, nodeToDeletePtr will equal NULL
         - else if the first node should be deleted, nodeToDeletePtr will point to the first node
                                                     and priorNodePtr will equal NULL
         - else nodeToDeletePtr will point to the node to be deleted
                and priorNodePtr will point to the prior node
  */

  /* will point to node to be deleted */
  NodePtr nodeToDeletePtr = *startPtr;
  /* will point to node immediately preceding node to be deleted */
  NodePtr priorNodePtr = nullptr;
  while (nodeToDeletePtr != nullptr && nodeToDeletePtr->getData() != value)
  {
    priorNodePtr = nodeToDeletePtr;
    nodeToDeletePtr = nodeToDeletePtr->getNextPtr();
  }

  /* 2. delete node */
  if (nodeToDeletePtr == nullptr) /* empty list or node not found */
  {
    return;
  }
  else if (priorNodePtr == nullptr) /* first node should be deleted */
  {
    *startPtr = (*startPtr)->getNextPtr(); /* move startPtr to second node in list */
    free(nodeToDeletePtr);            /* free memory */
  }
  else /* middle or end node should be deleted */
  {
    priorNodePtr->setNextPtr( nodeToDeletePtr->getNextPtr() ); /* skip nodeToDelete in linked list */
    delete nodeToDeletePtr; /* free memory */
  }
}


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
