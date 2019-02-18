open Esp8266

let _ =
  let g = D1 in pin_mode g OUTPUT;
  Server.on "/on" (fun () ->
      digital_write g HIGH;
      Server.send_html "<h1 style='color: #00ff00'>The led was turned on !</h1>");
  Server.on "/off" (fun () -> digital_write g LOW);
  Server.start "your-ssid" "your-password";
  while true do
    Server.handle_client ();
    delay 100
  done
