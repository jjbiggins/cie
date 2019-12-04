//
// Created by jjbiggins on 4/19/17.
//

#ifndef HOMEWORK5_ITEM_H
#define HOMEWORK5_ITEM_H

#include "HealthStatus.h"
#include <map>
#include <string>

class Item : public HealthStatus {
public:
  Item(const std::string name, std::string description, double price, HealthStatus healthStatus):
          m_name{name}, m_description{description}, m_price{price}, m_HealthStatus{healthStatus}{};

  HealthStatus getHealthStatus() const
  {
    return m_HealthStatus;
  }

  double getPrice() const
  {
    return m_price;
  }

private:
  const std::string m_name;
  std::string m_description;
  double m_price;
  HealthStatus m_HealthStatus;
};
typedef std::map<std::string,Item *> ItemMapType;


#endif //HOMEWORK5_ITEM_H
