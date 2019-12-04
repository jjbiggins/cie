/*-------------------------------------------------------------------------------
 * Programmer: TODO: Your name here
 * Name: lec24ma.cpp
 * Description: This program contains in-class examples and the mini-assignment
 *              associated with lecture 24 on stacks/queues.
 *
 *              For the mini-assignment, finish the implementations of the
 *              functions to:
 *              (1) pop a node from a stack (one added line required),
 *              (2) dequeue a node from a queue (four added lines required),
 *              (3) push a node onto a stack (two added lines required), and
 *              (4) enqueue a node into a queue (three added lines required).
 -------------------------------------------------------------------------------*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "Node.h"
#include "linkedListFunctions.h"
#include "queueFunctions.h"
#include "stackFunctions.h"
using namespace std;

/* function prototype for function associated with the stack example */
void stackExample();
/* function prototype for function associated with the queue example */
void queueExample();

int main(void)
{
  /* stack example */
  cout << "\n****** STACK EXAMPLE ******" << endl;
  stackExample();

  /* queue example */
  cout << "\n****** QUEUE EXAMPLE ******" << endl;
  queueExample();

  return 0;
}

/*-----------------------------------------------------------------------------
 * Function name: stackExample
 * Description: This function demonstrates using push and pop with a stack.
 ----------------------------------------------------------------------------*/
void stackExample()
{
  NodePtr topNodePtr = nullptr;
  int value;

  /* add nodes to stack, printing stack after each addition */
  stackPush(&topNodePtr, 2);
  cout << "Stack Push 2" << endl;
  cout << "Resulting stack: ";
  printLinkedList(topNodePtr);

  stackPush(&topNodePtr, 7);
  cout << "\nStack Push 7" << endl;
  cout << "Resulting stack: ";
  printLinkedList(topNodePtr);

  stackPush(&topNodePtr, 1);
  cout << "\nStack Push 1" << endl;
  cout << "Resulting stack: ";
  printLinkedList(topNodePtr);

  stackPush(&topNodePtr, 15);
  cout << "\nStack Push 15" << endl;
  cout << "Resulting stack: ";
  printLinkedList(topNodePtr);

  /* pop all nodes from stack */
  while (!isEmpty(topNodePtr))
    {
      cout << "\nStack Pop" << endl;
      cout << "Original stack: ";
      printLinkedList(topNodePtr);
      value = stackPop(&topNodePtr);
      cout << "Returned value: " << value << endl;
      cout << "Remaining stack: ";
      printLinkedList(topNodePtr);
    }
}

/*-----------------------------------------------------------------------------
 * Function name: queueExample
 * Description: This function demonstrates using enqueue and dequeue with a
 *              queue.
 ----------------------------------------------------------------------------*/
void queueExample()
{
  NodePtr headNodePtr = nullptr;
  NodePtr tailNodePtr = nullptr;
  int value;

  /* add nodes to queue, printing queue after each addition */
  queueEnqueue(&headNodePtr, &tailNodePtr, 2);
  cout << "Queue Enqueue 2" << endl;
  cout << "Resulting queue: ";
  printLinkedList(headNodePtr);

  queueEnqueue(&headNodePtr, &tailNodePtr, 7);
  cout << "\nQueue Enqueue 7" << endl;
  cout << "Resulting queue: ";
  printLinkedList(headNodePtr);

  queueEnqueue(&headNodePtr, &tailNodePtr, 1);
  cout << "\nQueue Enqueue 1" << endl;
  cout << "Resulting queue: ";
  printLinkedList(headNodePtr);

  queueEnqueue(&headNodePtr, &tailNodePtr, 15);
  cout << "\nQueue Enqueue 15" << endl;
  cout << "Resulting queue: ";
  printLinkedList(headNodePtr);

  /* pop all nodes from stack */
  while (!isEmpty(headNodePtr))
    {
      cout << "\nQueue Dequeue" << endl;
      cout << "Original queue: ";
      printLinkedList(headNodePtr);
      value = queueDequeue(&headNodePtr, &tailNodePtr);
      cout << "Returned value: " << value << endl;
      cout << "Remaining queue: ";
      printLinkedList(headNodePtr);
    }
}
