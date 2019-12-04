// Member-function definitions for class Time.
#include <iomanip>
#include <stdexcept>
#include <sstream>
#include <string>
#include "Time.h" // include definition of class Time from Time.h

using namespace std;

// set new Time value using universal time
void Time::setTime(int h, int m, int s) {
  setHour(h);   // set private field hour
  setMinute(m); // set private field minute
  setSecond(s); // set private field second
}

void Time::setHour(unsigned int const newHour)
{
  hour = newHour;
}

void Time::setMinute(unsigned int const newMinute)
{
  minute = newMinute;
}

void Time::setSecond(unsigned int const newSecond)
{
  second = newSecond;
}

unsigned int Time::getHour() const
{
  return hour;
}

unsigned int Time::getMinute() const
{
  return minute;
}

unsigned int Time::getSecond() const
{
  return second;
}

// return Time as a string in universal-time format (HH:MM:SS)
string Time::toUniversalString() const {
  ostringstream output;
  output << setfill('0') << setw(2) << getHour() << ":"
         << setw(2) << getMinute() << ":" << setw(2) << getSecond();
  return output.str();
}

// return Time as string in standard-time format (HH:MM:SS AM or PM)
string Time::toStandardString() const {
  ostringstream output;
  output << ((getHour() == 0 || getHour() == 12) ? 12 : getHour() % 12)
         << ":" << setfill('0') << setw(2) << getMinute() << ":" << setw(2)
         << getSecond() << (hour < 12 ? " AM" : " PM");
  return output.str();
}
