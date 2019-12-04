//
// Created by jjbiggins on 4/19/17.
//

#ifndef HOMEWORK5_HEALTHSTATUS_H
#define HOMEWORK5_HEALTHSTATUS_H

#include <string>


class HealthStatus {
public:
  HealthStatus(double food = 0.0, double clothes = 0.0, double entertainment = 0.0):
          m_food{food}, m_clothes{clothes}, m_entertainment{entertainment}{};

  double getFoodMultiplier() const;
  double getClothesMultiplier() const;
  double getEntertainmentMultiplier() const;
  std::string toString();

private:
  double m_food;
  double m_clothes;
  double m_entertainment;
};


#endif //HOMEWORK5_HEALTHSTATUS_H
