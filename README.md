# simple_couter

## COUNTER Class

The COUNTER class is an Arduino library that provides a simple counter functionality. It allows you to increment, decrement, reset and get the current value of the counter.

### Class Methods

#### `COUNTER(int32_t _counter = 0)`

This is the class constructor, which is used to create an object of the class. The constructor takes an optional parameter `_counter`, which is used to set the initial value of the counter. If no value is provided, the counter is initialized to 0.

#### `void increment(int32_t step = 1)`

This function increments the value of the counter by 1.

#### `void decrement(int32_t step = 1)`

This function decrements the value of the counter by 1.

#### `int32_t getCounter()`

This function returns the current value of the counter.

#### `void reset()`

This function resets the value of the counter to its default value.

### Examples

Here is an example of how to use the class:

```
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
```

In this example, we first create an object of the class `COUNTER` with an initial value of 0. Then in the loop function, we increment the counter and print its value to the serial monitor.


Also you can use other function like decrement and reset:

```
COUNTER myCounter(0);

void setup() {
  Serial.begin(9600);
}

void loop() {
  myCounter.increment(100); // increment the counter by 100
  Serial.println(myCounter.getCounter());
  myCounter.decrement(10); // decrement the counter by 10
  Serial.println(myCounter.getCounter());
  myCounter.reset();
  Serial.println(myCounter.getCounter());
}
```
