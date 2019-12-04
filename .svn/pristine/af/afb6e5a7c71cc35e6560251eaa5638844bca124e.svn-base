#include <pololu/3pi.h>   /* allow use of 3pi robot functions */
#include "battery.h"

void bat_check( void )
{
  int firstLineType = 0;   /* what should be displayed on line 1 */
                           /*  0-19: Bat Chk */
                           /* 20-39: xxxxmV  */
                           /* 40-59: Okay/Replace */
  int bat = 0;             /* last read battery voltage */

  /* wait for user to press button B */
  while( !button_is_pressed(BUTTON_B) )
    {
    /* clear the lcd */
    clear();

    /* FIRST LINE */
    /* set lcd position to beginning of first line */
    lcd_goto_xy(0, 0);

    /* for first line, alternate between displaying:
     Bat Check
     xxxxmV
     Okay/Replace */

    if( firstLineType < 20 )
      {
      print("Bat Chk");
      }
    else if( firstLineType < 40 )
      {
      bat = read_battery_millivolts();
      print_long(bat);
      print("mV");
      }
    else if( firstLineType < 60 )
      {
      if( bat >= 4500 )
        {
        print("Okay");         /* okay */
        }
      else
        {
        print("Replace");         /* replace */
        }
      }
    firstLineType++;
    firstLineType = firstLineType % 60;

    /* SECOND LINE */
    /* set lcd position to beginning of second line */
    lcd_goto_xy(0, 1);
    print("Press B");

    /* small delay */
    delay_ms(50);
    }

  /* once pressed, wait a little bit */
  delay_ms(500);
}
