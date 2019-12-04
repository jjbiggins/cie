//-----------------------------------------------------------------------------
// Programmer: Joe Biggins
// Description: This program contains in-class examples and the mini-assignment
//              associated with lecture 35 (inheritance)
// Building from command line (on linux):
//  g++ main.cpp BasePlusCommissionEmployee.cpp CommissionEmployee.cpp -o main.exe
//
// Mini-assignment: Given the provided PhonePlan class and start of a derived
// class named PhonePlanWithData:
// (1) Finish the implementation of the printStatus member function for the
//     derived class named PhonePlanWithData in PhonePlanWithData.cpp.
//     Your printStatus member must
//     (a) call the base class's print member function and
//     (b) also print the number of remaining amount of GB of data available
//         in the month.
// (2) Write code within your miniAssignment() function in this file to create an object
//     of a the derived class and call ALL of its member functions at least once
//     (including those defined in the base class).
//-----------------------------------------------------------------------------
#include "BasePlusCommissionEmployee.h" // class definition for book example
#include <iomanip>
#include <iostream>
using namespace std;

#include "InheritanceExamples.h"
#include "PhonePlan.h"
#include "PhonePlanWithData.h"

//-----------------
// Mini-assignment
//-----------------
static void miniAssignment();

int main()
{
  std::cout << std::endl;
  std::cout << "---------------------" << std::endl;
  std::cout << "inheritanceExample():" << std::endl;
  std::cout << "---------------------" << std::endl;
  inheritanceExample();

  std::cout << std::endl;
  std::cout << "------------------" << std::endl;
  std::cout << "clickerQuestion():" << std::endl;
  std::cout << "------------------" << std::endl;
  // clickerQuestion();

  std::cout << std::endl;
  std::cout << "------------------------" << std::endl;
  std::cout << "bookInheritanceExample()" << std::endl;
  std::cout << "------------------------" << std::endl;
  bookInheritanceExample();

  std::cout << std::endl;
  std::cout << "----------------" << std::endl;
  std::cout << "miniAssignment()" << std::endl;
  std::cout << "----------------" << std::endl;
  miniAssignment();

  return 0;
}

void inheritanceExample()
{
  // create an example MyBaseClass object
  MyBaseClass baseA;
  baseA.setProtectedInt(1);
  baseA.setPrivateInt(2);
  std::cout << "Printing baseA:" << std::endl;
  baseA.print();
  std::cout << std::endl;

  // create an example MyDerivedClass object
  MyDerivedClass derivedA;
  derivedA.setProtectedInt(10);
  derivedA.setPrivateInt(11);
  derivedA.setAdditionalPrivateInt(12);
  std::cout << "Printing derivedA:" << std::endl;
  derivedA.print();
  std::cout << std::endl;

  // create a MyBaseClass object from the derivedA object
  MyBaseClass baseB(derivedA); // using automatic copy constructor
  std::cout << "Printing baseB:" << std::endl;
  baseB.print();
  std::cout << std::endl;
}

void clickerQuestion()
{
  CQDerived myObj;
  myObj.setBaseVal(1);
  myObj.setDerivedVal(2);
  myObj.print();

  CQBase myObj2;
  myObj2.setBaseVal(3);
  myObj2.print();

  CQBase *myPointer = &myObj;
  myPointer->print();
}

void bookInheritanceExample()
{
  // instantiate BasePlusCommissionEmployee object
  BasePlusCommissionEmployee employee("Bob", "Lewis", "333-33-3333", 5000, .04, 300);

  // set floating-point output formatting
  std::cout << fixed << setprecision(2);

  // get commission employee data
  std::cout << "Employee information obtained by get functions: \n"
            << "\nFirst name is " << employee.getFirstName() << "\nLast name is " << employee.getLastName()
            << "\nSocial security number is " << employee.getSocialSecurityNumber() << "\nGross sales is "
            << employee.getGrossSales() << "\nCommission rate is " << employee.getCommissionRate()
            << "\nBase salary is " << employee.getBaseSalary() << std::endl;

  employee.setBaseSalary(1000); // set base salary

  std::cout << "\nUpdated employee information output by print function: \n" << std::endl;

  std::cout << employee.toString() << std::endl; // display the new employee information

  // display the employee's earnings
  std::cout << "\n\nEmployee's earnings: $" << employee.earnings() << std::endl;
}

void miniAssignment()
{
  // TODO: create PhonePlanWithData object here (you may choose any constructor you wish)
  PhonePlanWithData myPlan;

  // TODO: Call ALL member functions directly available to the object here
  //       (calling each one at least once)
  //       You may call some member functions more than once, if you wish
  //       Make sure to also call the base member functions.
  myPlan.printStatus();
  cout << "there are " << myPlan.getRemainingMinutesInMonth() << " minutes remaining" << endl;
  cout << "there are " << myPlan.getRemainingDataInMonth() << "GB of data remaining" << endl;
  myPlan.setRemainingDataInMonth(12);
  myPlan.setRemainingMinutesInMonth(100);
  myPlan.printStatus();
  myPlan.useMinutes(50);
  myPlan.useData(6);
  myPlan.printStatus();
}
