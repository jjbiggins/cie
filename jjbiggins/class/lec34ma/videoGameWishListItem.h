#ifndef VIDEO_GAME_WISH_LIST_ITEM_H__
#define VIDEO_GAME_WISH_LIST_ITEM_H__
#include <string>
#include "wishListItem.h"

// a VideoGameWishListItem represents video game on a wish list
class VideoGameWishListItem : public WishListItem
{
public:
  VideoGameWishListItem() : m_gamePlatform("unknown") {}
  void setPlatform(std::string gamePlatform) { m_gamePlatform = gamePlatform; }
  std::string getPlatform() const { return m_gamePlatform; }
  void print() const;

private:
  std::string m_gamePlatform; // game platform (e.g., PS4) for game
};

#endif //VIDEO_GAME_WISH_LIST_ITEM_H__
