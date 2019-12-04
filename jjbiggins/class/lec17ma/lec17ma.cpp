/*-----------------------------------------------------------------
 * Programmer: Your name
 * Description: This file contains the mini-assignment
 * to practice with pointer manipulations
 *
 * In all cases, we desire to print out the values "22 33 44 55 66 77 88"
 * to the screen.
 *
 * Correct these loops with the LEAST number of character changes to the code!
 * In most cases the loops can be fixed with only 1 or two character changes.
 -----------------------------------------------------------------*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

static void print_values_0(const int * const a)
{
  cout << "Fix the order of data processing " << endl;
  size_t i_ind=4;
  /*    var   = value */
  const int * const four = &( *( a + 3));
  const int * const three  = & ( a[i_ind] );
  const int * const two   = a+1;
  const int * const five  = & ( a[++i_ind] );
  const int * const one   = & ( a[i_ind++ + 1] );
  const int * const seven   = &(a[2]);
  const int * const six = reinterpret_cast<const int *>( reinterpret_cast<const char *>(a) + sizeof(int)*7 ) ;
  // TODO:  Fix the matching above so that the print statement displays correctly
  /* in the matching above, the values have been scrambled
   * you are only allowed to change the name of the variables in order
   * get the correct printing
   */
  cout << *one << " " << *two << " " << *three
       << " " << *four << " " <<  " " << *five
       << " " << *six << " " << *seven << endl;
}

static void print_values_1(const int * const a, const size_t LAST_VALID_ELEMENT)
{
  //Fix so that it prints out "22 33 44 55 66 77 88"
  cout << "LOOP TEST 1" << endl;
  {
    size_t i = 0;
    while (i <= LAST_VALID_ELEMENT) {
      ++i;
      cout << a[i] << " ";
    }
    cout << endl;
  }
}

static void print_values_2(const int * const a, const size_t LAST_VALID_ELEMENT)
{
  //Fix so that it prints out "22 33 44 55 66 77 88"
  cout << "LOOP TEST 2" << endl;
  {
    size_t i = 2;
    while (i <= LAST_VALID_ELEMENT) {
      cout << a[i++] << " ";
    }
    cout << endl;
  }
}

static void print_values_3(const int * const a, const size_t LAST_VALID_ELEMENT)
{
  //Fix so that it prints out "22 33 44 55 66 77 88"
  cout << "LOOP TEST 3" << endl;
  {
    size_t i = 1;
    while (i <= LAST_VALID_ELEMENT) {
      cout << a[++i] << " ";
    }
    cout << endl;
  }
}

static void print_values_4(const int * const a, const size_t LAST_VALID_ELEMENT)
{
  //Fix so that it prints out "22 33 44 55 66 77 88"
  cout << "LOOP TEST 4" << endl;
  {
    size_t i = 1;
    while (i <= LAST_VALID_ELEMENT) {
      cout << *( a + i++ )<< " ";
    }
    cout << endl;
  }
}

static void print_values_5(const int * const a, const size_t LAST_VALID_ELEMENT)
{
  //Fix so that it prints out "22 33 44 55 66 77 88"
  cout << "LOOP TEST 5" << endl;
  {
    size_t i = 1;
    while (i <= LAST_VALID_ELEMENT) {
      cout << *( a + ++i )<< " ";
    }
    cout << endl;
  }
}

static void print_values_6(const int * const a, const size_t LAST_VALID_ELEMENT)
{
  //Fix so that it prints out "22 33 44 55 66 77 88"
  cout << "LOOP TEST 6" << endl;
  {
    size_t i = 1;
    while (i <  LAST_VALID_ELEMENT) {
      const int * const curr_ptr = &(*(&(*(&(*(a+1))))));
      cout << *curr_ptr << " ";
      ++i;
    }
    cout << endl;
  }
}

static void print_values_7(const int * const a, const size_t LAST_VALID_ELEMENT)
{
  //Fix so that it prints out "22 33 44 55 66 77 88"
  cout << "LOOP TEST 7" << endl;
  {
    const int * iter=a;
    const int * const end = (a + LAST_VALID_ELEMENT);
    while (iter < end)
    {
      cout << *(iter++) << " ";
    }
    cout << endl;
  }
}

struct box {
  double l;
  double w;
  double h;
};

/* main function */
int main(void)
{

  struct box mybox{2,3,4};
  cout << "My Box Volume is " << mybox.l * mybox.w * mybox.h << endl;

    return 0;


  const size_t N=9;
  const size_t LAST_VALID_ELEMENT=7;
  int a[N] = {-999999999,22,33,44,55,66,77,88,-999999999};

  print_values_0(a);

  print_values_1(a,LAST_VALID_ELEMENT);
  print_values_2(a,LAST_VALID_ELEMENT);
  print_values_3(a,LAST_VALID_ELEMENT);
  print_values_4(a,LAST_VALID_ELEMENT);
  print_values_5(a,LAST_VALID_ELEMENT);
  print_values_6(a,LAST_VALID_ELEMENT);
  print_values_7(a,LAST_VALID_ELEMENT);

  return 0;
}

