open Esp8266

let _ =
  pin_mode D1 OUTPUT;
  (* while true do
   *   digital_write D1 HIGH;
   *   delay 1000;
   *   digital_write D1 LOW;
   *   delay 1000;
   * done *)

  while true do
    let _ = serial_read () in
    serial_write (string_of_int (millis ()));
    delay 1000
  done