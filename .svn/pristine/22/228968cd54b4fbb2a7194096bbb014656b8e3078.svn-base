/*-------------------------------------------------------------------------------
 * Programmer: TODO: Your name here
 * Name: lec25ma.cpp
 * Description: This program contains in-class examples and the mini-assignment
 *              associated with lecture 25 on binary trees.
 *
 *         For the mini-assignment, you must:
 *         1. finish the implementation of miniAssignmentTreeRepresentation1()
 *            associated with clicker question 1
 *         2. add your sketched tree to the comments and finish the implementation
 *            of miniAssignmentTreeRepresentation2() (see lecture notes)
 -------------------------------------------------------------------------------*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "treeNode.h"
#include "treeFunctions.h"
using namespace std;


/* function prototypes associated with first example and the
   clicker question + first part of mini-assignment */
void exampleTreeRepresentation1();
void miniAssignmentTreeRepresentation1();
void optionalExtraPractice1();

/* function prototype associated with remainder of mini-assignment */
void miniAssignmentTreeRepresentation2();


int main(void)
{
  cout << "\nexampleTreeRepresentation1():" << endl;
  exampleTreeRepresentation1();

  cout << "\nminiAssignmentTreeRepresentation1():" << endl;
  miniAssignmentTreeRepresentation1();

  cout << "\noptionalExtraPractice1():" << endl;
  optionalExtraPractice1();

  cout << "\nminiAssignmentTreeRepresentation2():" << endl;
  miniAssignmentTreeRepresentation2();

  return 0;
}

/* function associated with first tree representation example */
void exampleTreeRepresentation1()
{
  TreeNodePtr rootPtr;

  rootPtr = createNewTreeNode(4);
  rootPtr->setLeftPtr(createNewTreeNode(3));
  rootPtr->setRightPtr(createNewTreeNode(8));

  rootPtr->getLeftPtr()->setLeftPtr(createNewTreeNode(1));

  rootPtr->getRightPtr()->setLeftPtr(createNewTreeNode(6));
  rootPtr->getRightPtr()->setRightPtr(createNewTreeNode(10));

  printTree(rootPtr, 0);
}

/* function associated with the first part of the mini-assignment */
void miniAssignmentTreeRepresentation1()
{
  TreeNodePtr rootPtr = nullptr;

  /* YOUR CODE HERE */
  rootPtr = createNewTreeNode(1);
  rootPtr->setLeftPtr(createNewTreeNode(2));
  rootPtr->setRightPtr(createNewTreeNode(3));

  rootPtr->getRightPtr()->setLeftPtr(createNewTreeNode(4));
  rootPtr->getRightPtr()->setRightPtr(createNewTreeNode(5));

  printTree(rootPtr, 0);
}

/*
   function for extra tree-representation practice (see lecture notes)
   completing this function is NOT required for your mini-assignment
*/
void optionalExtraPractice1()
{
  /* create the following trees using for loops:
TREE 1:

                  4
             4
        4
   4
4
   4
        4
             4
                  4
TREE 2:

   0
             0
                  2
        2
2
        2
                  2
             0
   0

*/

  /* YOUR OPTIONAL CODE HERE */
}

/* function associated with the second part of the mini-assignment */
void miniAssignmentTreeRepresentation2()
{
  /* Step 1 and 2: sketch of binary search tree resulting from
     inserting the following numbers (from left to right):
     40, 38, 36, 45, 39, 37, 42, 44, 56
     TODO: replace 9 instances of xx below with the appropriate number from above

                    40
            38              45
        36      39      42      56
      //  37  //  //  //  44  //  //
  */

  /* Step 3: write the code to explicitly represent your tree above */
  TreeNodePtr rootPtr = nullptr;
  /* TODO: YOUR CODE HERE */
  rootPtr = createNewTreeNode(40);
  rootPtr->setLeftPtr(createNewTreeNode(38));
  rootPtr->getLeftPtr()->setLeftPtr(createNewTreeNode(36));
  rootPtr->getLeftPtr()->setRightPtr(createNewTreeNode(39));
  rootPtr->getLeftPtr()->getLeftPtr()->setRightPtr(createNewTreeNode(37));

  rootPtr->setRightPtr(createNewTreeNode(45));
  rootPtr->getRightPtr()->setLeftPtr(createNewTreeNode(42));
  rootPtr->getRightPtr()->getLeftPtr()->setRightPtr(createNewTreeNode(44));
  rootPtr->getRightPtr()->setRightPtr(createNewTreeNode(56));

  /* print tree */
  printTree(rootPtr, 0);
}

