#include "Node.h"
#include <iostream>

Node::Node() {
  int value = 0;
  Node* next; 
}

Node::~Node() {

}

int Node::getValue() {
  return value;
}

Node * Node::getNext() {
  return next;
}

void Node::setNext(Node& n) {
 next = n;
}
