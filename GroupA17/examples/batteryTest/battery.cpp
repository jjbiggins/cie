#include <pololu/3pi.h>   /* allow use of 3pi robot functions */
#include <avr/pgmspace.h> /* allow use of program space */
#include "battery.h"

void bat_check( void )
{
  /* main loop that runs forever */
  while( 1 )
    {
    /* clear the lcd */
    clear();

    /* print name of program */
    lcd_goto_xy(0, 0);    /* set lcd position to beginning of first line */
    print("Battery");
    lcd_goto_xy(0, 1);    /* set lcd position to beginning of second line */
    print("Check");

    /* delay 2 s */
    delay_ms(2000);

    /* clear the lcd */
    clear();

    /* obtain battery voltage and display on lcd */
    int bat = read_battery_millivolts();
    lcd_goto_xy(0, 0);    /* set lcd position to beginning of first line */
    print_long(bat);
    print("mV");

    /* print whether voltage seems okay */
    lcd_goto_xy(0, 1);    /* set lcd position to beginning of second line */
    if( bat >= 4500 )
      {
      print("Okay");       /* okay */
      }
    else
      {
      print("Replace");       /* replace */
      }

    /* delay 2 s */
    delay_ms(2000);
    }

}
