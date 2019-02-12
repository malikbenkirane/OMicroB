(*******************************************************************************)
(*                                                                             *)
(*                       Esp8266 manipulation library                          *)
(*                                                                             *)
(*                    Basile Pesin, Sorbonne Université                        *)
(*******************************************************************************)

type pin = D0 | D1 | D2 | D3 | D4 | D5 | D6 | D7 | D8 | A0

type mode = INPUT | OUTPUT | INPUT_PULLUP

type level = LOW | HIGH

external pin_mode: pin -> mode -> unit = "caml_esp8266_pin_mode" [@@noalloc]
external digital_write: pin -> level -> unit = "caml_esp8266_digital_write" [@@noalloc]
external digital_read: pin -> level = "caml_esp8266_digital_read" [@@noalloc]

external delay: int -> unit = "caml_esp8266_delay" [@@noalloc]
external millis: unit -> int = "caml_esp8266_millis" [@@noalloc]

external serial_write_char: char -> unit = "caml_esp8266_serial_write_char" [@@noalloc]

let serial_write s = String.iter serial_write_char s

external serial_read_char: unit -> char = "caml_esp8266_serial_read_char" [@@noalloc]

let serial_read () =
  let s = ref ""
  and c = ref (serial_read_char ()) in
  while((int_of_char !c) <> 0) do
    s := (!s^(String.make 1 !c));
    c := (serial_read_char ())
  done;
  if(String.length !s > 0) then String.sub !s 0 ((String.length !s)-1) else ""
