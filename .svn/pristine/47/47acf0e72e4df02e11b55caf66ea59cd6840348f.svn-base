//
// Created by jjbiggins on 4/19/17.
//

#include "Character.h"

Character::Character(const std::string name, std::string home, HealthStatus openingBalance, PurchaseRecordVectorType purchaseList):
        m_name{name}, m_home{home}, m_HealthStatus{openingBalance}, m_purchase_list{purchaseList}{};

HealthStatus Character::getHealthStatus() const
{
  return m_HealthStatus;
}

PurchaseRecordVectorType Character::getPurchase_list() const
{
  return m_purchase_list;
}

const std::string & Character::getName() const
{
  return m_name;
}

void Character::setHealthStatus(HealthStatus newHealthStatus)
{
  m_HealthStatus = newHealthStatus;
}