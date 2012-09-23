#ifndef __LQUEUE_H__
#define __LQUEUE_H__

class LQueue {
 private:
  int* theQueue;
  int cap;
  int front;
  int back;
  int size;

 public:
  LQueue(int initialSize = 10);
  ~LQueue();
  void enqueue(int n);
  int dequeue();
  int sizeOf();
  bool isEmpty();
};
#endif
