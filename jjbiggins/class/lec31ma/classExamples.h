#ifndef CLASSEXAMPLES_H
#define CLASSEXAMPLES_H

//---------------
// AnotherClass
//---------------
class AnotherClass
{
public:
  AnotherClass(int id = 0); // constructor
  ~AnotherClass();          // destructor
private:
  int m_ID;
};

//---------------
// AnotherClass2
//---------------
class AnotherClass2
{
public:
  AnotherClass2(int id = 0);                         // constructor
  AnotherClass2(const AnotherClass2 &objToCopyFrom); // copy constructor
  ~AnotherClass2();                                  // destructor
private:
  int m_ID;
};

//----------
// Point2D
//----------
class Point2D
{
public:
  Point2D(int x = 0, int y = 0): m_x{x}, m_y{y}
  {
  }
  void setX(int x) { m_x = x; }
  void setY(int y) { m_y = y; }
  int getX() const { return m_x; }
  int getY() const { return m_y; }

private:
  int m_x;
  int m_y;
};

//--------------
// ClassWithBug (logical bug, not syntax bug)
//--------------
class ClassWithBug
{
public:
  ClassWithBug(int data = 0) : m_data{data} {}                   // constructor
  ClassWithBug(const ClassWithBug &objToCopyFrom) : m_data{5} {} // copy constructor WITH LOGICAL BUG
  void setData(int data) { m_data = data; }
  int getData() const { return m_data; }

private:
  int m_data;
};

#endif // CLASSEXAMPLES_H
