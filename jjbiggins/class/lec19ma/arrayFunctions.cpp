#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "arrayFunctions.h"

using namespace std;

/* function to print array arr of length arr_size */
void printArray(int *arr, int arr_size)
{
  int i;
  for (i = 0; i < arr_size; i++)
    {
      std::cout << arr[i] << " ";
    }
  std::cout << std::endl;
}

/* helper function associated with clicker question 1 option A */
int *getNewArrayOptionA(void)
{
  int myArray[3] = {-1, -2, -3};
  int *ptr = myArray;
  return ptr;
}

/* helper function associated with clicker question 1 option B */
void getNewArrayOptionB(int **ptr2ptr)
{
  int myArray[3] = {-1, -2, -3};
  *ptr2ptr = myArray;
}

/* helper function associated for clicker question 2 */
int *getNewArrayOptionAMod(void)
{
  /* TODO: CHANGE CODE TO RETURN POINTER TO DYNAMICALLY ALLOCATED ARRAY */
  /* OLD 'BAD' CODE:
  int myArray[3] = {-1, -2, -3};
  int *ptr = myArray;
  return ptr;
  */

  int *ptr = nullptr;
  /* YOUR CODE HERE */

  return ptr;
}

/* helper function for clicker question 3 */
void getNewArrayOptionBMod(int **ptr2ptr)
{
  /* TODO: CHANGE CODE TO SET *ptr2ptr TO POINT TO DYNAMICALLY ALLOCATED ARRAY */
  /* OLD 'BAD' CODE:
  int myArray[3] = {-1, -2, -3};
  *ptr2ptr = myArray;
  */

  /* YOUR CODE HERE */
}

/*-----------------------------------------------------------------------------
 * Function name: obtainArrayOfUserDefinedSize
 * Description: This function obtains a desired number of elements from the
 *              user (up to maxSize) and then returns a newly allocated
 *              array with all of the elements initialized to zero.
 * Inputs: maxSize = int = maximum number of elements in returned array
 *         resultingSize = pointer to int = address of integer containing any
 *                                          value (value will be modified in
 *                                          function)
 * Outputs: resultingSize = pointer to int = address of integer containing
 *                                           the resulting size of the newly
 *                                           allocated array
 *          pointer to int = pointer to dynamically allocated array of size
 *                          *resultingSize (with all elements initialized to
 *                           zero)
 ----------------------------------------------------------------------------*/
int * obtainArrayOfUserDefinedSize(int maxSize, int *resultingSize)
{
    int * ptr = nullptr;

    /* obtain integer from user between 1 and maxSize to obtain the desired size */
    /* YOUR CODE HERE TO PRINT MESSAGE TO USER */
    /* YOUR CODE HERE TO READ VALUE, SAVING VALUE IN *resultingSize */

    if (*resultingSize >= 1 && *resultingSize <= maxSize)
    {
        /* dynamically allocate array of specified number of elements */
        /* YOUR CODE HERE TO ALLOCATE MEMORY FOR ARRAY, INITIALIZING ALL ELEMENTS TO ZERO */

    }
    else
    {
        cout << "Error: incorrect size entered. Not creating array." << endl ;
    }

    return ptr;
}

/* helper function associated with clicker questions 3 and 4 */
void doSomething(void) { int a[10] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20}; }
