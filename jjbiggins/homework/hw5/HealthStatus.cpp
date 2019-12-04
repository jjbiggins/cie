//
// Created by jjbiggins on 4/19/17.
//

#include "HealthStatus.h"
double HealthStatus::getFoodMultiplier() const
{
  return m_food;
}

double HealthStatus::getClothesMultiplier() const
{
  return m_clothes;
}

double HealthStatus::getEntertainmentMultiplier() const
{
  return m_entertainment;
}

std::string HealthStatus::toString()
{
  std::string foodVal = std::to_string(getFoodMultiplier());
  std::string clothesVal = std::to_string((getClothesMultiplier()));
  std::string entertainmentVal = std::to_string(getEntertainmentMultiplier());

  std::string characterHealthMetric = "Food: " + foodVal + " Clothes: " + clothesVal + " Entertainment: " + entertainmentVal;

  return characterHealthMetric;
}