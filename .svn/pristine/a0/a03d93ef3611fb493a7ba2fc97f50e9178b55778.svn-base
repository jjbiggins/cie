#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#include "Node.h"
#include "stackFunctions.h"
using namespace std;


/*-----------------------------------------------------------------------------
 * Function name: stackPop
 * Description: This function deletes the top node from the stack and returns
 *              its value. The stack is assumed to not be empty.
 * Input: topPtr = pointer to NodePtr = pointer to the pointer of the top
 *                                      of the stack (first node in list).
 * Output: topPtr = pointer to NodePtr = pointer to the pointer of the new
 *                                       first node of the list.
 *         int = returned value of first node in list
 ----------------------------------------------------------------------------*/
int stackPop(NodePtr *topPtr)
{
  int value = 0;
  NodePtr originalTopNodeToDelete;

  if (*topPtr != nullptr)
    {
      /* save data member value of top node */
      value = (*topPtr)->getData();

      /* save pointer to original top node in the variable originalTopNodeToDelete */
      originalTopNodeToDelete = *topPtr;

      /* modify *topPtr to point to next node */
      *topPtr = (*topPtr)->getNextPtr();

      /* free memory for the original top of the stack */
      /* TODO: YOUR CODE HERE TO CALL THE DELETE FUNCTION (ONE LINE) */
      delete originalTopNodeToDelete;

    }
  else
    {
      cout << "Error. Attempting to pop node from empty stack." << endl;
    }

  return value;
}

/*-----------------------------------------------------------------------------
 * Function name: stackPush
 * Description: This function creates a new node with the given value and
 *              inserts it at the top (i.e., beginning) of the linked list
 *              representation of a stack.
 * Input: topPtr = pointer to NodePtr = pointer to the pointer of the top
 *                                      of the stack (first node in list).
 *        value = int = integer value of node to be created/inserted at the
 *                      top of the stack (i.e., the beginning of the list)
 * Output: topPtr = pointer to NodePtr = pointer to the pointer of the new
 *                                       first node of the list.
 ----------------------------------------------------------------------------*/
void stackPush(NodePtr *topPtr, int value)
{
  NodePtr newNodePtr = nullptr;

  /* create new node */
  newNodePtr = new Node;

  /* make new node the top of the stack */
  if (newNodePtr != nullptr)
    {
      /* set appropriate member values of newNodePtr */
      /* YOUR CODE HERE TO SET DATA MEMBER VALUE (ONE LINE) */
      newNodePtr->setData(value);
      /* YOUR CODE HERE TO SET NEXTPTR MEMBER VALUE (ONE LINE) */
      newNodePtr->setNextPtr(*topPtr);

      /* modify *topPtr so that it points to the top of the stack */
      *topPtr = newNodePtr;
    }
  else
    {
      cout << "Error. No memory available to insert " << value << " onto the stack.\n";
    }
}
