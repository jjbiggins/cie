#include <iostream>
#include "InheritanceExamples.h"

void MyBaseClass::print() const
{
  std::cout << "The protected int equals " << m_protectedInt << "." << std::endl;
  std::cout << "The private int equals " << m_privateInt << "." << std::endl;
}

void MyDerivedClass::print() const
{
  // call base class print function
  MyBaseClass::print();

  // also print additional data member value
  std::cout << "The additional private int equals " << m_additionalPrivateInt << "." << std::endl;
}

void CQBase::print() const { std::cout << m_base << std::endl; }

void CQDerived::print() const { std::cout << m_base << " " << m_derived << std::endl; }
