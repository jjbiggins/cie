//
// Created by jjbiggins on 4/19/17.
//

#ifndef HOMEWORK5_PURCHASERECORD_H
#define HOMEWORK5_PURCHASERECORD_H

#include <string>
#include <vector>

class PurchaseRecord {
public:
  PurchaseRecord(const std::string store, const int barcode):
          m_store{store}, m_barcode{barcode}{};

  const std::string &getStore() const {
    return m_store;
  }

  const int &getBarcode() const {
    return m_barcode;
  }

private:
  const std::string m_store;
  const int m_barcode;
};
typedef std::vector<PurchaseRecord *> PurchaseRecordVectorType;


#endif //HOMEWORK5_PURCHASERECORD_H
