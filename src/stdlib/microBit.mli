(*******************************************************************************)
(*                                                                             *)
(*                           Microbit library                                  *)
(*                                                                             *)
(*                    Basile Pesin, Sorbonne Université                        *)
(*******************************************************************************)

type level = LOW | HIGH

external print_string: string -> unit = "caml_microbit_print_string" [@@noalloc]

external print_int: int -> unit = "caml_microbit_print_int" [@@noalloc]

val write_pixel: int -> int -> level -> unit

val print_image: level list list -> unit

val a_is_pressed: unit -> bool

val b_is_pressed: unit -> bool
