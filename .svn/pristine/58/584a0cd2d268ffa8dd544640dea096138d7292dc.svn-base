//
// Created by jjbiggins on 4/19/17.
//

#ifndef HOMEWORK5_STOREINVENTORYITEM_H
#define HOMEWORK5_STOREINVENTORYITEM_H

#include "Item.h"
#include <string>
#include <map>

class StoreInventoryItem
{
public:
  StoreInventoryItem(const std::string name, unsigned int barcode):
          m_name{name}, m_barcode{barcode}{};

  const std::string getName() const {
    return m_name;
  }

private:
  const std::string m_name;
  unsigned int m_barcode;
};
typedef std::map<int, StoreInventoryItem * > StoreInventoryItemMapType;

#endif //HOMEWORK5_STOREINVENTORYITEM_H
