//
// Created by johnsonhj on 9/22/16.
//
#include "robot_utils.h"
#include "pin.h"

#include <pololu/3pi.h>   /* allow use of 3pi robot functions */

void print_two_lines(const char * const line1, const char * const line2) {
    /* clear lcd */
    clear();

    /* print first line */
    lcd_goto_xy(0, 0);
    print(line1);

    /* print second line */
    lcd_goto_xy(0, 1);
    print(line2);
}

void refreshDisplay(const int counter, const int pos, char *const digits) {
    /* clear the lcd */
    clear();
    /* FIRST LINE */
    /* set lcd position to beginning of first line */
    lcd_goto_xy(0, 0);
    print_long(counter);
    lcd_goto_xy(pos + 2, 0);
    print("_");

    lcd_goto_xy(0, 1);
    int i;
    for (i = 0; i < PIN_LENGTH; i++) {
        lcd_goto_xy(2 + i, 1);
        print_long(digits[i]);
    }
}

//power function using ints, returns x^y
int ipow(int x, int y) {
    int i=0;
    int result = x;
    if (y==0) {
        return 1;
    } else if (y<0) {
        //This is not defined for ints...
        result = -1;
    } else {
        result = x;
        for (i=2; i<=y; i++) {
            result*=x;
        }
    }
    return result;
}