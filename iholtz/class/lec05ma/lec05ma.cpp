//-----------------------------------------------------------------------------
// Programmer: TODO: Your name here
// Description: This program contains in-class examples and the mini-assignment
//              (an introduction to C++ classes).
// For the mini-assignment, you must complete the miniAssignment function by
// adding the appropriate line(s) of code under each comment.
//-----------------------------------------------------------------------------
#include <cmath>    // include math library header
#include <iostream> // include standard input/output library header

#include "ComplexStruct.h" // include definition of complex struct
using namespace std;

void complexExample();
void miniAssignment();

int main()
{
  std::cout << "********************" << std::endl;
  std::cout << " COMPLEX EXAMPLE " << std::endl;
  std::cout << "********************" << std::endl;
  complexExample();

  std::cout << std::endl;
  std::cout << "*****************" << std::endl;
  std::cout << " MINI-ASSIGNMENT " << std::endl;
  std::cout << "*****************" << std::endl;
  miniAssignment();

  return 0;
}

void complexExample()
{
  // create variable of type struct complex
  Complex c1;
  c1.real = 3;
  c1.imag = 4;

  // print different forms of this complex number
  printComplexStructInCartesianForm(c1);
  printComplexStructInPolarFormRadians(c1);
  printComplexStructInPolarFormDegrees(c1);
}

void miniAssignment()
{
  //TODO: create a ComplexStruct variable named c1 representing 2 + j7
  // YOUR LINES HERE

  //TODO: create a ComplexStruct variable named c2 representing 5 + j8
  // YOUR LINES HERE

  //TODO: create a ComplexStruct variable named c3 and make it equal to c1+c2 by calling the addTwoComplexNumbers function
  // YOUR LINES HERE

  //TODO: print c3 in all forms
  // YOUR LINES HERE
}
