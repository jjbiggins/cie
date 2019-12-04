//------------------------------------------------------------------
// Programmer: TODO: Your Name Here
// Description: This program contains the mini-assignment for
//              lecture 37 (iterators)
//-------------------------------------------------------------------
#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <list>
#include <deque>

using namespace std;

/**
 * @brief  A function that copies elements starting at "first" until "first == last"
 *         into locations starting at out_first.
 *
 * @tparam InputIt  A TYPE representing one of the many iterator types
 * @tparam OutputIt A TYPE representing one of the many iterator types
 * @param first Where to start
 * @param last  One past the last element to process
 * @param out_first Output container iterator
 */
template<class InputIt, class OutputIt>
void my_copy(  InputIt first, InputIt last, OutputIt out_first)
{
  while (first != last) {
    *out_first = *first;
    out_first++;
    first++;
  }
  return ;
}

/**
 * @brief Square the input values and store in the output iterators
 * @param first  iterator to first element to add
 * @param last   iterator one past last element to add
 * @param out_first Output container iterator
 */
template<class InputIt, class OutputIt>
void my_squarer(  InputIt first, InputIt last, OutputIt out_first)
{
  // TODO: Finish this function
  return;
}

/**
 * @brief Add all the values in range [first,last) together
 * @param first  iterator to first element to add
 * @param last   iterator one past last element to add
 * @param initialValue for accumulator
 * @return
 */
template<class InputIt>
float my_accumulator( InputIt first, InputIt last, float initialValue=0.0F)
{
  float accumulator = initialValue;
  // TODO: Finish this function
  return accumulator;
}

/**
 * @brief multiply all the values in range [first,last) together
 * @param first  iterator to first element to add
 * @param last   iterator one past last element to add
 * @param initialValue for product accumulator
 * @return value accumulated
 */
template<class InputIt>
float my_product( InputIt first, InputIt last, float initialValue=1.0F)
{
  float product = initialValue;
  // TODO: Finish this function
  return product;
}

int main() {
  // create an array with 7 elements in it
  array<float, 7> myArray{1.0,2.0,3.0,4.0,5.0,6.0,7.0};
  // create other container classes with the same size as myArray
  vector<float>   myVector(myArray.size());
  list<float>     myList(myArray.size());
  deque<float>    myDeque(myArray.size());

  // An iterator for an output stream!  Intialize with cout (or any other stream output object)
  ostream_iterator<float> output{cout, " "};

  cout << "Task 1 result" << endl;
  cout << "1 2 3 4 5 6 7 | should be replicated by the following line" << endl;
  //TODO:  use my_copy to print a space separated content of myArray to cout using the output iterator
  cout << "|\n" << endl;

  cout << "Task 2 result" << endl;
  cout << "7 6 5 4 3 2 1 | should be replicated by the following line" << endl;
  //TODO:  use my_copy to print a space separated content of myArray in reverse order cout using the output iterator
  cout << "|\n" << endl;

  cout << "Task 3 result" << endl;
  cout << "7 6 5 4 3 2 1 | should be replicated by the following line" << endl;
  //TODO:  Copy myArray to myVector
  //TODO: then print myVector in reverse order
  cout << "|\n" << endl;

  cout << "Task 4 result" << endl;
  cout << "1 4 9 16 25 36 49 | should be replicated by the following line" << endl;
  //TODO:  Square the values of myArray and store in myList
  //TODO: then print myList in forward order
  cout << "|\n" << endl;

  cout << "Task 5 result" << endl;
  cout << "1 4 9 16 25 36 49 | should be replicated by the following line" << endl;
  //TODO:  Square the values of myArray in reverse order and store in myDeque
  //TODO: then print myDeque in reverse order
  cout << "|\n" << endl;

  cout << "Task 6 result" << endl;
  cout << "140| should be replicated by the following line" << endl;
  //TODO:  Add all values of myDeque together
  cout << "|\n" << endl;

  cout << "Task 7 result" << endl;
  cout << "5040| should be replicated by the following line" << endl;
  //TODO:  multiply all values of myVector in reverse order
  cout << "|\n" << endl;

  cout << "Task 8 result" << endl;
  cout << "1,4,9,16,25,36,49,| should be replicated by the following line" << endl;
  //TODO: print myDeque in reverse order with comma separated lines
  cout << "|\n" << endl;

  return 0;
}
