#include "Aqueue.h"
#include <iostream>

AQueue::AQueue(int initialSize) {
  theQueue = new int [initialSize];
  cap = initialSize;
  front = 0;
  back = 0;
  size = 0;
}

AQueue::~AQueue() {
  delete[] theQueue;
}

void AQueue::enqueue(int n) {
  theQueue[back] = n;
  back = (back+1)%cap;
  size++;
}

int AQueue::dequeue() {
  int result = theQueue[front];
  front = (front+1)%cap;
  size--;
  return result;
}

int AQueue::sizeOf() {
  return size;
}

bool AQueue::isEmpty() {
  if(size <= 0) {
    return true;
  }
  else {
    return false;
  }
}
