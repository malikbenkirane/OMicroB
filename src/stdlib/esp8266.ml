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
external unsafe_analog_write: pin -> int -> unit = "caml_esp8266_analog_write" [@@noalloc]
let analog_write p l =
  if (l < 0 || l > 255) then invalid_arg "analog_write: value should be between 0 and 255";
  unsafe_analog_write p l

external unsafe_analog_read: pin -> int = "caml_esp8266_analog_read" [@@noalloc]
let analog_read p =
  if (p <> A0) then invalid_arg "analog_write: only pin A0 is supported";
  unsafe_analog_read p

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


module Server = struct
  external start: string -> string -> unit = "caml_esp8266_start_server" [@@noalloc]
  external handle_client: unit -> unit = "caml_esp8266_server_handle_client" [@@noalloc]
  external send_html: string -> unit = "caml_esp8266_server_send_html" [@@noalloc]

  external unsafe_on: string -> (unit -> unit) -> unit = "caml_esp8266_server_on" [@@noalloc]
  let on route callback =
    unsafe_on route (fun () -> callback ();
                             (* We add a response at the end of the callback, in case the user didn't specify it *)
                             send_html "OK")
end
