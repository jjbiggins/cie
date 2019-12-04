//----------------------------
// Inheritance syntax example
//----------------------------
class MyBaseClass
{
public:
  // data modification:
  void setProtectedInt(int userInt) { m_protectedInt = userInt; }
  void setPrivateInt(int userInt) { m_privateInt = userInt; }

  // data accessors:
  int getProtectedInt() const { return m_protectedInt; }
  int getPrivateInt() const { return m_privateInt; }

  // other member functions:
  void print() const;

protected: // the base class (, friends,) and derived classes may access
  int m_protectedInt;

private: // only the base class (and friends) may access
  int m_privateInt;
};

class MyDerivedClass : public MyBaseClass
{
public:
  // data modification
  void setAdditionalPrivateInt(int userInt) { m_additionalPrivateInt = userInt; }

  // override base class's print function
  void print() const;

private:
  int m_additionalPrivateInt;
};

void inheritanceExample();

//------------------
// Clicker question
//------------------
class CQBase
{
public:
  void setBaseVal(int val) { m_base = val; }
  int getBaseVal() const { return m_base; }
  void print() const;

protected:
  int m_base;
};

class CQDerived : public CQBase
{
public:
  void setDerivedVal(int val) { m_derived = val; }
  int getDerivedVal() const { return m_derived; }
  void print() const ;

private:
  int m_derived;
};

void clickerQuestion();

//--------------------------
// Book inheritance example
//--------------------------
void bookInheritanceExample();
