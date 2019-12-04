//
// Created by jjbiggins on 4/19/17.
//

#ifndef HOMEWORK5_STORE_H
#define HOMEWORK5_STORE_H

#include <map>
#include <string>
#include "HealthStatus.h"
#include "StoreInventoryItem.h"

class Store
{
public:
  Store(const std::string name, HealthStatus qualityMultiplier):
          m_name{name}, m_QualityMultiplier{qualityMultiplier}{}

  void addInventoryItem(const std::string &storeItemName, const double &storeItemBarcode)
  {
    m_Inventory[storeItemBarcode] = new StoreInventoryItem(storeItemName, storeItemBarcode);
  }

  HealthStatus getQualityMultiplier()const
  {
    return m_QualityMultiplier;
  }

  const StoreInventoryItemMapType &getInventory() const
  {
    return m_Inventory;
  }

private:
  const std::string m_name;
  HealthStatus m_QualityMultiplier;
  StoreInventoryItemMapType  m_Inventory;
};
typedef std::map<std::string,Store *> StoreMapType;

#endif //HOMEWORK5_STORE_H
