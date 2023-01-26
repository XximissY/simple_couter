#ifndef COUNTER_H
#define COUNTER_H
#include "stdint.h"
#include <sys/types.h>
#include "Arduino.h"

class COUNTER {
private:
  int32_t counter = 0;
  int32_t defCounter = 0;
public:
  COUNTER(int32_t _counter = 0);
  int32_t getCounter();
  void increment();
  void decrement();
  void reset();
};

#endif