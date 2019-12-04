//-----------------------------------------------------------------------------
// Programmer: TODO: Your name here
// Description: This program contains in-class examples and the mini-assignment
//              associated with lecture 34 (on an introduction to inheritance)
//
// Part 1 of mini-assignment: Within this comment block, provide two examples
// of a potential base class and associated derived classes (you may NOT
// provide the same examples as those used during class). For every base class,
// you must provide at least two associated derived classes. If the relationship
// is not obvious (e.g., the names you use would be known to only a limited
// number of individuals), you must provide a brief explanation of why an
// inheritance relationship would hold.
//
// Your example 1:
// Base class name: Animal
// Derived class 1 name: Cat
// Derived class 2 name: Dog
// Brief explanation (if relationship not obvious):
//
// Your example 2:
// Base class name: Plant
// Derived class 1 name: Elm Tree
// Derived class 2 name: Sunflower
// Brief explanation (if relationship not obvious):
//
// Part 2 of mini-assignment: Using the VideoGameWishListItem class as an
// example, create a derived class named BookWishListItem (with WishListItem
// as the base class) that represents a book on a wish list. Your
// BookWishListItem class should have a std::string data member to represent
// the format of the book (e.g., "paperback") and this data member should be
// initialized to "unknown" in the constructor. Your class should also have
// the following member functions (in addition to the constructor):
//     void setFormat(std::string format)
//     std::string getFormat() const
//     void print() const
// In your implementation of the print member function, make sure to call
// the base class's print member function first and then print out the format
// of the book. Once you have defined your class, uncomment the lines in
// lec34ma.cpp involving item3 to test your class.
//-----------------------------------------------------------------------------
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
#include "wishListItem.h"
#include "videoGameWishListItem.h"
#include "bookWishListItem.h"
using namespace std;

int main()
{
  std::cout << "Wish list:" << std::endl;
  std::cout << "-------------------------------------------------------" << std::endl;

  WishListItem item1;
  item1.setName("GPS watch");
  item1.setCost(149.99);
  item1.print();
  std::cout << std::endl;

  VideoGameWishListItem item2;
  item2.setName("Just Dance 2014");
  item2.setCost(45.99);
  item2.setPlatform("PS4");
  item2.print();
  std::cout << std::endl;


  BookWishListItem item3;
  item3.setName("C++ Templates: The Complete Guide");
  item3.setCost(56.55);
  item3.setFormat("hardcover");
  item3.print();
  std::cout << std::endl;

  // compute total cost of items
  std::vector<WishListItem> items;
  items.push_back(item1);
  items.push_back(item2);
  items.push_back(item3);

  double totalCost = 0;
  std::vector<WishListItem>::iterator iter;
  for (iter = items.begin(); iter != items.end(); ++iter)
    {
      totalCost += iter->getCost();
    }

  std::cout << "-------------------------------------------------------" << std::endl;
  std::cout << "Total cost: " << std::fixed << std::setprecision(2) << "$" << totalCost << std::endl;

  return 0;
}
