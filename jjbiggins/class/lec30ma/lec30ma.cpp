//-----------------------------------------------------------------------------
// Programmer: TODO: Your name here
// Name: lec30ma.cpp
// Description: This program contains in-class examples and the mini-assignment
//              associated with lecture 30 (constructor/destructor basics)
// For the mini-assignment, you must implement four different constructors for the
// Time class and create objects of this class within the miniAssignment() function.
//-----------------------------------------------------------------------------
#include <iostream>
#include <iostream>
#include <stdexcept>
#include "classExamples.h"
#include "Time.h" // include definition of class Time from Time.h
using namespace std;

static void constructorExampleA()
{
  MyClassA myClassAObject;

  std::cout << myClassAObject.getX() << " " << myClassAObject.getY() << std::endl;
}

static void constructorExampleB()
{
  MyClassB myClassBObject;

  std::cout << myClassBObject.getX() << " " << myClassBObject.getY() << std::endl;
}

static void constructorExampleC()
{
  // MyClassC myClassCObject; // not allowed: default constructor not automatically provided since
  // user-defined constructor defined
  MyClassC myClassCObject(1, 1);

  std::cout << myClassCObject.getX() << " " << myClassCObject.getY() << std::endl;
}

static void constructorExampleD()
{
  MyClassD myClassDObject1;
  MyClassD myClassDObject2(2);
  MyClassD myClassDObject3(3, 3);

  std::cout << myClassDObject1.getX() << " " << myClassDObject1.getY() << std::endl;
  std::cout << myClassDObject2.getX() << " " << myClassDObject2.getY() << std::endl;
  std::cout << myClassDObject3.getX() << " " << myClassDObject3.getY() << std::endl;
}

static void constructorExampleE()
{
  MyClassE myClassEObject1;
  MyClassE myClassEObject2(2);
  MyClassE myClassEObject3(3, 3);

  std::cout << myClassEObject1.getX() << " " << myClassEObject1.getY() << std::endl;
  std::cout << myClassEObject2.getX() << " " << myClassEObject2.getY() << std::endl;
  std::cout << myClassEObject3.getX() << " " << myClassEObject3.getY() << std::endl;
}

static void destructorExample1()
{
  AnotherClass object0;
  AnotherClass object1(1);
  AnotherClass object2(2);
}

// displays a Time in 24-hour and 12-hour formats
static void displayTime(const string& message, const Time& time) {
   cout << message << "\nUniversal time: " << time.toUniversalString()
      << "\nStandard time: " << time.toStandardString() << "\n\n" << flush;
}

//-----------------------------------------------------------
// MINI-ASSIGNMENT PART 2:
// WRITE CODE WITHIN THE FUNCTION BELOW TO CREATE OBJECTS OF
// THE TIME CLASS. YOU MUST USE ALL OF THE CONSTRUCTORS YOU DEFINED.
//-----------------------------------------------------------
static void miniAssignment()
{
    // TODO:  Create 4 time objects to represent
    //    a) 8 am (a const object) using a constructor with only the hour as parameter
    const Time time1(8);
    displayTime("Time 1: ", time1);

    //    b) 2:30 pm (a const object) using a constructor with only two parameters: the hour and the minute
    const Time time2(2, 30);
    displayTime("Time 2: ",time2);

    //    c) 6:59:59 am using a constructor with three parameters (hour, minute, second)
    Time myTime(6, 59, 59);
    displayTime("My wake-up alarm ",myTime);

    //  d) declare a Time object atHome initialized using the default constructor; set the time to 5:00pm;
    //  and display the time
}

int main()
{
  //-----------------------
  // constructor examples:
  //-----------------------

  std::cout << "constructorExampleA():" << std::endl;
  constructorExampleA();

  std::cout << std::endl;
  std::cout << "constructorExampleB():" << std::endl;
  constructorExampleB();

  std::cout << std::endl;
  std::cout << "constructorExampleC():" << std::endl;
  constructorExampleC();

  std::cout << std::endl;
  std::cout << "constructorExampleD():" << std::endl;
  constructorExampleD();

  std::cout << std::endl;
  std::cout << "constructorExampleE():" << std::endl;
  constructorExampleE();

  //----------------------
  // destructor examples:
  //----------------------

  std::cout << std::endl;
  std::cout << "destructorExample1():" << std::endl;
  destructorExample1();

  //------------------
  // mini-assignment:
  //------------------

  std::cout << std::endl;
  std::cout << "miniAssignment():" << std::endl;
  miniAssignment();

  return 0;
}
