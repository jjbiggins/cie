/*------------------------------------------------------------------------------
 * Programmer: Your name here
 * Name:
 * Description:
 -------------------------------------------------------------------------------*/
#include <iostream>
#include "RentalCustomer.h"
#include "helperfunctions.h"
#include <string>

using namespace std;

int main(void) {
  int done = 0;
  int choice;
  int userNumber;
  int movieNumber;
  MoviePtrType moviePtr = nullptr;
  MoviePtrType  movieList = nullptr;
  RentalCustomerPtrType customerPtr = nullptr;

  const unsigned int INITIALNUMMOVIES = 11;
  const unsigned int INITIALNUMUSERS = 8;
  static const char *const InitialMovieNameList[INITIALNUMMOVIES] = {
          "Passengers", "La La Land", "Assasins Creed", "Sing",
          "Suicide Squad", "The Girl on the Train", "The Magnificient Seven",
          "Underworld: Blood Wars", "Fifty Shades Darker", "Moana", "Arrival"
  };

  for (unsigned int i = 0; i < INITIALNUMMOVIES; i++) {
    insertNodeMovieLinkedList(&moviePtr, InitialMovieNameList[i]);
  }
  printMovieLinkedList(moviePtr);


  static const char *const InitialUserNamesList[INITIALNUMUSERS] = {
          "E.Mou", "B.Evans", "B.Schweer", "R.Su", "K.Anderson", "K.Christensen", "M.Jacob", "H.Johnson"
  };

  for (unsigned int i = 0; i < INITIALNUMUSERS; i++) {
    insertRentalCustomerNode(&customerPtr, InitialUserNamesList[i]);
  }
  printRentalCustomerList(customerPtr);

  cout << "\nWelcome to the movie rental system." << endl;
  while (!done) {
    cout << "\nPlease enter a choice:" << endl;
    cout << "  1. Status" << endl;
    cout << "  2. Return Movie" << endl;
    cout << "  3. Rent Movie" << endl;
    cout << "  4. Add User" << endl;
    cout << "  5. Delete User" << endl;
    cout << "  6. Add Movie" << endl;
    cout << "  7. Delete User" << endl;
    cout << "  8. Exit" << endl;
    cout << "Your choice = ";
    cin >> choice;

    if(choice == 1)
    {
      preOrderPrint(customerPtr);
      printMovieLinkedList(moviePtr);
    }

    if(choice == 2)
    {
      cout << "\nEnter RentalCustomer number from following list: " << endl;
      printRentalCustomerList(customerPtr);
      cin >> userNumber;
      //deleteNodeToUserMovieList(&customerPtr, &movieList, userName);
    }

    if(choice == 3)
    {
      cout << "\nEnter RentalCustomer number from the following list: " << endl;
      printRentalCustomerList(customerPtr);
      cin >> userNumber;

      cout << "\nEnter the Movie number from the following list: " << endl;
      printMovieLinkedList(moviePtr);
      cin >> movieNumber;
      insertNodeToUserMovieList(&customerPtr, &movieList, InitialUserNamesList[userNumber], InitialMovieNameList[movieNumber]);
      deleteMovieListNode(&moviePtr, InitialMovieNameList[movieNumber]);
      preOrderPrint(customerPtr);
    }

    if(choice == 4)
    {
      cout << "\nEnter the name of the user you want to add: ";
      string userName;
      cin.ignore(1000, '\n');
      getline(cin, userName);
      insertRentalCustomerNode(&customerPtr, userName);
    }

    if(choice == 5)
    {
      cout << "\nEnter the number of the user you wanted to delete: ";
      printRentalCustomerList(customerPtr);
      cin >> userNumber;
      deleteCustomerListNode(&customerPtr, InitialUserNamesList[userNumber]);
    }

    if(choice == 6)
    {
      cout << "\nEnter the name of a movie you want to add: ";
      string movieName;
      cin.ignore(1000, '\n');
      getline(cin, movieName);
      insertNodeMovieLinkedList(&moviePtr, movieName);
    }

    if(choice == 7)
    {
      cout << "\nEnter the number of the user you want to delete: ";
      printRentalCustomerList(customerPtr);
      cin >> userNumber;
      deleteCustomerListNode(&customerPtr, InitialUserNamesList[userNumber]);
    }

    if(choice == 8){
      freeMemoryCustomerList(&customerPtr);
      freeMemoryMovieList(&moviePtr);
      done = 1;
    }
  }

  return 0;
}
