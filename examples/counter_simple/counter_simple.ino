#include <counter.h>

COUNTER myCounter(0);

void setup() {
  Serial.begin(9600);
}

void loop() {
  myCounter.increment();
  Serial.println(myCounter.getCounter());
  delay(1000);
}
