#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#include "treeNode.h"
#include "treeFunctions.h"
using namespace std;

/*
   Given desired data member value for new node, this function
   returns a pointer to a dynamically allocated tree node with
   the desired data member value. Both the left and right
   pointers are initialized to NULL.
*/
TreeNodePtr createNewTreeNode(int newNodeData)
{
  TreeNodePtr newNodePtr = nullptr;
  newNodePtr = new TreeNode;

  if (newNodePtr != nullptr)
    {
      newNodePtr->setLeftPtr(nullptr);
      newNodePtr->setData(newNodeData);
      newNodePtr->setRightPtr(nullptr);
    }

  return newNodePtr;
}


/*
   function to print tree (note: we will cover recursive
   functions for linkedLists and trees next time, so don't
   worry if this function is confusing at the moment)
*/
void printTree(TreeNodePtr treePtr, int indent)
{
  int i;
  if (treePtr != nullptr)
    {
      printTree(treePtr->getRightPtr(), indent + 5);
      for (i = 1; i <= indent; i++)
        {
          cout << " ";
        }
      cout << treePtr->getData() << endl;
      printTree(treePtr->getLeftPtr(), indent + 5);
    }
}

/*
   function to print the values of the nodes of a tree using
   a pre-order traversal
*/
void preOrderPrint(TreeNodePtr rootPtr)
{
  if (rootPtr != nullptr)
    {
      cout << rootPtr->getData() << " ";
      preOrderPrint(rootPtr->getLeftPtr());
      preOrderPrint(rootPtr->getRightPtr());
    }
}

/*
   function to print the values of the nodes of a tree using
   an in-order traversal
*/
void inOrderPrint(TreeNodePtr rootPtr)
{
  if (rootPtr != nullptr)
    {
      inOrderPrint(rootPtr->getLeftPtr());
      cout << rootPtr->getData() << " ";
      inOrderPrint(rootPtr->getRightPtr());
    }
}

/*
   function to print the values of the nodes of a tree using
   a post-order traversal
*/
void postOrderPrint(TreeNodePtr rootPtr)
{
  if (rootPtr != nullptr)
    {
      postOrderPrint(rootPtr->getLeftPtr());
      postOrderPrint(rootPtr->getRightPtr());
      cout << rootPtr->getData() << " ";
    }
}

/*
   function to print the given binary tree representation
   of an arithmetic expression in postfix notation
*/
void postOrderArithmeticExpressionPrint(TreeNodePtr rootPtr)
{
  if (rootPtr != nullptr)
    {
      postOrderArithmeticExpressionPrint(rootPtr->getLeftPtr());
      postOrderArithmeticExpressionPrint(rootPtr->getRightPtr());
      if (rootPtr->getRightPtr() != nullptr && rootPtr->getLeftPtr() != nullptr)
        {
          cout << (char)rootPtr->getData() << " "; /* if has two children, print as char */
        }
      else
        {
          cout << rootPtr->getData() << " "; /* otherwise, print as integer */
        }
    }
}


/*
   Given a pointer to a binary tree representation of an arithmetic expression,
   this function evaluates/returns the result of the expression.
   Note that completing this function is NOT required for your mini-assignment.
*/
float optionalComputeResultOfArithmeticExpressionTree(TreeNodePtr rootPtr)
{
  /* OPTIONAL EXTRA PRACTICE (NOT REQUIRED FOR MINI-ASSIGNMENT) */
  float result = 0.0;

  /* YOUR CODE HERE */

  return result;
}

/* function to print nodes in binary search tree in ascending order */
void printBinarySearchTreeValuesInAscendingOrder(TreeNodePtr rootPtr)
{
  /* TODO: CALL APPROPRIATE TREE TRAVERSAL FUNCTION HERE */
  /* COMPLETING THIS LINE IS REQUIRED FOR YOUR MINI-ASSIGNMENT */
  inOrderPrint(rootPtr);
}

