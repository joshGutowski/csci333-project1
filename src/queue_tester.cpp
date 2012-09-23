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

  return 0;
}
