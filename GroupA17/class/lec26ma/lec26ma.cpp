/*-------------------------------------------------------------------------------
 * Programmer: TODO: Your name here
 * Name: lec26ma.cpp
 * Description: This program contains in-class examples and the mini-assignment
 *              associated with lecture 26 on recursive functions and
 *              binary trees.
 *
 *         For the mini-assignment, you must:
 *         (R1) call the correct tree traversal function within the
 *              printBinarySearchTreeValuesInAscendingOrder function so that
 *              the values of the nodes will be printed in ascending order.
 *         (R2) Complete the getNumberOfNodesInBinaryTree function to return
 *              the total number of nodes in the given binary tree.
 *
 *         You may optionally consider to complete the following (NOT required):
 *         (O1) computing (by hand) the pre-order, in-order, and post-order tree
 *              traversals of the tree associated with clicker question 1
 *              (see lecture notes or clickerQuestion1() for tree)
 *         (O2) completing the function optionalComputeResultOfArithmeticExpressionTree
 *              to evaluate a binary tree representation of an arithmetic
 *              expression
 *         (O3) completing the function optionalPrintBinarySearchTreeValuesInDescendingOrder
 *              to print the nodes of a binary search tree in descending order
 *         (O4) completing the function getHeightOfBinaryTree for returning
 *              the height of a binary tree
 -------------------------------------------------------------------------------*/
#include <iomanip>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Node.h"
#include "treeNode.h"
#include "linkedListFunctions.h"
#include "treeFunctions.h"
using namespace std;

/* function prototypes associated with recursive function example */
void computeFactorialExample();
long computeFactorial(long n);

void linkedListExample();

/* function prototype associated with clicker question 1 */
void clickerQuestion1();

/* function prototype associated with function to illustrate tree traversal */
void traversalExamples();

/* function prototypes associated with clicker question 2 */
void clickerQuestion2();

/* function prototypes for remainder of mini-assignment */
void remainderOfMiniAssignment();

int main(void)
{
  cout << "\n**************************" << endl;
  cout << "computeFactorialExample():" << endl;
  cout << "**************************" << endl;
  computeFactorialExample();

  cout << "\n********************" << endl;
  cout << "clickerQuestion1():" << endl;
  cout << "********************" << endl;
  clickerQuestion1();

  cout << "\n********************" << endl;
  cout << "linkedListExample():" << endl;
  cout << "********************" << endl;
  linkedListExample();

  cout << "\n********************" << endl;
  cout << "traversalExamples():" << endl;
  cout << "********************" << endl;
  traversalExamples();

  cout << "\n********************" << endl;
  cout << "clickerQuestion2():" << endl;
  cout << "********************" << endl;
  clickerQuestion2();

  cout << "\n***************************" << endl;
  cout << "remainderOfMiniAssignment():" << endl;
  cout << "****************************" << endl;
  remainderOfMiniAssignment();

  return 0;
}

/* function to call the computeFactorial function */
void computeFactorialExample()
{
  int i;

  for (i = 0; i <= 10; i++)
    {
      cout << setw(2) << right << i << "! = " << computeFactorial(i) << endl;
    }
}

/*
   Given an integer, this function uses recursion to compute/return
   the factorial of the given integer.
*/
long computeFactorial(long n)
{
  if (n <= 0) /* base case */
    {
      return 1;
    }
  else /* recursive case */
    {
      return n * computeFactorial(n - 1);
    }
}


