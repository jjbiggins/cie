//
// Created by Johnson, Hans J on 2/10/17.
//

#ifndef HW2_ROBOTSTRING_H
#define HW2_ROBOTSTRING_H

/**
 * NOTE:  In the 3rd part of CIE course, we will cover
 *        ways to make this class MUCH MUCH more user
 *        friendly, more robust, and more efficient.
 *        This implementation is made built upon
 *        the skills that we have developed so far
 *        in the course.
 */

/**
 * @brief The 3pi gcc-avr cross compiler does not
 *        support the standard template library (STL)
 *        class objects like : std::string, std::array
 *        std::vector.  This RobotString class
 *        provides minimal implementation for
 *        managing fixed length character arrays
 *        for holding c-style string arrays.
 */
class RobotString {
public:
  static const unsigned int MAX_ROBOT_STRING_LENGTH=10;

  unsigned char at(const unsigned int loc) const
  {
    return m_StringArray[loc];
  }

  /**
   * @brief  Return a newly created string
   * @return A newly created robot string;
   */
  RobotString GetStringArray() const
  {
    RobotString temp;
    temp.SetStringArray(m_StringArray);
    return temp;
  }

  /**
   * @brief Set the storage with a C-style array
   * @param inputCharArray
   */
  void SetStringArray(const char inputCharArray[])
  {
    unsigned int i=0;
    while ( (i<MAX_ROBOT_STRING_LENGTH-1 && inputCharArray[i]!='\0'))
    {
      m_StringArray[i] = inputCharArray[i];
      ++i;
    }
    m_StringArray[i] = '\0';
  }

  /**
   * @brief Set the storage with another RobotString class type
   * @param inputString
   */
  void SetStringArray(const RobotString & inputString)
  {
      this->SetStringArray(inputString.m_StringArray);
  }

private:
  char m_StringArray[MAX_ROBOT_STRING_LENGTH]={'\0'};
};

#endif //HW2_ROBOTSTRING_H
