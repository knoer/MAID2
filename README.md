It's an energy monitor based on a ESP8266, similar to https://github.com/jorgeassuncao/MAID-EM by Jorge Assunção however this can be used for both the xtm18s(or similar) or a meter with a flashing LED, using a photoresistor.

Wire the photoresistor and the 10K resistor as in
http://static.cactus.io/img/sensors/light/ldr/ldr-circuit.jpg
with the voltage output going to Pin 6 on the ESP8266.

My Changes are:
 * Testing without input
 * Pulse times in Serial and Debug
 * Option for reading LED on meter
 * I think that's it

Credits:

 * ESP Energy Monitor v0.6.6 by Jorge Assunção
 *
 * Based on a project by timseebeck @ https://community.home-assistant.io/t/power-monitoring-with-an-xtm18s-and-mqtt/16316
 * Remote Debug over Telnet by JoaoLopesF @ https://github.com/JoaoLopesF/ESP8266-RemoteDebug-Telnet
 *
 * See Github for instructions on how to use this code: https://github.com/jorgeassuncao/ESP8266-Energy-Monitor
 *
 * This program is free software; you can redistribute it and/or modify it under the terms of the
 * GNU General Public License version 2 as published by the Free Software Foundation.
 *
 * You can change your personal user data (wifi access, MQTT server, etc) in the "config/userdata.h" file
 */
