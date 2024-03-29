/*-------------------------------------------------------------------------
 * Programmer: Your Name Here
 * Name: lec03ma.cpp
 * Description: This example program is for the mini-assignment associated
 *              with lecture 3 (mostly on using svn + codeblocks).
 *              It uses a while loop to repeatedly do the following until
 *              the user enters -1:
 *                1. generate a random number between 0 and 4
 *                2. display the randomly generated number
 *                3. ask the user to enter the same number (or -1 to end)
 *                   and save this number
 *                4. print the number that the user entered
 *                5. [YOUR TASK] test to see if the user number is the
 *                   same as the randomly generated number
 *                   5a. If it is the same, "SAME" is printed
 *                   5b. Otherwise (and if it is not equal to -1),
 *                       "DIFFERENT" is printed
 *              When the user is done (by entering -1), "DONE" is
 *              displayed.
 -------------------------------------------------------------------------*/
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
using namespace std;

int main()
{
  /* seed random number generator */
  srand(time(nullptr));

  int userNumber = 0;      /* stores user's number */
  while (userNumber != -1) /* while the user is not done */
    {
      /* generate random number between 0 and 4 */
      const int randomNumber = rand() % 5; /* stores randomly generated number */

      /* display the randomly generated number */
      cout << "-----------------" << endl;
      cout << "Random number: " << randomNumber << endl;

      /* ask the user to enter the same number (or -1 to end)
         and save this number */
      cout << "Please enter the same number (or -1 to end): ";
      cin >> userNumber;

      /* print the number that the user entered */
      cout << "Your number: " << userNumber << endl;

      /* if the randomly generated number and the user number are
         the same, print "SAME"
         otherwise (and if the user number is not equal to -1),
         print "DIFFERENT" */

      /* YOUR CODE HERE */
    }

  /* indicate that the user is done */
  cout << "DONE" << endl;
  return 0;
}
