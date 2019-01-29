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

val a_is_pressed: unit -> bool

val b_is_pressed: unit -> bool

external digital_write: pin -> level -> unit = "caml_microbit_digital_write" [@@noalloc]

val digital_read: pin -> level

external delay: int -> unit = "caml_microbit_delay" [@@noalloc]

val serial_send: string -> unit

val serial_read: unit -> string
