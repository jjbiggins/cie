/* Programmer: Your Name Here
*/
#include <iostream>
#include <stdio.h>
#include "min_max.h"

using namespace std;

float obtainMin(float arr[], const int n)
{
  float minValue = arr[0];
  for( int i = 1; i < n; i++){
    if(arr[i] < minValue){
      minValue = arr[i];
    }
  }
  return minValue;
}

float obtainMax(float arr[], const int n)
{
  float maxValue = arr[0];
  for( int i = 1; i < n; i++) {
    if (arr[i] > maxValue) {
      maxValue = arr[i];
    }
  }
  return maxValue;
}
