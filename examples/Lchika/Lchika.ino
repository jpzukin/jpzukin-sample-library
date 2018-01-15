#include "Sample.h"

Sample led = Sample();

void setup() {
  led.off();
}

void loop() {
  led.on();
  delay(500);
  led.off();
  delay(500);
}

