/*------------------------------------------------------------------------------
 * Programmer: Your name here
 * Description:
 -------------------------------------------------------------------------------*/

#ifndef SRC_HELPERFUNCTIONS_H
#define SRC_HELPERFUNCTIONS_H
#define MAXUSERS 8
#define MAXMOVIES 11

#include <vector>

// Example functions to print

void printMovie(const Movie & movie);

void printRentalCustomer(RentalCustomer User);

void editMovieList(vector<string> & movieNames, const int movieNumber);

void insertMovieName(RentalCustomer listOfNames,  vector<string>  movieNames, vector<string> userNames);

#endif // SRC_HELPERFUNCTIONS_H
