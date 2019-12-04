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
