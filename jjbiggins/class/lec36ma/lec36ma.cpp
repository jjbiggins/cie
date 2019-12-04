//-----------------------------------------------------------------------------
// Programmer:
// Description: This program contains in-class examples associated with
//              lecture 36 (constructors and destructors in derived classes)
//-----------------------------------------------------------------------------

/*
 * You must complete the base and derived classes to generate the following output when the program is run:

In base constructor.
############################
integer: 5
float: 1
In base constructor.
############################
integer: 3
float: 2
In base constructor.
In derived constructor with default name.
############################
integer: 5
float: 9
name: Hello
In base constructor.
In derived constructor with default name.
############################
integer: 5
float: 9
name: SecondTest
In base constructor.
In derived constructor with explicit name, float, and int values.
############################
integer: 99
float: 100
name: ThirdTest
In derived destructor.
In base destructor.
In derived destructor.
In base destructor.
In derived destructor.
In base destructor.
In base destructor.
In base destructor.
 */


#include <iostream>

using namespace std;

#include "TheBaseClass.h"
#include "Derived1.h"

int main()
{
  /* DO NOT CHANGE THE MAIN FUNCTION */
  TheBaseClass bc1(1);
  cout << "############################" << endl;
  bc1.print();
  TheBaseClass bc2(2, 3);
  cout << "############################" << endl;
  bc2.print();

  Derived1 d1;
  cout << "############################" << endl;
  d1.print();
  Derived1 d2("SecondTest");
  cout << "############################" << endl;
  d2.print();
  Derived1 d3("ThirdTest", 100.0, 99);
  cout << "############################" << endl;
  d3.print();
  return 0;
}
