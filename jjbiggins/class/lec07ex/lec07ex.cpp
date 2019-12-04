/*-------------------------------------------------------------------------
 * Programmer: Mona K. Garvin
 * Name: main.c
 * Description: This file contains examples from lecture 10 over the
 *              similarities of pointers and arrays.
 -------------------------------------------------------------------------*/
#include <iostream>
#include <stdlib.h>
using namespace std;




static void addFive(int *val) { *val = *val + 5; }

/* function prototypes for first two clicker questions */
static int clickerQuestion1(void)
{
  int x = 0;

  // addFive(x);
  addFive(&x);

  cout << "CQ1: x=" << x << endl;
  return 0;
}

static int clickerQuestion2(void)
{
  int x = 0;
  int *ptr = &x;

  addFive(ptr);
  // addFile(&ptr);

  cout << "CQ2: x=" << x << endl;
  return 0;
}

static int obtainArraySum(int arr[], int arr_size)
{
  int i;
  for (i = 1; i < arr_size; i++)
  {
    arr[i] = arr[i] + arr[i - 1];
  }

  return arr[arr_size - 1];
}


static void doSomething2(void)
{
  int a[3] = {2, 2, 2};
  int n = 3;
  int sum;

  sum = obtainArraySum(a, n);

  cout << sum << " " << a[0] << " " << a[1] << " " << a[2] << endl;
}


/* function prototype for additional example */
static void anotherExample(void)
{
  int a[4] = {1, 1, 1, 1};
  int n = 4;
  int sum;

  sum = obtainArraySum(a, n);

  cout << sum << " " << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << endl;
}



int main(void)
{
  clickerQuestion1();
  clickerQuestion2();

  doSomething2();

  anotherExample();

  return 0;
}
