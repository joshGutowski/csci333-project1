#ifndef __NODE_H__
#define __NODE_H__

class Node {
 private:
  int value;
  int n;
  Node* next;

 public:
  Node(int n);
  ~Node();
  int getValue();
  Node* getNext();
  void setNext(Node* n);
};


#endif

