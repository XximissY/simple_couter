
#ifndef COUNTER_CPP
#define COUNTER_CPP

#include "counter.h"

COUNTER::COUNTER(int32_t _counter) {
  this->counter = _counter;
  this->defCounter = _counter;
}

void COUNTER::increment() {
  this->counter++;
}
void COUNTER::decrement() {
  this->counter--;
}
int32_t COUNTER::getCounter() {
  return counter;
}
void COUNTER::reset() {
  this->counter = this->defCounter;
}
#endif