//-----------------------------------------------------------------------------
// Programmer: TODO: Joseph Biggins
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
}

void miniAssignment()
{
  //TODO: create a ComplexStruct variable named c1 representing 2 + j7
  Complex c1;
    c1.real = 2;
    c1.imag = 7;

  //TODO: create a ComplexStruct variable named c2 representing 5 + j8
  Complex c2;
    c2.real = 5;
    c2.imag = 8;

  //TODO: create a ComplexStruct variable named c3 and make it equal to c1+c2 by calling the addTwoComplexNumbers function
  Complex c3;
    c3 = addTwoComplexNumbers(c1, c2);

  //TODO: print c3 in all forms
  printComplexStructInPolarFormRadians(c3);
  printComplexStructInCartesianForm(c3);
  printComplexStructInPolarFormDegrees(c3);



}
