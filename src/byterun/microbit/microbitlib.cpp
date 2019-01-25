#ifdef __OCAML__
#else
#include "MicroBit.h"

MicroBit uBit;

void microbit_test() {
  uBit.display.scroll("OCaml!");
}
#endif