/* function to print nodes in binary search tree in descending order */
void optionalPrintBinarySearchTreeValuesInDescendingOrder(TreeNodePtr rootPtr)
{
  /* OPTIONAL: COMPLETE THIS FUNCTION (NOT REQUIRED FOR MINI-ASSINGMENT) */
  /* Hint: calling one of the pre-order, in-order, or post-order functions directly will NOT
     work here. Think about how you can modify one of them to get it to work.*/
}



/*
   Given a pointer to a pointer to a binary tree and desired node
   value, this function will create/insert a node with the given
   value in a random leaf position in the tree.
*/
void insertTreeNodeRandomly(TreeNodePtr *rootPtr, int newNodeData)
{
  if (*rootPtr == nullptr) /* base case */
    {
      *rootPtr = createNewTreeNode(newNodeData);
    }
  else
    {
      if (rand() % 2 == 0)
        {
          TreeNodePtr currPtr = (*rootPtr)->getRightPtr();
          insertTreeNodeRandomly(&currPtr, newNodeData);
          (*rootPtr)->setRightPtr(currPtr);
        }
      else
        {
          TreeNodePtr currPtr = (*rootPtr)->getLeftPtr();
          insertTreeNodeRandomly(&currPtr, newNodeData);
          (*rootPtr)->setLeftPtr(currPtr);
        }
    }
}

/*
   Given a pointer to a pointer to a binary search tree and desired node
   value, this function will create/insert a node with the given
   value in the proper position. If the node value is a duplicate,
   it will NOT be inserted in the tree.
*/
void insertBinarySearchTreeNode(TreeNodePtr *rootPtr, int newNodeData)
{
  if (*rootPtr == nullptr) /* base case */
    {
      *rootPtr = createNewTreeNode(newNodeData);
    }
  else
    {

      if (newNodeData < (*rootPtr)->getData()) /* insert in left subtree */
        {
            TreeNodePtr currPtr = (*rootPtr)->getLeftPtr();
            insertBinarySearchTreeNode(&currPtr, newNodeData);
            (*rootPtr)->setLeftPtr(currPtr);
        }
      else if (newNodeData > (*rootPtr)->getData()) /* insert in right subtree */
        {
            TreeNodePtr currPtr = (*rootPtr)->getRightPtr();
            insertBinarySearchTreeNode(&currPtr, newNodeData);
            (*rootPtr)->setRightPtr(currPtr);
        }
    }
}

/* function to print arithmetic expression tree */
void printTreeAsArithmeticExpression(TreeNodePtr treePtr, int indent)
{
  int i;
  if (treePtr != nullptr)
    {
      printTreeAsArithmeticExpression(treePtr->getRightPtr(), indent + 5);

      for (i = 1; i <= indent; i++)
        {
          cout << " ";
        }
      if (treePtr->getRightPtr() != nullptr && treePtr->getLeftPtr() != nullptr)
        {
          cout << (char)treePtr->getData() << endl; /* if has two children, print as char */
        }
      else
        {
          cout << treePtr->getData() << endl; /* otherwise, print as integer */
        }

      printTreeAsArithmeticExpression(treePtr->getLeftPtr(), indent + 5);
    }
}


/*
   Given a pointer to a binary tree, this function returns the total number of
   nodes in the binary tree
*/
int getNumberOfNodesInBinaryTree(TreeNodePtr rootPtr)
{
  /* TODO: complete this function for the remainder of your mini-assignment */
  int numNodes = 0;
  if(rootPtr != nullptr){
    numNodes += 1;
    return getNumberOfNodesInBinaryTree(rootPtr->getLeftPtr());
  }
  if(rootPtr != nullptr){
    numNodes += 1;
    return getNumberOfNodesInBinaryTree(rootPtr->getRightPtr());
  }

  return numNodes;
}

/*
   Given a pointer to a binary tree, this function returns the height of the binary
   tree. However, if the tree is empty, -1 is returned. If the tree only has one
   node, 0 is returned.
*/
int getHeightOfBinaryTree(TreeNodePtr rootPtr)
{
  /* optionally complete this function */
  int height = -1;

  return height;
}
