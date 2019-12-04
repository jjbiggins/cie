/*------------------------------------------------------------------------------
 * Programmer: Your name here
 * Name:
 * Description:
 -------------------------------------------------------------------------------*/
#ifndef MOVIE_H
#define MOVIE_H

#include <string>

using namespace std;

class Movie {
public:

  const string& getName() const
  {
    return m_Name;
  }

  void setName(const string& name)
  {
    m_Name = name;
  }

  Movie* getNextPtr() const
  {
    return m_nextPtr;
  }

  void setNextPtr(Movie* nextPtr)
  {
    m_nextPtr = nextPtr;
  }

private:
  string m_Name;
  Movie* m_nextPtr;
};

typedef Movie* MoviePtrType;


#endif // MOVIE_H
