//
// Created by Mathews Jacob on 1/12/17.
//
#include "Movie.h"
#include "RentalCustomer.h"
#include "helperfunctions.h"
#include <pololu/3pi.h>   /* allow use of 3pi robot functions */

const char menu_line2[] PROGMEM = "\x7f" "A \xa5" "B C\x7e";
const char beep_button_a[] PROGMEM = "!c32";
const char beep_button_b[] PROGMEM = "!e32";
const char beep_button_c[] PROGMEM = "!g32";

void rentMovie(RentalCustomer& User, Movie& movieIn)
{
  User.SetRentedMovie(movieIn);
  User.SetNumberRented(1);
};

Movie returnMovie(RentalCustomer& User)
{
  User.SetNumberRented(0);
  return User.GetRentedMovie();
};

void print_one_line(const RobotString & line1)
{
  for ( unsigned char i=0; i<8 && line1.at(i)!='\0'; ++i ) {
    print_character(line1.at(i));
  }
}

void print_one_line(const char l1[])
{
  RobotString rsl1;
  rsl1.SetStringArray(l1);
  print_one_line(rsl1);
}

void print_two_lines(const char l1[], const char l2[])
{
  RobotString rsl1;
  rsl1.SetStringArray(l1);
  RobotString rsl2;
  rsl2.SetStringArray(l2);
  print_two_lines(rsl1,rsl2);
}

void print_two_lines(const RobotString &line1, const RobotString &line2)
{
  clear();
  lcd_goto_xy(0, 0);
  print_one_line(line1);

  lcd_goto_xy(0, 1);
  print_one_line(line2);
  delay_ms(1000);
}

int getUserNumber(RentalCustomer Users[], int nUsers)
{
  // List users
  // --------------
  clear();
  lcd_goto_xy(0, 0);
  print_from_program_space(menu_line2);
  int userNo = 0;

  lcd_goto_xy(0, 1);
  print_one_line((Users[userNo].GetName()));
  lcd_show_cursor(CURSOR_BLINKING);

  while (1) {
    // wait for all buttons to be released, then a press
    const unsigned char button = wait_for_button_press(ANY_BUTTON);

    if (button==BUTTON_A) {
      play_from_program_space(beep_button_a);
      userNo = (userNo<1) ? 0 : userNo-1;
      clear();
      lcd_goto_xy(0, 0);
      print_from_program_space(menu_line2);

      lcd_goto_xy(0, 1);
      print_one_line((Users[userNo].GetName()));
      wait_for_button_release(button);

    }
    else if (button==BUTTON_B) {

      lcd_hide_cursor();
      clear();

      play_from_program_space(beep_button_b);
      wait_for_button_release(button);
      return userNo;
    }

    if (button==BUTTON_C) {
      play_from_program_space(beep_button_c);
      userNo = (userNo>nUsers-2) ? nUsers-1 : userNo+1;
      clear();
      lcd_goto_xy(0, 0);
      print_from_program_space(menu_line2);

      lcd_goto_xy(0, 1);
      print_one_line((Users[userNo].GetName()));
      wait_for_button_release(button);
    }
  }
}

int getMovieNumber(Movie Movies[], int nMovies, bool rented[])
{

  // List Movies
  // --------------
  clear();
  lcd_goto_xy(0, 0);
  print_from_program_space(menu_line2);
  int movieNo = getNextAvailableMovieNumber(nMovies, rented, movieNo, 1);

  if (rented[movieNo])
  {
    print_one_line("Empty !!");
    return (nMovies);
  }

  lcd_goto_xy(0, 1);
  print_one_line((Movies[movieNo].GetName()));
  lcd_show_cursor(CURSOR_BLINKING);

  while (1) {
    // wait for all buttons to be released, then a press

    unsigned char button = wait_for_button_press(ANY_BUTTON);
    while (button_is_pressed(ANY_BUTTON)); // Wait for button release

    if (button==BUTTON_A) {
      play_from_program_space(beep_button_a);

      movieNo = getNextAvailableMovieNumber(nMovies, rented, movieNo, 1);
      clear();
      lcd_goto_xy(0, 0);
      print_from_program_space(menu_line2);

      lcd_goto_xy(0, 1);
      print_one_line((Movies[movieNo].GetName()));
      wait_for_button_release(button);

    }
    else if (button==BUTTON_B) {

      lcd_hide_cursor();
      clear();

      play_from_program_space(beep_button_b);
      wait_for_button_release(button);
      return movieNo;
    }

    if (button==BUTTON_C) {
      play_from_program_space(beep_button_c);
      movieNo = getNextAvailableMovieNumber(nMovies, rented, movieNo, -1);
      clear();
      lcd_goto_xy(0, 0);
      print_from_program_space(menu_line2);

      lcd_goto_xy(0, 1);
      print_one_line((Movies[movieNo].GetName()));
      wait_for_button_release(button);
    }
  }
}

