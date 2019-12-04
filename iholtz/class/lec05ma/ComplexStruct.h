//-----------------------------------------------------------------------------
// Programmer: Mona K. Garvin
// Name: Complex.h
// Description: This file contains a structure definition for a complex
//              number and some function prototypes for working with
//              complex numbers.
//-----------------------------------------------------------------------------
#ifndef COMPLEXSTRUCT_H
#define COMPLEXSTRUCT_H

// struct complex represents a complex number
class Complex {
public:
    double real; // real part
    double imag; // imaginary part
};

// returns magnitude of given complex number
double getMagnitudeOfComplexStruct(Complex c);
// returns phase angle (in radians) of given complex number
double getPhaseAngleOfComplexStructInRadians(Complex c);
// returns phase angle (in degrees) of given complex number
double getPhaseAngleOfComplexStructInDegrees(Complex c);

// prints the cartesian form of the given complex number to
// the standard output stream
void printComplexStructInCartesianForm(Complex c);
// prints the polar form of the given complex number to
// the standard output stream (angle in radians)
void printComplexStructInPolarFormRadians(Complex c);
// prints the polar form of the given complex number to
// the standard output stream (angle in degrees)
void printComplexStructInPolarFormDegrees(Complex c);
// Mini-assignment function: add the two complex numbers and returns the
// complex number of the sum
Complex addTwoComplexNumbers(Complex c1, Complex c2);

#endif // COMPLEXSTRUCT_H
