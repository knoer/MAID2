### MAID2

It's an energy monitor based on a ESP8266, similar to https://github.com/jorgeassuncao/MAID-EM by Jorge Assunção with additions from RoadKillUK https://github.com/RoadkillUK/MAID2

Tested and implemented on a Wemos D1 mini using the battery shield and a small solar panel.
Using a photoresistor or phototransistor to measure blinks from a LED inside a electricity meter.

Wire the photoresistor and the 10K resistor as in
http://static.cactus.io/img/sensors/light/ldr/ldr-circuit.jpg
with the voltage output going to Pin 6 on the ESP8266.

Modify "config/userdata.h" with your personal user data (WiFi, MQTT server, pulses/kWh, etc.).

### Features
+ Should work on most ESP8266-based boards
+ MQTT enabled with the PubSubClient library
+ Configurable MQTT topics to fit your needs
+ User defined interval for sending data over MQTT
+ Publishes various information over MQTT:
  + Average Power during defined interval (Watt)
  + Energy Consumption during defined interval (kWh)
  + Total Accumulated Consumption since installation (kWh)
  + IP address
  + MAC address
+ Retains the last accumulated consumption value even if the device is rebooted, reset or powered off
+ Visual confirmation of operation using the device internal blue LED

### My planned changes are:
 * Optimizing for solar powered installation
   * Only connect to WiFi on startup and when sending data
   * Remove Telnet debug (no use when not always connected)
   * Remove Web interface (no use when not always connected)
   * Change ArduinoOTA to only run when connected to WiFi
 * Fix counting/calculation routine to correct measurement error

### Credits:
 * Forked from RoadKillUK https://github.com/RoadkillUK/MAID2 
 * Based on project ESP Energy Monitor v0.6.6 by Jorge Assunção https://github.com/jorgeassuncao/MAID-EM
 * Based on a project by timseebeck @ https://community.home-assistant.io/t/power-monitoring-with-an-xtm18s-and-mqtt/16316
 * Remote Debug over Telnet by JoaoLopesF @ https://github.com/JoaoLopesF/ESP8266-RemoteDebug-Telnet
 *
 * This program is free software; you can redistribute it and/or modify it under the terms of the
 * GNU General Public License version 2 as published by the Free Software Foundation.
