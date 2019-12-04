#ifndef BOOK_WISH_LIST_ITEM_H__
#define BOOK_WISH_LIST_ITEM_H__
#include <string>
#include "wishListItem.h"

class BookWishListItem : public WishListItem
{
public:
  BookWishListItem(std::string format = "unknown"): WishListItem(), m_format{format}{}
  void setFormat(std::string format);
  std::string getFormat() const;
  void print() const;
private:
  std::string m_format;
};

#endif //BOOK_WISH_LIST_ITEM_H__


