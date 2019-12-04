#ifndef treeNODE_H__
#define treeNODE_H__

class TreeNode
{
public:

  int getData() { return m_data; }
  void setData(int newdata) { m_data = newdata; }
  TreeNode *getLeftPtr() { return m_leftPtr; }
  void setLeftPtr(TreeNode *newPtr) { m_leftPtr = newPtr; }
  TreeNode *getRightPtr() { return m_rightPtr; }
  void setRightPtr(TreeNode *newPtr) { m_rightPtr = newPtr; }

private:
  TreeNode *m_leftPtr; /*pointer to the left child*/
  int m_data;      /* node value */
  TreeNode *m_rightPtr; /* pointer to the right child */
};
typedef TreeNode * TreeNodePtr;

#endif //treeNODE_H__
