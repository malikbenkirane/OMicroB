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

external unsafe_analog_write: pin -> int -> unit = "caml_microbit_analog_write" [@@noalloc]

let analog_write p l =
  if (l < 0 || l > 255) then invalid_arg "analog_write: value should be between 0 and 255";
  if (p <> PIN0 && p <> PIN1 && p <> PIN2 && p <> PIN3 && p <> PIN4 && p <> PIN10)
  then invalid_arg "analog_write: only pins 0, 1, 2, 3, 4 and 10 are supported";
  unsafe_analog_write p l

external unsafe_analog_read: pin -> int = "caml_microbit_analog_read" [@@noalloc]

let analog_read p =
  if (p <> PIN0 && p <> PIN1 && p <> PIN2 && p <> PIN3 && p <> PIN4 && p <> PIN10)
  then invalid_arg "analog_write: only pins 0, 1, 2, 3, 4 and 10 are supported";
  unsafe_analog_read p

external delay: int -> unit = "caml_microbit_delay" [@@noalloc]

external millis : unit -> int = "caml_microbit_millis" [@@noalloc]

module Serial = struct
  external write_char: char -> unit = "caml_microbit_serial_write_char" [@@noalloc]
  let write s = String.iter write_char s

  external read_char: unit -> char = "caml_microbit_serial_read_char" [@@noalloc]
  let read () =
    let s = ref ""
    and c = ref (read_char ()) in
    while((int_of_char !c) <> 0) do
      s := (!s^(String.make 1 !c));
      c := (read_char ())
    done;
    if(String.length !s > 0) then String.sub !s 0 ((String.length !s)-1) else !s
end
