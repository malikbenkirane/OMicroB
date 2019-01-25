#include "MicroBit.h"

MicroBit uBit;

void onButton(MicroBitEvent e) {
  if (e.source == MICROBIT_ID_BUTTON_A) uBit.display.print("a");
  if (e.source == MICROBIT_ID_BUTTON_B) uBit.display.print("b");
  if (e.source == MICROBIT_ID_BUTTON_AB) uBit.display.print("c");
}

int main() {
  // Initialise the micro:bit runtime.
  uBit.init();

  // Insert your code here!
  uBit.display.scroll("fun");

  // uBit.messageBus.listen(MICROBIT_ID_BUTTON_A, MICROBIT_BUTTON_EVT_CLICK, onButton);
  // uBit.messageBus.listen(MICROBIT_ID_BUTTON_B, MICROBIT_BUTTON_EVT_CLICK, onButton);
  // uBit.messageBus.listen(MICROBIT_ID_BUTTON_AB, MICROBIT_BUTTON_EVT_CLICK, onButton);

  while(true) {
    if(uBit.buttonA.isPressed() && uBit.buttonB.isPressed()) {
      uBit.display.print("c");
    } else if(uBit.buttonA.isPressed()) {
      uBit.display.print("a");
    } else if(uBit.buttonB.isPressed()) {
      uBit.display.print("b");
    } else uBit.display.print("");
  }

  // If main exits, there may still be other fibers running or registered event handlers etc.
  // Simply release this fiber, which will mean we enter the scheduler. Worse case, we then
  // sit in the idle task forever, in a power efficient sleep.
  release_fiber();
}
