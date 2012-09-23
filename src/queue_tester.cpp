#include "AQueue/Aqueue.h"
#include <iostream>

using std::cout;
using std::endl;

int main() {
  AQueue* aqueue = new AQueue();
  aqueue->enqueue(5);
  aqueue->enqueue(10);
  aqueue->enqueue(15);
  cout << aqueue->dequeue() << endl;
  cout << aqueue->dequeue() << endl;
  cout << aqueue->dequeue() << endl;
  delete aqueue;

  LQueue* lqueue = new LQueue();
  lqueue->enqueue(5);
  lqueue->enqueue(10);
  lqueue->enqueue(15);
  cout << lqueue->dequeue() << endl;
  cout << lqueue->dequeue() << endl;
  cout << lqueue->dequeue() << endl;
  delete lqueue;

  LLQueue* llqueue = new LLQueue();
  llqueue->enqueue(5);
  llqueue->enqueue(10);
  llqueue->enqueue(15);
  cout << llqueue->dequeue() << endl;
  cout << llqueue->dequeue() << endl;
  cout << llqueue->dequeue() << endl;
  delete llqueue;

  return 0;
}
