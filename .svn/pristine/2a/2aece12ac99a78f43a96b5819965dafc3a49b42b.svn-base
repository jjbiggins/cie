//-----------------------------------------------------------------------------
// Programmer: YOUR NAME
// Name: Complex.cpp
// Description: Implementation of example functions associated with using
//              complex numbers (represented as a struct complex).
//-----------------------------------------------------------------------------
#include "ComplexStruct.h"
#include <cmath>
#include <iostream>

double getMagnitudeOfComplexStruct(Complex c) { return sqrt(c.real * c.real + c.imag * c.imag); }

double getPhaseAngleOfComplexStructInRadians(Complex c) { return atan2(c.imag, c.real); }

double getPhaseAngleOfComplexStructInDegrees(Complex c) { return atan2(c.imag, c.real) * 45 / atan(1); }

void printComplexStructInCartesianForm(Complex c) { std::cout << c.real << " + j" << c.imag << std::endl; }

void printComplexStructInPolarFormRadians(Complex c)
{
  std::cout << "magnitude = " << getMagnitudeOfComplexStruct(c)
            << ", angle = " << getPhaseAngleOfComplexStructInRadians(c) << " radians" << std::endl;
}

void printComplexStructInPolarFormDegrees(Complex c)
{
  std::cout << "magnitude = " << getMagnitudeOfComplexStruct(c)
            << ", angle = " << getPhaseAngleOfComplexStructInDegrees(c) << " degrees" << std::endl;
}


/*TODO: implement the addTwoComplexNUmbers function*/
