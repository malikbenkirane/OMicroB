open Esp8266

let _ =
  let g = D1 in pin_mode g OUTPUT;
  server_on "/on" (fun () ->
      digital_write g HIGH;
      server_send_html "<h1 style='color: #00ff00'>The led was turned on !</h1>");
  server_on "/off" (fun () -> digital_write g LOW);
  start_server "your-ssid" "your-password";
  while true do
    server_handle_client ();
    delay 100
  done
