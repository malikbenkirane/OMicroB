(*******************************************************************************)
(*                                                                             *)
(*                           Microbit library                                  *)
(*                                                                             *)
(*                    Basile Pesin, Sorbonne Université                        *)
(*******************************************************************************)

external print_string: string -> unit = "caml_microbit_print_string" [@@noalloc]

external print_int: int -> unit = "caml_microbit_print_int" [@@noalloc]
