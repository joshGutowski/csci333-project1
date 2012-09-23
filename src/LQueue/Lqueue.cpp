#include "Lqueue.h"
#include <iostream>

LQueue::LQueue(int initialSize) {
  theQueue = new int [initialSize];
  cap = initialSize;
  front = 0;
  back = 0;
  size = 0;
}

LQueue::~LQueue() {
  delete[] theQueue;
}

void LQueue::enqueue(int n) {
  theQueue[back] = n;
  back = (back+1)%cap;
  size++;
}

int LQueue::dequeue() {
  int result = theQueue[front];
  front = (front+1)%cap;
  size--;
  return result;
}

int LQueue::sizeOf() {
  return size;
}

bool LQueue::isEmpty() {
  if(size <= 0) {
    return true;
  }
  else {
    return false;
  }
}
