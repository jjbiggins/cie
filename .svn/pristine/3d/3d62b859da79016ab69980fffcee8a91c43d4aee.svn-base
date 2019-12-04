//
// Created by Hans Johnson on 4/19/17.
//

#include "Derived1.h"
#include <iostream>

using namespace std;

Derived1::Derived1(std::string name): TheBaseClass(9.0), m_name{name}
{
  cout << "In derived constructor with default name" << endl;
}

Derived1::Derived1(string name, float floatVal, int intVal): TheBaseClass(floatVal, intVal), m_name{name}
{
  cout << "In derived constructor with explicit name, float, int" << endl;
}

Derived1::~Derived1()
{ cout << "In derived destructor." << endl; }

const string &Derived1::getName() const
{ return m_name; }


void Derived1::print() const
{
  TheBaseClass::print();
  cout << "Name: " << m_name << endl;
}
