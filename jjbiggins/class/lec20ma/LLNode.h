//
// Created by Hans Johnson on 10/6/16.
//

#ifndef LEC20MA_LLNODE_H
#define LEC20MA_LLNODE_H


/**
 * class AmazingRaceLocation is a data type used to represent a node in a linked list of "amazing race" locations
 */
class AmazingRaceLocation
{
public:
  float getRewardAmount() { return m_RewardAmount; }
  void setRewardAmount(float ra) { m_RewardAmount = ra; }
  const char *getLocationName() { return m_LocationName; }
  void setLocationName(const char *ln) { m_LocationName = ln; }
  AmazingRaceLocation *getNextLocation() { return m_NextLocation; }
  void setNextLocation(AmazingRaceLocation *arl) { m_NextLocation = arl; }
private:
  const char *m_LocationName;          /* name of the location as a string */
  float m_RewardAmount;                /* reward amount at the location (in dollars) */
  AmazingRaceLocation *m_NextLocation; /* pointer to the next location in list */
};

typedef AmazingRaceLocation *AmazingRaceLocationPtr;

/**
 * This prints out all of the location names and reward amounts  in a linked list of AmazingRaceLocations
 * @param startingLocationPtr pointer to first node in linked list
 */
void printAllLocationNamesAndRewards(AmazingRaceLocationPtr startingLocationPtr);

/**
 *
 * This function traverses through the linked list to compute
 *              the total sum of all reward amounts of the nodes in the list.
 * @param startingLocationPtr pointer to first node in linked list
 * @return total sum of the reward amounts of the nodes in the linked list
 */
float computeTotalReward(AmazingRaceLocationPtr startingLocationPtr);

/**
 *
 * This function traverses through the linked list to find the
 *              first node with a reward amount less than the given key.
 * @param startingLocationPtr pointer to first node in linked list
 * @param key value (we want to find the first node with a
 *                       reward amount less than this key value)
 * @return pointer to the first AmazingRaceLocation
 *         node within the linked list with a
 *         a reward amount less than the given key.
 *         If no such node is found, NULL is returned.
 */
AmazingRaceLocationPtr getFirstAmazingRaceLocationPtrWithRewardLessThanKey(
  AmazingRaceLocationPtr startingLocationPtr, const float key);

#endif //LEC20MA_LLNODE_H
