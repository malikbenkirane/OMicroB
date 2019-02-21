(*******************************************************************************)
(*                                                                             *)
(*                           Microbit library                                  *)
(*                                                                             *)
(*                    Basile Pesin, Sorbonne Université                        *)
(*******************************************************************************)

type level = LOW | HIGH

type pin = PIN0 | PIN1 | PIN2 | PIN3 | PIN4 | PIN5 | PIN6 | PIN7 | PIN8 | PIN9 | PIN10
         | PIN11 | PIN12 | PIN13 | PIN14 | PIN15 | PIN16 | PIN17 | PIN18 | PIN19 | PIN20

external print_string: string -> unit = "caml_microbit_print_string" [@@noalloc]

external print_int: int -> unit = "caml_microbit_print_int" [@@noalloc]

val write_pixel: int -> int -> level -> unit

val print_image: level list list -> unit

val clear_screen: unit -> unit

val a_is_pressed: unit -> bool

val b_is_pressed: unit -> bool

external digital_write: pin -> level -> unit = "caml_microbit_digital_write" [@@noalloc]

val digital_read: pin -> level

val analog_write: pin -> int -> unit

val analog_read: pin -> int

external delay: int -> unit = "caml_microbit_delay" [@@noalloc]

external millis: unit -> int = "caml_microbit_millis" [@@noalloc]

module Serial: sig
  val write: string -> unit
  val read: unit -> string
end

module Accelerometer: sig
  val x: unit -> int
  (** Returns the x acceleration in milli-gs *)

  val y: unit -> int
  (** Returns the y acceleration in milli-gs *)

  val z: unit -> int
  (** Returns the z acceleration in milli-gs *)

  val pitch: unit -> int
  (** Returns the pitch, in degrees *)

  val roll: unit -> int
  (** Returns the roll, in degrees *)
end

module Compass: sig
  val calibrate: unit -> unit
  (** Calibrate the compass *)

  val heading: unit -> int
  (** Heading of the device relative to magnetic north (in degrees) *)
end