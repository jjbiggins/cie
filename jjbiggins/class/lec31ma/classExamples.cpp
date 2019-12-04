#include "classExamples.h"
#include <iostream>


AnotherClass::AnotherClass(int id): m_ID{id}
{
  std::cout << "AnotherClass object with id = " << m_ID << " created. " << std::endl;
}

AnotherClass::~AnotherClass() { std::cout << "AnotherClass object with id = " << m_ID << " destroyed. " << std::endl; }


AnotherClass2::AnotherClass2(int id) : m_ID{id}
{
  std::cout << "AnotherClass2 object with id = " << m_ID << " created. " << std::endl;
}

AnotherClass2::AnotherClass2(const AnotherClass2 &objToCopyFrom): m_ID{objToCopyFrom.m_ID}
{
  std::cout << "AnotherClass2 object with id = " << m_ID << " created using copy constructor." << std::endl;
}

AnotherClass2::~AnotherClass2()
{
  std::cout << "AnotherClass2 object with id = " << m_ID << " destroyed. " << std::endl;
}

