//
// Created by Hans Johnson on 4/19/17.
//

#ifndef CIE2017_DERIVED1_H
#define CIE2017_DERIVED1_H

#include "TheBaseClass.h"
#include <string>
#include <iostream>

using namespace std;

class Derived1 : public TheBaseClass
{
public:
  Derived1(std::string name = "Hello");

  Derived1(string name, float floatVal, int intVal);


  // destructor
  ~Derived1();

  // get name
  const string &getName() const;

  // print function for the Derived1 class
  void print() const;

private:
  const string m_name;
};

#endif //CIE2017_DERIVED1_H
