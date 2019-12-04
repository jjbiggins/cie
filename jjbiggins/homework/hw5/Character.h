//
// Created by jjbiggins on 4/19/17.
//

#ifndef HOMEWORK5_CHARACTER_H
#define HOMEWORK5_CHARACTER_H

#include <string>
#include <map>
#include "HealthStatus.h"
#include "PurchaseRecord.h"

class Character
{
public:
  Character(const std::string name, std::string home, HealthStatus openingBalance, PurchaseRecordVectorType purchaseList);
  const std::string &getName() const;
  PurchaseRecordVectorType getPurchase_list() const;
  void setHealthStatus(HealthStatus newHealthStatus);
  HealthStatus getHealthStatus() const;
private:
  const std::string m_name;
  std::string m_home;
  HealthStatus m_HealthStatus;
  PurchaseRecordVectorType m_purchase_list;
};
typedef std::map<std::string, Character *> CharacterMapType;

#endif //HOMEWORK5_CHARACTER_H
