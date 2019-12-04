/*-----------------------------------------------------------------------------
 * Programmer: Mona K. Garvin
 * Name: batteryTest.c
 * Description: A 3pi robot program to display the current battery voltage.
 *              It is recommended that the batteries be replaced once
 *              the voltage is below 4500 mV.
 * To compile (using provided makefile) on linux:
 * > make
 * To load program onto robot (once usb programmer plugged in and robot on):
 * > make program
 ----------------------------------------------------------------------------*/
#include <pololu/3pi.h>   /* allow use of 3pi robot functions */
#include <avr/pgmspace.h> /* allow use of program space */

#include "battery.h"

int main( void )
{
  bat_check();
  return 0;
}
