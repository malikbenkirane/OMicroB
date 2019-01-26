#include "MicroBit.h"

MicroBit uBit;

void microbit_init() {
  uBit.init();
}

void microbit_print_string(char *str) {
  uBit.display.scroll(str);
}

void microbit_print_int(int i) {
  uBit.display.scroll(i);
}
