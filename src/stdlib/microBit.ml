(*******************************************************************************)
(*                                                                             *)
(*                           Microbit library                                  *)
(*                                                                             *)
(*                    Basile Pesin, Sorbonne Université                        *)
(*******************************************************************************)

type level = LOW | HIGH

type button = A | B

external print_string: string -> unit = "caml_microbit_print_string" [@@noalloc]

external print_int: int -> unit = "caml_microbit_print_int" [@@noalloc]

external unsafe_write_pixel: int -> int -> level -> unit = "caml_microbit_write_pixel" [@@noalloc]

let write_pixel x y l =
  if x < 0 || x > 4 || y < 0 || y > 4 then invalid_arg "write_pixel";
  unsafe_write_pixel x y l

external unsafe_print_image: string -> unit = "caml_microbit_print_image" [@@noalloc]

let print_image i =
  if (List.length i) <> 5 then invalid_arg "print_image";
  let s = String.concat "\n" (List.rev (List.rev_map (fun r ->
      if (List.length r) <> 5 then invalid_arg "print_image";
      String.concat "," (List.rev (List.rev_map
                                     (fun l -> match l with LOW -> "0" | HIGH -> "255") r)
    )) i)) in
  unsafe_print_image (s^"\n")

external button_is_pressed: button -> bool = "caml_microbit_button_is_pressed" [@@noalloc]

let a_is_pressed () = button_is_pressed A

let b_is_pressed () = button_is_pressed B
