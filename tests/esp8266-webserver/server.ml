open Esp8266

let _ =
  let g = D1 in pin_mode g OUTPUT; digital_write g HIGH;
  start_server "your-ssid" "your-password"
