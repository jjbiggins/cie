// Time class containing a constructor with default arguments.
// Member functions defined in Time.cpp.
#include <string>

// prevent multiple inclusions of header
#ifndef TIME_H
#define TIME_H

// Time class definition
class Time {
public:
  // TODO: Add four constructors to allow creating objects
  //       that have their initial time set:
  //       1) A default constructor (no parameters) (12:00:00 AM)
  //       2) A constructor with one parameter for the hour (minute and second are set to 0)
  //       3) A constructor with two parameters for hour and minute (second is set to 0)
  //       4) A constructor with three parameter for hour, minute, and second

   // set functions
   void setTime(int, int, int); // set hour, minute, second
   void setHour(int);
   void setMinute(int);
   void setSecond(int);
   // get functions
   unsigned int getHour() const;
   unsigned int getMinute() const;
   unsigned int getSecond() const;

   std::string toUniversalString() const; // 24-hour time format string
   std::string toStandardString() const; // 12-hour time format string
private:
   unsigned int hour{0}; // 0 - 23 (24-hour clock format)
   unsigned int minute{0}; // 0 - 59
   unsigned int second{0}; // 0 - 59
};

#endif
