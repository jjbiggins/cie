/*-------------------------------------------------------------------------------
 * Programmer: TODO: Your name here
 * Description: This program contains in-class examples and the mini-assignment
 *              associated with inserting nodes into a
 *              linked lists in order using a function.
 *
 *              For the mini-assignment, you must complete the implementation
 *              of the function that inserts values into the linked list in order.
 *              The function must address the following situations:
 *                    startPtr in main must always maintain a pointer to the begining of the linked list
 *                    You may be inserting into an empty list
 *                    You may need to insert at the end of a list
 *                    You may need to insert in the middle of the list
 *                    You may need to insert at the begining of the list
 -------------------------------------------------------------------------------*/
#include <iostream>
#include "Node.h"
#include "linkedListFunctions.h"
using namespace std;


int main(void)
{
  bool done = false;
  NodeAddress startPtr = nullptr; /* pointer to initial, empty list */
  cout << "\nWelcome to the linked list management system." << endl;
    do {
      cout << "\nPlease enter a choice:" << endl;
      cout << "  1. insert node" << endl;
      cout << "  4. print list" << endl;
      cout << "  6. quit" << endl;
      cout << "Your choice = ";
      int choice;
      cin >> choice;

      int nodeValue;
      switch (choice) {
      case 1:
        cout << "\nEnter value for new node: ";
        cin >> nodeValue;
        insertNodeInLinkedList(&startPtr, nodeValue);
        cout << "New list:" << endl;
        printLinkedList(startPtr);
        break;
      case 4:
        cout << "\nCurrent linked list:" << endl;
        printLinkedList(startPtr);
        break;
      case 6:
        cout << "Thanks for using the linked list management system." << endl;
        done = true;
        break;
      default:
        cout << "Invalid choice." << endl;
        break;
      }
    }while( !done );

  return 0;
}

