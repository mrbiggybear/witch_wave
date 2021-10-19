#include <Arduino.h>
#include "wave.h"

void setup() {
  servo_setup();
}

void loop() {
  update_servo();
  delay(800);
}
