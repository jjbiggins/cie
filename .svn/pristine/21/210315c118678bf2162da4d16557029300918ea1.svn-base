//
// Created by Hans Johnson on 11/15/16.
//

#ifndef LEC35MA_PHONEPLAN_H
#define LEC35MA_PHONEPLAN_H


// base class: PhonePlan
class PhonePlan
{
public:
  // constructors
  PhonePlan(int remainingMinutesInMonth = 500)
  { setRemainingMinutesInMonth(remainingMinutesInMonth); }

  // data accessors
  int getRemainingMinutesInMonth() const
  { return m_remainingMinutesInMonth; }

  // data modification
  void setRemainingMinutesInMonth(int minutes)
  { m_remainingMinutesInMonth = (minutes > 0) ? minutes : 0; }

  void useMinutes(int minutes)
  {
    int minutesRemaining = getRemainingMinutesInMonth();
    setRemainingMinutesInMonth(minutesRemaining - minutes);
  }

  // printStatus (implementation below)
  void printStatus() const;

private:
  int m_remainingMinutesInMonth; // represents number of minutes remaining to use in a month
};


#endif //LEC35MA_PHONEPLAN_H
