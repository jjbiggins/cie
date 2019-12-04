#ifndef LEC35MA_PHONEPLANWITHDATA_H
#define LEC35MA_PHONEPLANWITHDATA_H

// derived class: PhonePlanWithData
class PhonePlanWithData : public PhonePlan
{
public:
  // constructors
  PhonePlanWithData(int remainingMinutesInMonth = 500, float remainingDataInMonth = 2.0)
    : PhonePlan(remainingMinutesInMonth)
  {
    setRemainingDataInMonth(remainingDataInMonth);
  }

  // data accessors
  float getRemainingDataInMonth() const { return m_remainingDataInMonth; }

  // data modification
  void setRemainingDataInMonth(float remainingDataInMonth)
  {
    m_remainingDataInMonth = (remainingDataInMonth > 0.0) ? remainingDataInMonth : 0.0;
  }

  void useData(float amountToUse)
  {
    float dataRemaining = getRemainingDataInMonth();
    setRemainingDataInMonth(dataRemaining - amountToUse);
  }

  // print
  void printStatus() const;

private:
  float m_remainingDataInMonth; // represents GB of data remaining to use in a month
};


#endif //LEC35MA_PHONEPLANWITHDATA_H
