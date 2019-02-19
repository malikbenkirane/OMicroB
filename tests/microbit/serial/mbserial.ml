open MicroBit

let _ =
  while(true) do
    Serial.write ((string_of_int (millis ()))^"\n");
    print_string (Serial.read ()); (* Weirdly this takes ~1s *)
    delay 2000;
  done
