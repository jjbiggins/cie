/*------------------------------------------------------------------------------
 * Programmer: Shawn Rennegarbe & Joe Biggins
 * Date: February 24, 2017
 * Description: .hw2.cpp applies the movie rental program from hw1 to the robot. Movie checkout and movie return are the necessary options.
 -------------------------------------------------------------------------------*/
#include <pololu/3pi.h>   /* allow use of 3pi robot functions */
#include "Movie.h"
#include "RentalCustomer.h"
#include "helperfunctions.h"
#include "battery.h"
#include "RobotString.h"

int main(void) {
  bat_check();

  static const char *const MovieNameList[MAXMOVIES] = {
          "Passengers", "La La Land", "Assasins Creed", "Sing",
          "Suicide Squad", "The Girl on the Train", "The Magnificient Seven",
          "Underworld: Blood Wars", "Fifty Shades Darker", "Moana", "Arrival"
  };

  Movie Movies[MAXMOVIES];
  for (unsigned int num = 0; num < MAXMOVIES; ++num) {
    RobotString temp;
    temp.SetStringArray(MovieNameList[num]);
    Movies[num].SetName(temp);
    Movies[num].SetNumber(num);
  }

  static const char *const UserNamesList[MAXUSERS] = {
          "E.Mou", "B.Evans", "B.Schweer", "R.Su", "K.Anderson", "K.Christensen", "M.Jacob", "H.Johnson"
  };
  RentalCustomer Users[MAXUSERS];
  for (unsigned int idx = 0; idx < MAXUSERS; ++idx) {
    RobotString temp;
    temp.SetStringArray(UserNamesList[idx]);
    Users[idx].SetName(temp);
    Users[idx].SetNumberRented(0);
  }
  bool rented[MAXMOVIES] = {false, false, false, false, false, false, false, false, false}; //for movies
  bool checkout[MAXUSERS] = {true, true, true, true, true, true, true, true}; //for users

  /* Some useful strings for displaying status messages */
  RobotString rentedStringValue;
  rentedStringValue.SetStringArray("rented");
  RobotString sorryRentedValue;
  sorryRentedValue.SetStringArray("Sory;Ret");
  RobotString returnedMovieValue;
  returnedMovieValue.SetStringArray("returned");

  /* Welcome screen */
  print_two_lines("Welcome", "Mov rntl");
  delay_ms(200);

  while (1) {
    print_two_lines("A.Rent", "C.Return");
    // See documentation https://www.pololu.com/docs/0J18/9
    unsigned char button = wait_for_button_press(BUTTON_A | BUTTON_C);

    if (button == BUTTON_A)     //user presses button A for Rent
    {
       int customer = getUserNumber(Users, MAXUSERS); //shows scroll of customers and returns value of customer
       if (Users[customer].GetNumberRented() == 0) //if customer does not have a movie out
       {
          int movieChoice = getMovieNumber(Movies, MAXMOVIES, rented); //shows scroll of movies and returns value of movie

          if (!rented[movieChoice]) //if movie is not currently checked out, enter this loop
           {
               //set of commands sets movie name, customer name, rented amount, and availability from array
               Movies[movieChoice].SetNumber(movieChoice);
               Users[customer].SetNumberRented(customer);
               Users[customer].SetRentedMovie(Movies[movieChoice]);
               Users[customer].SetNumberRented(1);
               rented[movieChoice]= true; //sets movie to checked out
               checkout[customer]=false; //sets customer to having movie

               clear();
               lcd_goto_xy(0, 0);
               print_one_line("Rented!"); //shows user movie was successfully entered
               delay_ms(700);
           }
       }

       else if (Users[customer].GetNumberRented() == 1)  //enters this loop if customer already has a movie checked out
       {
           clear();
           lcd_goto_xy(0, 0);
           print_two_lines("Movie", "Out");
           delay_ms(700);
       }
   }


   else if( button == BUTTON_C )      //User presses button C: RETURN STATUS  ONLY PRINT OUT USERS WITH MOVIES!
   {
       int customer = getCustomerNumber(Users, MAXUSERS, checkout); //function call to print out customers with movies rented
       if (!checkout[customer]) //if movie has been checked out
       {
           clear();
           lcd_goto_xy(0, 0);
           print_two_lines("Movie", "Returned");
           delay_ms(700);
       }

       Users[customer].SetNumberRented(0);
       checkout[customer]=true; //sets customer to not having movie
       Movie movieChoice = returnMovie(Users[customer]); //calls function to get movie of customer
       int movieChoiceNum = movieChoice.GetNumber();
       rented[movieChoiceNum]=false; //sets movie to not being checked out
   }
  }
    return 0;
}

