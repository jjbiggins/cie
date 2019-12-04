//-----------------------------------------------------------------------------
// Programmer: Mona K. Garvin
// Name: stringExamples.cpp
// Description: This program contains in-class examples associated with
//              lecture 07 on the string class.
//-----------------------------------------------------------------------------
#include <iostream>
#include <string>
#include <vector>
#include "stringExamples.h"

void stringArrayExample () 
{
  char a[] = "Bob";
  //NOTE: a is an array of 4 characters,
  //the '\0' is implied
  char b[] = {'B','o','b','\0' };

  for(int i = 0; a[i] != '\0'; ++i)
  {
    std::cout << a[i];
  }
  std::cout << std::endl;

  for(int i = 0; b[i] != '\0'; ++i)
  {
    std::cout << b[i];
  }
  std::cout << std::endl;
    
  std::cout << a << std::endl;
  std::cout << b << std::endl;
}

void stringExample1()
{
  std::string s1; // empty string
  std::string s2 = "Hello";
  std::string s3("world!");

  // assignment and concatenation example
  s1 = s2;   // assign one string to another
  s1 += " "; // concatenation with character string
  s1 += s3;  // concatenation with another string
  std::cout << "s1 = " << s1 << std::endl;
  std::cout << "s2 = " << s2 << std::endl;
  std::cout << "s3 = " << s3 << std::endl;

  // another option for concatenation
  std::string s4; // empty string
  s4 = s2 + " " + s3;
  std::cout << "s4 = " << s4 << std::endl;

  // comparing strings
  if (s1 == s4)
    {
      std::cout << "s1 is equal to s4" << std::endl;
    }

  if (s2 == "Hello")
    {
      std::cout << "s2 equals \"Hello\"" << std::endl;
    }

  // reading a string (one word)
  std::string name;
  std::cout << "Please enter your first name: ";
  std::cin >> name;
  std::cout << "Hello " << name << "!" << std::endl;

  // reading a line
  std::string completeName;
  std::cout << "Please enter your first and last name: ";
  std::cin.ignore();                          // throw away remaining '\n'
  std::getline(std::cin, completeName, '\n'); // read until newline is encountered
  std::cout << "Hello " << completeName << "!" << std::endl;
}

void stringExample2()
{
  std::string myString = "CIE classroom";
  std::cout << "myString = " << myString << std::endl;

  // iterate through all elements of the string: option 1
  for (size_t i = 0; i < myString.length(); i++)
    {
      std::cout << myString[i] << " ";
    }
  std::cout << std::endl;

  // iterate through all elements of the string: option 2
  for (size_t i = 0; i < myString.length(); i++)
    {
      std::cout << myString.at(i) << " ";
    }
  std::cout << std::endl;

  // iterate through all elements of the string: option 3 (don't worry about this option)
  std::string::iterator iter;
  for (iter = myString.begin(); iter != myString.end(); iter++)
    {
      std::cout << *iter << " ";
    }
  std::cout << std::endl;

  // search/replace example
  std::string searchString = "class";
  size_t pos = myString.find(searchString);
  if (pos != std::string::npos)
    {
      std::cout << searchString << " found at " << pos << std::endl;
    }

  // replace class with fun
  size_t startPos = pos;
  size_t numberCharsToReplace = searchString.size(); // can also use size() instead of length
  std::string replacementStr = "fun";
  myString.replace(startPos, numberCharsToReplace, replacementStr);
  std::cout << "After replacement, myString = " << myString << std::endl;
}

void stringClickerQuestion()
{
  std::string myDog1 = "Teddy";
  std::string myDog2 = "JT";

  std::string generalSentence = "dog and dog are very cute.";

  generalSentence.replace(generalSentence.find("dog"), 3, myDog1);
  generalSentence.replace(generalSentence.find("dog"), 3, myDog2);

  // std::cout << generalSentence << std::endl;
}
