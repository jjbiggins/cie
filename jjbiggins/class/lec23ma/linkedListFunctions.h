/* prototype for function to delete first node from linked list */
/* (your mini-assignment) */
extern void deleteFirstNodeInLinkedList(NodePtr *startPtr);

/* prototypes for general linked list functions */
/*-----------------------------------------------------------------------------
 * Function name: printLinkedList
 * Description: This function prints all of the values in a linked list.
 * Input: startPtr = NodePtr = pointer to first node of linked list
 ----------------------------------------------------------------------------*/
extern void printLinkedList(NodePtr startPtr);

/*-----------------------------------------------------------------------------
 * Function name: insertNodeInLinkedList
 * Description: This function creates a new node with the given value and
 *              inserts it in the sorted linked list. The list is maintained
 *              in ascending order.
 * Input: startPtr = pointer to NodePtr = pointer to the pointer of the first
 *                                        node of the list. The list is
 *                                        assumed to be in ascending order.
 *        value = int = integer value of node to be created/inserted in
 *                      sorted linked list
 * Output: startPtr = pointer to NodePtr = pointer to the pointer of the first
 *                                         node of the list. If a node
 *                                         was inserted at the beginning of
 *                                         the list, the value of *startPtr
 *                                         will have changed.
 ----------------------------------------------------------------------------*/
extern void insertNodeInLinkedList(NodePtr *startPtr, int value);

/*-----------------------------------------------------------------------------
 * Function name: deleteNodeInLinkedList
 * Description: This function finds the first node within the linked list
 *              with the given value and deletes it from the list.
 * Input: startPtr = pointer to NodePtr = pointer to the pointer of the first
 *                                        node of the list. The list is
 *                                        assumed to be in ascending order.
 *        value = int = integer value of node to be deleted from list
 * Output: startPtr = pointer to NodePtr = pointer to the pointer of the first
 *                                         node of the list. If the first node
 *                                         is deleted from the list, the value
 *                                         of *startPtr will change.
 ----------------------------------------------------------------------------*/
extern void deleteNodeInLinkedList(NodePtr *startPtr, int value);

/*-----------------------------------------------------------------------------
 * Function name: freeAllMemoryInLinkedList
 * Description: This function frees all the memory in a linked list and
 *              sets the start pointer to be equal to NULL. All
 *              nodes in the linked list must have been dynamically allocated.
 * Input: startPtr = NodePtr * = pointer to pointer to the first node of linked
 *                               list
 * Output: startPtr = NodePtr * = modification of the startPtr so that it
 *                                equals NULL to indicate an empty list
 ----------------------------------------------------------------------------*/
extern void freeAllMemoryInLinkedList(NodePtr *startPtr);
