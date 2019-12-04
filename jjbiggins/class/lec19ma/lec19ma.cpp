/*-----------------------------------------------------------------
 * Programmer: Your name
 * Description: This file contains the examples and mini-assignment
 *              for lecture on dynamically allocated memory.
 -----------------------------------------------------------------*/
#include <iostream>
#include "arrayFunctions.h"

using namespace std;
/* function prototypes for clicker question 1 */
void optionA(void);
void optionB(void);

/* function prototypes for clicker questions 2 and 3 */
void optionAMod(void);
void optionBMod(void);

/* main function */
int main(void)
{
  /* clicker question 1 */
  // cout << "\n\noptionA(): " << endl ;
  //optionA();
  // cout << "\n\noptionB(): " << endl ;
  //optionB();

  /* clicker question 2 */
  cout << "\n\noptionAMod(): " << endl;
  optionAMod();

  /* clicker question 3 */
  cout << "\n\noptionBMod(): " << endl;
  optionBMod();


  /*Mini-assignment*/
  int *ptr = nullptr;
  int arrSize = 0;
  int maxSize = 10;
  /*TODO: Call the obtainArrayOfUserDefinedSize function*/

  if (ptr!=nullptr) {
      doSomething();
      printArray(ptr, arrSize);
      /*TODO: Delete the dynamically allocated array*/

  }

  return 0;
}

/* function associated with clicker question 1 - option A */
void optionA(void)
{
  int *ptr;
  ptr = getNewArrayOptionA();
  printArray(ptr, 3);
  doSomething();
  printArray(ptr, 3);
}

/* function associated with clicker question 1 - option B */
void optionB(void)
{
  int *ptr;

  getNewArrayOptionB(&ptr);
  printArray(ptr, 3);
  doSomething();
  printArray(ptr, 3);
}

/* function associated with clicker question 2 */
void optionAMod(void)
{
  int *ptr = nullptr;

  ptr = getNewArrayOptionAMod();

  if (ptr != nullptr)
    {
      printArray(ptr, 3);
      doSomething();
      printArray(ptr, 3);

      delete [] ptr;
    }
}

/* function associated with clicker question 3 */
void optionBMod(void)
{
  int *ptr = nullptr;

  getNewArrayOptionBMod(&ptr);

  if (ptr != nullptr)
    {
      printArray(ptr, 3);
      doSomething();
      printArray(ptr, 3);

      delete [] ptr;
    }
}

