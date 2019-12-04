/*------------------------------------------------------------------------------
 * Programmer: Your name here
 * Description:
 -------------------------------------------------------------------------------*/

#include <stdio.h>
#include "Movie.h"
#include "RentalCustomer.h"
#include "helperfunctions.h"
#include <string>
#include <iostream>
#include <vector>

using namespace std;

/* Function to print user details */
void printRentalCustomer(RentalCustomer User) {

    cout << "Name: " << User.GetName() << endl;
    if(User.GetNumberRented()) {
        printMovie(User.GetRentedMovie());
    }
    else {
        cout << "No movies rented" << endl;
    }
    cout << "--------------------" << endl;
}


/* Function to print details of the movie */
void printMovie(const Movie & movie) {
    cout << movie.GetNumber() + 1 << ". " << movie.GetName() << endl;
}

void editMovieList(vector<string> & movieNames, const int movieNumber){
    movieNames.erase(movieNames.begin() + movieNumber);
}

void insertMovieName(RentalCustomer listOfUsers, vector<string> movieNames, vector<string> userNames){

    Movie movie = listOfUsers.GetRentedMovie();
    string nameRented = movie.GetName();
    int numRented = movie.GetNumber();
    movieNames.insert((movieNames.begin() + numRented), movieNames[numRented]);
}
