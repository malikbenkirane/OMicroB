(*******************************************************************************)
(*                                                                             *)
(*                           Microbit library                                  *)
(*                                                                             *)
(*                    Basile Pesin, Sorbonne Université                        *)
(*******************************************************************************)

type level = LOW | HIGH

type button = A | B

type pin = PIN0 | PIN1 | PIN2 | PIN3 | PIN4 | PIN5 | PIN6 | PIN7 | PIN8 | PIN9 | PIN10
         | PIN11 | PIN12 | PIN13 | PIN14 | PIN15 | PIN16 | PIN17 | PIN18 | PIN19 | PIN20

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

external digital_write: pin -> level -> unit = "caml_microbit_digital_write" [@@noalloc]

external unsafe_digital_read: pin -> bool = "caml_microbit_digital_read" [@@noalloc]

let digital_read p =
  match unsafe_digital_read p with
  | true -> HIGH
  | false -> LOW

external delay: int -> unit = "caml_microbit_delay" [@@noalloc]
