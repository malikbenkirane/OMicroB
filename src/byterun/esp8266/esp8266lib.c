#include "Arduino.h"

uint8_t get_pin_addr(uint8_t pin) {
  if (pin == 0) return D0;
  if (pin == 1) return D1;
  if (pin == 2) return D2;
  if (pin == 3) return D3;
  if (pin == 4) return D4;
  if (pin == 5) return D5;
  if (pin == 6) return D6;
  if (pin == 7) return D7;
  if (pin == 8) return D8;
  if (pin == 9) return A0;
}

void esp8266_pin_mode(uint8_t pin, uint8_t mode) {
  pinMode(get_pin_addr(pin), mode);
}

void esp8266_digital_write(uint8_t pin, uint8_t level) {
  digitalWrite(get_pin_addr(pin), level);
}

uint8_t esp8266_digital_read(uint8_t pin) {
  return digitalRead(get_pin_addr(pin));
}

void esp8266_delay(int ms) {
  delay(ms);
}
