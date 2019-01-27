#include "MicroBit.h"

MicroBit uBit;

void microbit_init() {
  uBit.init();
}

void microbit_sleep(int ms) {
  uBit.sleep(ms);
}

void microbit_print_string(char *str) {
  uBit.display.scroll(str);
}

void microbit_print_int(int i) {
  uBit.display.scroll(i);
}

void microbit_write_pixel(int x, int y, int l) {
  uBit.display.image.setPixelValue(x, y, l);
}

void microbit_print_image(char *s) {
  MicroBitImage img(s);
  uBit.display.print(img);
}

int microbit_button_is_pressed(int b) {
  if(b == 0) return uBit.buttonA.isPressed();
  return uBit.buttonB.isPressed();
}
