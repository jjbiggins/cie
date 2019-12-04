//-----------------------------------------------------------------------------
// Programmer: Your name
// Description: This program contains in-class examples and associated mini-assignment with
//              lecture 07
//-----------------------------------------------------------------------------
#include <iostream>
#include <string>
#include "stringExamples.h"
#include "ComplexNumber.h"
#include "complexExamples.h"
#include "miniAssignment.h"

int main()
{
  // An exploration of various string notations

  std::cout << "**********************" << std::endl;
  std::cout << " Array STRING EXAMPLE " << std::endl;
  std::cout << "**********************" << std::endl;
  stringArrayExample();

  std::cout << "******************" << std::endl;
  std::cout << " STRING EXAMPLE 1 " << std::endl;
  std::cout << "******************" << std::endl;
  stringExample1();

  std::cout << std::endl;
  std::cout << "******************" << std::endl;
  std::cout << " STRING EXAMPLE 2 " << std::endl;
  std::cout << "******************" << std::endl;
  stringExample2();

  std::cout << std::endl;
  std::cout << "*************************" << std::endl;
  std::cout << " STRING CLICKER QUESTION " << std::endl;
  std::cout << "*************************" << std::endl;
  stringClickerQuestion();

  std::cout << "********************" << std::endl;
  std::cout << " COMPLEX EXAMPLE 1A " << std::endl;
  std::cout << "********************" << std::endl;
  complexExample1();

  std::cout << std::endl;
  std::cout << "*******************" << std::endl;
  std::cout << " COMPLEX EXAMPLE 2 " << std::endl;
  std::cout << "*******************" << std::endl;
  complexExample2();

  std::cout << std::endl;
  std::cout << "*****************" << std::endl;
  std::cout << " MINI-ASSIGNMENT " << std::endl;
  std::cout << "*****************" << std::endl;
  miniAssignment_part1();
  miniAssignment_part2();

  return 0;
}
