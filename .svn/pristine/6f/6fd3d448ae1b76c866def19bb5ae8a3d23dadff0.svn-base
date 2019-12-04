/*-----------------------------------------------------------------------------
 * Programmers:  Shawn Rennegarbe & Joe Biggins
 * Description: lec09ma.cpp: Print messages to screen on robot
 * To compile:
 * Select target all
 * To load program onto robot (once usb programmer plugged in and robot on):
 * Select target flash - Run / Build&Run
 ----------------------------------------------------------------------------*/
#include <pololu/3pi.h>   /* allow use of 3pi robot functions */
#include <avr/pgmspace.h> /* allow use of program space */
#include "battery.h"

static void printInitialMessage()
{
  /* clear lcd */
  clear();
  /* set lcd position to beginning of first line */
  lcd_goto_xy(0, 0);
  print("Hello");   /* TODO: modify to say something else */
  /* set lcd position to beginning of second line */
  lcd_goto_xy(0, 1);
  print("I am a robot");   /* TODO: modify to say something else */
  return;
}

int main( void )
{
  /* perform battery check */
  bat_check();

  printInitialMessage();

  /* main loop that runs forever */
  bool isFirst = false;
  while( 1 )
    {
      //TODO:  Do something interesting here
      print("Do something interesting!");
      delay_ms(1000);
      //TODO: (1) Print alernating messages with 1 second delay
      print("message 1");
      delay_ms(1000);
      print("message 2");
      //TODO; (2) Make print a message based on which button is pressed.
      char wait_for_250_ms_or_button_b() {
        if (button_is_pressed(BUTTON_B)) {
          print("you hit button b");
        }
        if (button_is_pressed(BUTTON_A)) {
          print("you hit button a");
        }
        if (button_is_pressed(BUTTON_C)) {
          print("you hit button c");
        }
      }

    delay_ms(1); //TODO: Fix this to proper value. (i.e. look up in 3pi documentation the delay_ms function
    }
}
