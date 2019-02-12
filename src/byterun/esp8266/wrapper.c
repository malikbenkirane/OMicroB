#include "Arduino.h"

extern int main();

void setup() {
  Serial.begin(9600);
  main();
}

void loop() {
  delay(10);
}
