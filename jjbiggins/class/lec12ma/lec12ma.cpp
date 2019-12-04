/*-----------------------------------------------------------------------------
 * Programmer: Your Name Here
 * Description: This file contains the mini-assignment for lecture 5.
 *              You are required to finish the implementation
 *              of two functions (one to return the maximum of three
 *              floats and one to return the minimum of three floats):
 *              1. float obtainMax(float arr[], int n)
 *                 -> returns the maximum of the array of floats
 *              2. float obtainMin(float arr[], int n)
 *                 -> returns the minimum of the array of floats
 * NAME ABOVE AND FILL IN THE PORTIONS WHERE THERE IS A COMMENT THAT
 * SAYS "YOUR CODE HERE"
 ----------------------------------------------------------------------------*/
#include <iostream>
#include <stdio.h>
#include "min_max.h"

using namespace std;

int main(void)
{

  const size_t NumArrayElements = 5;

  float myArray[NumArrayElements];

  /* obtain floating point numbers from the user */
  cout << "Please enter " << NumArrayElements << " floating point numbers: ";
  for ( size_t i = 0 ; i <  NumArrayElements; ++i )
  {
    cin >> myArray[i]; /* input floats */
  }

  /* obtain minimum and maximum using pass-by-value functions */
  float minByVal, maxByVal; /* minimum and maximum values resulting from pass-by-value functions */
  minByVal = obtainMin(myArray,NumArrayElements);
  maxByVal = obtainMax(myArray,NumArrayElements);
  cout << "The determined minimum and maximum using pass-by-value functions:" << endl;
  cout << "    min: " << minByVal << endl;
  cout << "    max: " << maxByVal << endl;

  return EXIT_SUCCESS; /* like return 0; */
}

