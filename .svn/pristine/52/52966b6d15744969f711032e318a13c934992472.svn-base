//-------------------------------------------------------------------------
// Programmer: Mona K. Garvin
// Name: StackFunctions.h
// Description: Implementation of functions for manipulating a linked-list
//              representation of a stack.
//-------------------------------------------------------------------------

#include "StackFunctions.h"
#include <cstdlib>

//--------------------------------------------------------------------------
// Function name: stack_push
// Description: This function creates a new node with the given value and
//              inserts it at the top (i.e., beginning) of the linked list
//              representation of a stack.
// Input: topPtr = pointer to NodePtr = pointer to the pointer of the top
//                                      of the stack (first node in list).
//        value = int = integer value of node to be created/inserted at the
//                      top of the stack (i.e., the beginning of the list)
// Output: topPtr = pointer to NodePtr = pointer to the pointer of the new
//                  first node of the list.
//--------------------------------------------------------------------------
void stack_push(NodePtr *topPtr, int value)
{
  // create new node
  NodePtr newNodePtr = new Node;

  // make new node the top of the stack
  if (newNodePtr != nullptr)
    {
      // set appropriate member values of newNodePtr
      newNodePtr->setData( value );
      newNodePtr->setNextPtr( *topPtr );

      // modify *topPtr so that it points to the top of the stack
      *topPtr = newNodePtr;
    }
}

//----------------------------------------------------------------------------
// Function name: stack_pop
// Description: This function deletes the top node from the stack and returns
//              its value. The stack is assumed to not be empty (but if
//              the stack is empty, 0 will be returned).
// Input: topPtr = pointer to NodePtr = pointer to the pointer of the top
//                                      of the stack (first node in list).
// Output: topPtr = pointer to NodePtr = pointer to the pointer of the new
//                                       first node of the list.
//         int = returned value of first node in list
//----------------------------------------------------------------------------
int stack_pop(NodePtr *topPtr)
{
  int value = 0;
  NodePtr originalTopNodeToDelete;

  if (*topPtr != nullptr)
    {
      // save data member value of top node
      value = (*topPtr)->getData();

      // save pointer to original top node
      originalTopNodeToDelete = *topPtr;

      // modify *topPtr to point to next node
      *topPtr = (*topPtr)->getNextPtr();

      // free memory for the original top of the stack
      delete originalTopNodeToDelete;
    }

  return value;
}

//----------------------------------------------------------------------------
// Function name: stack_copy
// Description: This function creates a new stack that is a copy of the input
//              stack and returns a pointer to the first node of the newly
//              created input stack.
// Input: topPtr = NodePtr = pointer of the top of the stack (first node
//                           in list).
// Output: NodePtr = pointer to the top node of the newly created stack
//----------------------------------------------------------------------------
NodePtr stack_copy(NodePtr topPtr)
{
  NodePtr newTopPtr = nullptr;

  if (topPtr != nullptr)
    {
      // copy first node
      newTopPtr = new Node;
      newTopPtr->setData(topPtr->getData());
      newTopPtr->setNextPtr( nullptr );

      // copy remaining nodes
      NodePtr priorNodeInNewList = newTopPtr;
      for (NodePtr currPtr = topPtr->getNextPtr(); currPtr != nullptr; currPtr = currPtr->getNextPtr())
        {
          // create new node
          NodePtr tmpPtr = new Node;
          tmpPtr->setData( currPtr->getData() );
          tmpPtr->setNextPtr( nullptr );

          // append to end of new linked list
          priorNodeInNewList->setNextPtr( tmpPtr );
          priorNodeInNewList = tmpPtr;
        }
    }

  return newTopPtr;
}

//-----------------------------------------------------------------------------
// Function name: stack_delete_all
// Description: This function releases all the memory in a linked list and
//              sets the start pointer to be equal to NULL. All
//              nodes in the linked list must have been dynamically allocated
//              using the new operator.
// Input: topPtr = NodePtr * = pointer to pointer to the first node of stack
// Output: topPtr = NodePtr * = modification of the topPtr so that it equals
//                              NULL to indicate an empty list
//-----------------------------------------------------------------------------
void stack_delete_all(NodePtr *topPtr)
{
  NodePtr tmpPtr, currentPtr;
  currentPtr = *topPtr;

  while (currentPtr != nullptr)
    {
      tmpPtr = currentPtr;              // keep a pointer to the node to be deleted
      currentPtr = currentPtr->getNextPtr(); // before memory for the node is freed, obtain a pointer to the next node

      delete tmpPtr; // release memory for the node
    }

  // indicate that the list is empty
  *topPtr = nullptr;
}
