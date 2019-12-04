#ifndef WISH_LIST_ITEM_H__
#define WISH_LIST_ITEM_H__

#include <string>

// a WishListItem object represents an item on a wish list
class WishListItem
{
public:
  WishListItem() : m_name("unknown"), m_cost(0.0) {}
  void setName(std::string name) { m_name = name; }
  void setCost(double cost) { m_cost = cost; }
  std::string getName() const { return m_name; }
  double getCost() const { return m_cost; }
  void print() const;

private:
  std::string m_name; // name of item
  double m_cost;      // cost in dollars
};
#endif //WISH_LIST_ITEM_H__