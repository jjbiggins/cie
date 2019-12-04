// Time class containing a constructor with default arguments.
// Member functions defined in Time.cpp.
#include <string>

// prevent multiple inclusions of header
#ifndef TIME_H
#define TIME_H

// Time class definition
class Time {
public:
   // set functions
   void setTime(int, int, int); // set hour, minute, second

  void setHour(unsigned int const newHour);
  void setMinute(unsigned int const newMinute);
  void setSecond(unsigned int const newSecond);

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
