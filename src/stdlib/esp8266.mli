(*******************************************************************************)
(*                                                                             *)
(*                       Esp8266 manipulation library                          *)
(*                                                                             *)
(*                    Basile Pesin, Sorbonne Université                        *)
(*******************************************************************************)

type pin = D0 | D1 | D2 | D3 | D4 | D5 | D6 | D7 | D8 | A0

(** Pin modes *)
type mode = INPUT | OUTPUT | INPUT_PULLUP

(** Read and write levels (HIGH = 5v, LOW = 0v) *)
type level = LOW | HIGH

external pin_mode: pin -> mode -> unit = "caml_esp8266_pin_mode" [@@noalloc]
external digital_write: pin -> level -> unit = "caml_esp8266_digital_write" [@@noalloc]
external digital_read: pin -> level = "caml_esp8266_digital_read" [@@noalloc]
val analog_write: pin -> int -> unit
val analog_read: pin -> int

external delay: int -> unit = "caml_esp8266_delay" [@@noalloc]
external millis: unit -> int = "caml_esp8266_millis" [@@noalloc]

val serial_write: string -> unit
val serial_read: unit -> string

(** Starts a server *)
external start_server: string -> string -> unit = "caml_esp8266_start_server" [@@noalloc]
(* Sets a callback for a given route *)
external server_on: string -> (unit -> unit) -> unit = "caml_esp8266_server_on" [@@noalloc]
(* Handle a client if there is one (non-blocking) *)
external server_handle_client: unit -> unit = "caml_esp8266_server_handle_client" [@@noalloc]
