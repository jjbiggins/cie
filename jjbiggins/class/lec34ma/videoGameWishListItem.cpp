#include <iostream>
#include <string>
#include <iomanip>
#include "videoGameWishListItem.h"

void VideoGameWishListItem::print() const
{
  WishListItem::print();
  std::cout << "(for " << m_gamePlatform << ")";
}
