/*---------------------------------------------------------------
 * Programmer: Joe Biggins
 * Name: lec10ma.cpp
 * Description: This file contains the implementation of the
 *              mini-assignment associated with lecture 10.
 ---------------------------------------------------------------*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "min_max.h"
using namespace std;

int main(void)
{

  const size_t NumArrayElements = 10;

  float myArray[NumArrayElements] = {5.4, 3.2, 2.1, 1.0, 8.3, 7.5, 4.2, 2.4, 3.9, 5.0};

  float max, min;

  obtainMinMax(NumArrayElements, myArray, max, min);

  cout << "Determined minimum and maximum using pass-by-reference function:" << endl;

  cout << "The max value of myArray is: " << max << endl;
  cout << "The min value of myArray is: " << min << endl;

  return EXIT_SUCCESS; /* like return 0; */
}


