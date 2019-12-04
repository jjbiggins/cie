/*-------------------------------------------------------------------------
 * Programmer: Garvin/Canahuate
 * Name: lec04ex.cpp
 * Description: This program implements all of the clicker questions
 *              from lecture 4. A menu is presented to the user for
 *              selecting the function choices. Once the user
 *              selects his/her function choice, the output of the
 *              corresponding function is printed. This process repeats
 *              until the user enters -1.
 -------------------------------------------------------------------------*/
#include <iostream>
#include "lec04_functions.h"

using namespace std;

int main(void)
{
  int questionChoice; /* stores question/function choice selected by user */
  int done = 0;       /* whether the user is done (0-false, 1-true) */

  /* print menu */
  cout << "Function choices:" << endl;
  cout << "1: arthimeticReview" << endl;
  cout << "2: ifElseReview" << endl;
  cout << "3: whileLoopReview" << endl;
  cout << "4: doWhileLoopReview" << endl;
  cout << "5: forLoopReview" << endl;

  /* while user is not done, ask them to enter a function choice (or -1 to end). Run the
     corresponding function, or indicate that the user is done as appropriate. */
  while (!done)
    {
      cout << endl << "Which function output do you want to see (enter a number between 1 and 5, -1 to end)? ";
      cin >> questionChoice;

      if (questionChoice == -1)
        {
          cout << "Done." << endl;
          done = 1;
        }
      else if (questionChoice < 1 || questionChoice > 5)
        {
          cout << "Invalid choice. Please try again." << endl;
        }
      else
        {
          cout << "----------------" << endl;
          cout << "Function " << questionChoice << ": " << endl;
          switch (questionChoice)
            {
            case 1:
              cout << "arithmeticReview()" << endl;
              arithmeticReview();
              break;
            case 2:
              cout << "ifElseReview()" << endl;
              ifElseReview();
              break;
            case 3:
              cout << "whileLoopReview()" << endl;
              whileLoopReview();
              break;
            case 4:
              cout << "doWhileLoopReview()" << endl;
              doWhileLoopReview();
              break;
            case 5:
              cout << "forLoopReview()" << endl;
              forLoopReview();
              break;
            default: /* default is not necessary, but provided for syntax review */
              cout << "Reached default case." << endl;
              break;
            }
          cout << "----------------" << endl;
        }
    }

  return 0;
}
