//------------------------------------------------------------------------
// Programmer: Mona K. Garvin
// Name: StackFunctions.h
// Description: Header file for functions for manipulating a linked-list
//              representation of a stack.
//------------------------------------------------------------------------
#ifndef STACKFUNCTIONS_H
#define STACKFUNCTIONS_H

#include <cstdlib>
#include "Node.h"

// remove top node from stack and return its value
int stack_pop(NodePtr *topPtr);

// add a node to the top of a stack
void stack_push(NodePtr *topPtr, int value);

// deletes all nodes from stack
void stack_delete_all(NodePtr *topPtr);

// makes a copy of the input stack, returning a pointer
// to top node of the newly created stack
NodePtr stack_copy(NodePtr topPtr);

#endif // STACKFUNCTIONS_H
