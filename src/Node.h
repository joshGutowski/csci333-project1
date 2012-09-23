#ifndef __NODE_H__
#define __NODE_H__

class Stack {
 private:
  int value;
  Node* next;

 public:
  Node();
  ~Node();
  int getValue();
  Node* getNext();
  void setNext(Node& n);
};


#endif

