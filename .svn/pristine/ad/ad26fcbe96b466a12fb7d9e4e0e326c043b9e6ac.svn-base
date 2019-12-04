/*-------------------------------------------------------------------------------
 * Programmer: TODO: Your name here
 * Description: This program contains in-class examples and the mini-assignment
 *              associated with lecture 23 on deleting nodes from
 *              linked lists using a function.
 *
 *              For the mini-assignment, you must complete the implementation
 *              of the function that deletes the FIRST node from a given linked
 *              list.
 -------------------------------------------------------------------------------*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "Node.h"
#include "linkedListFunctions.h"
using namespace std;


int main(void)
{
  int done = 0;
  int choice;
  int nodeValue;
  NodePtr startPtr = nullptr; /* pointer to initial, empty list */

  cout << "\nWelcome to the linked list management system." << endl;
  while (!done)
    {
      cout << "\nPlease enter a choice:" << endl;
      cout << "  1. insert node" << endl;
      cout << "  2. delete node" << endl;
      cout << "  3. delete first node" << endl; /* added for mini-assignment */
      cout << "  4. print list" << endl;
      cout << "  5. delete list" << endl;
      cout << "  6. quit" << endl;
      cout << "Your choice = ";
      cin >> choice;

      switch (choice)
        {
        case 1:
          cout << "\nEnter value for new node: ";
          cin >> nodeValue;
          insertNodeInLinkedList(&startPtr, nodeValue);
          cout << "New list:" << endl;
          printLinkedList(startPtr);
          break;
        case 2:
          cout << "\nEnter value of node to delete: ";
          cin >> nodeValue;
          deleteNodeInLinkedList(&startPtr, nodeValue);
          cout << "New list:" << endl;
          printLinkedList(startPtr);
          break;
        case 3:
          deleteFirstNodeInLinkedList(&startPtr);
          cout << "New list:" << endl;
          printLinkedList(startPtr);
        case 4:
          cout << "\nCurrent linked list:" << endl;
          printLinkedList(startPtr);
          break;
        case 5:
          cout << "\nDeleting all nodes in list." << endl;
          freeAllMemoryInLinkedList(&startPtr);
          cout << "New list:" << endl;
          printLinkedList(startPtr);
          break;
        case 6:
          cout << "Thanks for using the linked list management system." << endl;
          done = 1;
          break;
        default:
          cout << "Invalid choice." << endl;
          break;
        }
    }

  freeAllMemoryInLinkedList(&startPtr);
  return 0;
}