int getNextAvailableMovieNumber(const int nMovies, const bool rented[], int start, int dir)
{
  int movieNo = start;
  if (dir==1) {
    movieNo++;
    while (movieNo<nMovies && rented[movieNo])
      movieNo++;
    if (movieNo==nMovies) {
      movieNo = 0;
      while (movieNo<start && rented[movieNo])
        movieNo++;
    }
  }
  if (dir==-1) {
    movieNo--;
    while (movieNo>0 && rented[movieNo])
      movieNo--;
    if (movieNo==-1) {
      movieNo = nMovies-1;
      while (movieNo>start && rented[movieNo])
        movieNo--;
    }
  }
  return movieNo;
}



///////////////////////////////
//Function name: getCustomerNumber
//inputs: Users[] (object), nUser (int), checkout[] (bool)
//Outputs: int
//Description:  Function prints out customers that have movies checked out for "return" function. Function is based off of movie function
/////////////////////////////////
int getCustomerNumber(RentalCustomer Users[], int nUser, bool checkout[])
{

    // List Rental Customers with Movies
    // --------------
    clear();
    lcd_goto_xy(0, 0);
    print_from_program_space(menu_line2);
    int custNo = getNextAvailableMovieNumber(nUser, checkout, custNo, 1);

    if (checkout[custNo])
    {
        clear();
        lcd_goto_xy(0, 0);
        print_one_line("Empty !!");
        delay_ms(700);
        return (nUser);
    }

    lcd_goto_xy(0, 1);
    print_one_line((Users[custNo].GetName()));
    lcd_show_cursor(CURSOR_BLINKING);

    while (1) {
        // wait for all buttons to be released, then a press

        unsigned char button = wait_for_button_press(ANY_BUTTON);
        while (button_is_pressed(ANY_BUTTON)); // Wait for button release

        if (button==BUTTON_A) {
            play_from_program_space(beep_button_a);

            custNo = getNextAvailableMovieNumber(nUser, checkout, custNo, 1);
            clear();
            lcd_goto_xy(0, 0);
            print_from_program_space(menu_line2);

            lcd_goto_xy(0, 1);
            print_one_line((Users[custNo].GetName()));
            wait_for_button_release(button);

        }
        else if (button==BUTTON_B) {

            lcd_hide_cursor();
            clear();

            play_from_program_space(beep_button_b);
            wait_for_button_release(button);
            return custNo;
        }

        if (button==BUTTON_C) {
            play_from_program_space(beep_button_c);
            custNo = getNextAvailableMovieNumber(nUser, checkout, custNo, -1);
            clear();
            lcd_goto_xy(0, 0);
            print_from_program_space(menu_line2);

            lcd_goto_xy(0, 1);
            print_one_line((Users[custNo].GetName()));
            wait_for_button_release(button);
        }
    }
}


///////////////////////////////
//Function name: getNextAvailableuserNumber
//inputs: nUser (int), checkout[] (bool), start (int), dir (int)
//Outputs: int
//Description:  Function moves screens when printing out users with movies checked out.. based off getNextAvailableMovieNumber function.
/////////////////////////////////

int getNextAvailableUserNumber(const int nUser, const bool checkout[], int start, int dir)
{
    int custNo = start;
    if (dir==1) {
        custNo++;
        while (custNo<nUser && checkout[custNo])
            custNo++;
        if (custNo==nUser) {
            custNo = 0;
            while (custNo<start && checkout[custNo])
                custNo++;
        }
    }
    if (dir==-1) {
        custNo--;
        while (custNo>0 && checkout[custNo])
            custNo--;
        if (custNo==-1) {
            custNo = nUser-1;
            while (custNo>start && checkout[custNo])
                custNo--;
        }
    }
    return custNo;
}
