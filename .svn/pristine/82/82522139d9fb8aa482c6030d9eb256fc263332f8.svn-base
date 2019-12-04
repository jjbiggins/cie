/*------------------------------------------------------------------------------
 * Programmer: Joseph Biggins
 * Name: hw1.cpp
 * Description:
  -------------------------------------------------------------------------------*/
#include <iostream>
#include <stdio.h>
#include <string>
#include "Movie.h"
#include "RentalCustomer.h"
#include "helperfunctions.h"
#include <vector>

using namespace std;

int main(void) {
    vector<string> menuOfOptions = {"list Status", "Return Movie", "Rent Movie", "Exit"};
    vector<string> userNames = {"Kyle Anderson", "Kyle Christensen", "Bradley Evans",
                                "Mathews Jacob", "Hans Johnson", "Elaine Mou",
                                "Brian Schweer", "Richard Su"};
    vector<string> movieNames = {"Passengers", "La La Land", "Assassin's Creed", "Sing",
                                 "Sucide Squad", "The Girl on the Train", "Fifty Shades Darker",
                                 "Underworld: Bloody Wars", "Mona", "Arrival"};

    Movie movie;

    RentalCustomer User;
    vector<RentalCustomer> listOfUsers = {};
    for(int i = 0; i < MAXUSERS; i++){
        User.SetName(userNames[i]);
        listOfUsers.push_back(User);
    }

    int userInput = 0;
    cout << userInput << endl;


    while(userInput != 4){
        int numOptions = menuOfOptions.size();
        for (int i = 0; i < numOptions; i++) {
            cout << "PRESS " << (i + 1) << " to " << menuOfOptions[i] << endl;
        }
        cout << "Enter Number of the your desired option: ";
        cin >> userInput;


        if (userInput == 1) {
            for(int i = 0; i < MAXUSERS; i++){
                printRentalCustomer(listOfUsers[i]);
            }
        }

        else if(userInput == 2){
            for(int i = 0; i < MAXUSERS; i++){
                cout << (i + 1) << ". " << userNames[i] << endl;
            }
            cout << "Enter the rental customer number from the above list: ";
            int userNumber;
            cin >> userNumber;
            cout << "Movie Returned" << endl;
        }

        else if(userInput == 3){
            for(int i = 0; i < MAXUSERS; i++){
                cout << (i + 1) << ". " << userNames[i] << endl;
            }
            cout << "Enter the rental customer number from the following list: ";
            int userNumber;
            cin >> userNumber;
            userNumber = userNumber - 1;

            for(int i = 0; i < 9; i++){
                cout << (i + 1) << ". " << movieNames[i] << endl;
            }
            cout << "Enter the number movie you would like to rent: ";
            int movieNumber;
            cin >> movieNumber;
            movieNumber = movieNumber - 1;

            movie.SetName(movieNames[movieNumber]);
            movie.SetNumber(movieNumber);

            listOfUsers[userNumber].SetRentedMovie(movie);
            listOfUsers[userNumber].SetNumberRented(movieNumber);

            printRentalCustomer(listOfUsers[userNumber]);
            editMovieList(movieNames, movieNumber);
        }
    }
}


