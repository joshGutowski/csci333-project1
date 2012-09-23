/*#include "Stack.h"
#include <iostream>

using std::cout;
using std::endl;

int main() {
  Stack* stack = new Stack(3);
  stack->push(5);
  stack->push(10);
  stack->push(15);

  cout << stack->pop() << endl;
  cout << stack->pop() << endl;
  cout << stack->pop() << endl;

  delete stack;

  return 0;
  }*/

#include "/AQueue/Aqueue.h"
#include <iostream>

using std::cout;
using std::endl;

int main() {
  AQueue* AQueue = new AQueue(3);
  AQueue->enqueue(5);
  AQueue->enqueue(10);
  Aqueue->enqueue(15);

  cout << AQueue->dequeue() << endl;
  cout << AQueue->dequeue() << endl;
  cout << AQueue->dequeue() << endl;

  delete Aqueue;

  return 0;
}
