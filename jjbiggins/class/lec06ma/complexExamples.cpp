//-----------------------------------------------------------------------------
// Programmer: TODO: Your name here
// Name: complexExamples.cpp
//-----------------------------------------------------------------------------
#include <cmath>    // include math library header
#include <iostream> // include standard input/output library header

#include "ComplexNumber.h" // include complex number class
#include "complexExamples.h"

using namespace std;


void complexExample1()
{
  // create ComplexNumber object
  ComplexNumber c1;
  c1.setRealPart(3);
  c1.setImagPart(4);

  // print different forms of this complex number
  c1.printInCartesianForm();
  c1.printInPolarFormRadians();
  c1.printInPolarFormDegrees();
}

void complexExample2()
{
  // create ComplexNumber object 1
  std::cout << "---------------------------" << std::endl;
  std::cout << "Creating complex number c1:" << std::endl;
  std::cout << "---------------------------" << std::endl;
  ComplexNumber c1;
  // obtain real and imaginary parts of the first complex number from user
  c1.setRealImagPartsFromUser();
  // print in all forms
  c1.printInAllForms();

  // create ComplexNumber object 2
  std::cout << "---------------------------" << std::endl;
  std::cout << "Creating complex number c2:" << std::endl;
  std::cout << "---------------------------" << std::endl;
  ComplexNumber c2;
  // obtain real and imaginary parts of the second complex number from user
  c2.setRealImagPartsFromUser();
  // print in all forms
  c2.printInAllForms();

  // create ComplexNumber object 3
  std::cout << "---------------------------" << std::endl;
  std::cout << "Creating complex number c3:" << std::endl;
  std::cout << "---------------------------" << std::endl;
  ComplexNumber c3;
  // obtain real and imaginary parts of the second complex number from user
  c3.setRealImagPartsFromUser();
  // print in all forms
  c3.printInAllForms();

  std::cout << "-------------" << std::endl;
  std::cout << "c1 = c1 + c2:" << std::endl;
  std::cout << "-------------" << std::endl;
  c1.addComplexNumber(c2);
  c1.printInAllForms();

  std::cout << "-----------" << std::endl;
  std::cout << "c2 = c2*c3:" << std::endl;
  std::cout << "-----------" << std::endl;
  c2.multiplyComplexNumber(c3);
  c2.printInAllForms();
}

