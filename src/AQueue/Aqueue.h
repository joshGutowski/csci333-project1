#ifndef __AQUEUE_H__
#define __AQUEUE_H__

class AQueue {
 private:
  int* theQueue;
  int cap;
  int front;
  int back;
  int size;

 public:
  AQueue(int initialSize = 10);
  ~AQueue();
  void enqueue(int n);
  int dequeue();
  int sizeOf();
  bool isEmpty();
};
#endif