/* function associated with clicker question 1 */
void clickerQuestion1()
{
  TreeNodePtr rootPtr = nullptr;

  rootPtr = createNewTreeNode(42);
  rootPtr->setLeftPtr(createNewTreeNode(3));
  rootPtr->setRightPtr(createNewTreeNode(43));
  rootPtr->getRightPtr()->setLeftPtr(createNewTreeNode(1));
  rootPtr->getRightPtr()->setRightPtr(createNewTreeNode(4));

  /*
      cout << "tree:" << endl ;
      printTree(rootPtr,0);
      cout << "post order traversal:" << endl ;
      postOrderPrint(rootPtr);
      cout << "" << endl ;
      cout << "arithmetic expression tree:" << endl ;
      printTreeAsArithmeticExpression(rootPtr, 0);
      cout << "postfix notation:" << endl ;
      postOrderArithmeticExpressionPrint(rootPtr);
      cout << endl ;
      cout << "Result of evaluating arithmetic expression: " << optionalComputeResultOfArithmeticExpressionTree(rootPtr)
     << endl;
  */
}

/*
   Function to illustrate printing the nodes of a linked
   list in reverse order using recursion
*/
void linkedListExample()
{

  NodePtr startPtr = nullptr;

  /* create example linked list inserting values 21,35,72, and 96 */
  insertNodeInLinkedList(&startPtr, 21);
  insertNodeInLinkedList(&startPtr, 35);
  insertNodeInLinkedList(&startPtr, 72);
  insertNodeInLinkedList(&startPtr, 96);
  cout << "LINKED LIST IN REVERSE:" << endl;
  printInReverse(startPtr);
  cout << endl;
  freeAllMemoryInLinkedList(&startPtr);
}

/*
   Function to illustrate printing the nodes of a tree
   using pre-order, in-order, and post-order traversals
*/
void traversalExamples()
{
  int i, value;
  TreeNodePtr rootPtr = nullptr;

  /* create example tree by inserting 10 nodes with random values
     into random positions of tree */
  srand(time(nullptr)); /* seed random number generator */
  for (i = 0; i < 10; i++)
    {
      value = rand() % 100;
      insertTreeNodeRandomly(&rootPtr, value);
    }

  cout << "RANDOM TREE:" << endl;
  printTree(rootPtr, 0);
  cout << "\nPre-order traversal:" << endl;
  preOrderPrint(rootPtr);
  cout << "\nIn-order traversal:" << endl;
  inOrderPrint(rootPtr);
  cout << "\nPost-order traversal:" << endl;
  postOrderPrint(rootPtr);
  cout << "" << endl;
}

/* function associated with clicker question 2 */
void clickerQuestion2()
{
  int array[9] = {40, 38, 36, 45, 39, 37, 42, 44, 56};
  int n = 9;
  int i;
  TreeNodePtr rootPtr = nullptr;

  /* create binary search tree from the array elements */
  for (i = 0; i < n; i++)
    {
      insertBinarySearchTreeNode(&rootPtr, array[i]);
    }
  /* print tree */
  printTree(rootPtr, 0);

  /* print values of tree in ascending order */
  cout << "Values in ascending order:" << endl;
  printBinarySearchTreeValuesInAscendingOrder(rootPtr);
  cout << "" << endl;

  /* (optional) print values of tree in descending order */
  cout << "Values in descending order (if implemented):" << endl;
  optionalPrintBinarySearchTreeValuesInDescendingOrder(rootPtr);
  cout << endl;
}




/* function for rest of mini-assignment */
void remainderOfMiniAssignment()
{
  int numRandomValues, i, val;
  TreeNodePtr rootPtr = nullptr;

  srand(time(nullptr)); /* seed random number generator */

  numRandomValues = rand() % 10 + 10; /* upperbound on number of nodes */

  /* create binary search tree with random node values with
    up to numRandomValues (may be less as duplicates won't be allowed) */
  for (i = 0; i < numRandomValues; i++)
    {
      val = rand() % 100;
      insertBinarySearchTreeNode(&rootPtr, val);
    }

  /* print tree */
  cout << "RANDOM SEARCH TREE:" << endl;
  printTree(rootPtr, 0);

  /* print number of nodes */
  cout << "Number of nodes: " << getNumberOfNodesInBinaryTree(rootPtr) << endl;

  /* print height of tree */
  cout << "Height of tree (if implemented): " << getHeightOfBinaryTree(rootPtr) << endl;
}

