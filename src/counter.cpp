
#ifndef COUNTER_CPP
#define COUNTER_CPP

#include "counter.h"

COUNTER::COUNTER(int32_t _counter) {
  this->counter = _counter;
  this->defCounter = _counter;
}

void COUNTER::increment(int32_t step) {
  this->counter = this->counter + step;
}
void COUNTER::decrement(int32_t step) {
  this->counter= this->counter - step;
}
int32_t COUNTER::getCounter() {
  return counter;
}
void COUNTER::reset() {
  this->counter = this->defCounter;
}
#endif