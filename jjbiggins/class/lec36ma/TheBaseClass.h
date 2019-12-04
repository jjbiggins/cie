//
// Created by Hans Johnson on 4/19/17.
//

#ifndef CIE2017_THEBASECLASS_H
#define CIE2017_THEBASECLASS_H

class TheBaseClass
{
public:
  // constructor
  TheBaseClass(const float fvalue, const int val = 5);

  // destructor
  ~TheBaseClass();

  // set value
  void setVal(int val);

  // get value
  int getVal() const;

  float GetFloat_val() const;

  // print() function for TheBaseClass
  void print() const;

private:
  const float m_float_val;
  int m_val;
};

#endif //CIE2017_THEBASECLASS_H
