/*-----------------------------------------------------------------------------
 * Programmers: Shawn Rennegarbe & Joe Biggins
 * Description: A 3pi robot program that repeatedly (1) has the user play a
 *              sequence (of a pre-specified length) of notes using the buttons
 *              A, B, and C and then (2) plays these notes back to the user
 *              IN REVERSE.
 *              Note: The starting code originally plays them back
 *              in the same order (exactly as sequenceRepeater.cpp). It is your
 *              task to modify the code to play them back in the reverse order.
 *              Hint: you should only need to modify one line of the program.
 * To compile:
 * - Select target all
 * To load program onto robot (once usb programmer plugged in and robot on):
 * - Select target flash then run or build & run
 ----------------------------------------------------------------------------*/
#include <pololu/3pi.h>   /* allow use of 3pi robot functions */
#include "battery.h"

#define SEQUENCE_LEN 5    /* define sequence length */

int main( void )
{
  /* perform battery check */
  bat_check();

  /* define array to save button sequence */
  unsigned char buttonSequence[SEQUENCE_LEN];
  unsigned char volume = 10;   /* volume for notes */

  while( 1 )
    {
    /* display instructions to user */
    clear();     /* clear the lcd */
    lcd_goto_xy(0, 0);
    print("PLAY ");
    print_long(SEQUENCE_LEN);
    lcd_goto_xy(0, 1);
    print("NOTES");
    /* save sequence as user presses/releases buttons */
    for( int i = 0; i < SEQUENCE_LEN; ++i )
      {
      unsigned char button = wait_for_button(ANY_BUTTON);
      buttonSequence[i] = button;
      clear();

      switch( button )
        {
        case BUTTON_A:
          print("A");
          play_note(A(4), 50, volume);
          break;
        case BUTTON_B:
          print("B");
          play_note(B(4), 50, volume);
          break;
        case BUTTON_C:
          print("C");
          play_note(C(4), 50, volume);
          break;
        } /* end switch */
      }   /* end for */

    /* wait for user to press/release button B for sequence to be repeated */
    clear();
    lcd_goto_xy(0, 0);
    print("PRESS B");
    wait_for_button(BUTTON_B);
    /* play back sequence */
    /* TODO: modify so sequence is played in reverse order */
      for( int i = (SEQUENCE_LEN); i >= 0; i-- )
      {
      unsigned char button = buttonSequence[i];
      clear();       /* clear lcd */
      lcd_goto_xy(0, 0);

      switch( button )
        {
        case BUTTON_A:
          print("A");
          play_note(A(4), 50, volume);
          break;
        case BUTTON_B:
          print("B");
          play_note(B(4), 50, volume);
          break;
        case BUTTON_C:
          print("C");
          play_note(C(4), 50, volume);
          break;
        }     /* end switch */

      /* 0.5 s delay */
      delay_ms(500);
      }   /* end for */

    } /* end infinite while */

}
