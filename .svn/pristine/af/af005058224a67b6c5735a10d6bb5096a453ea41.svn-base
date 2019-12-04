#ifndef NODE_H__
#define NODE_H__

class Node
{
public:
  int getData() { return m_data; }
  void setData(int newdata) { m_data = newdata; }
  Node *getNextPtr() { return m_nextPtr; }
  void setNextPtr(Node *newPtr) { m_nextPtr = newPtr; }
private:
  int m_data;      /* payload */
  Node *m_nextPtr; /* pointer to the next node */
};

/**
 * @brief NodeAddress is an alias to a "Node *" aka "Pointer to Node" type
 */
typedef Node * NodeAddress;

#endif //NODE_H__
