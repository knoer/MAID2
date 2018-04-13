/**
 * File contents of "userdata.h" for MAID - Energy Monitor
 *
 * This file is used to change your personal user data to meet your needs
 * For more information visit https://github.com/jorgeassuncao/ESP8266-Energy-Monitor
 */

//************ CONFIG WIFI *******************************************************************************
// Configurations of your wifi network - Fixed IP is used because it's quicker to connect than DHCP
//********************************************************************************************************

// Wifi SSID (the name of your wifi network)
//const char* ssid = "x";
const char* ssid = "x";
// Wifi password (the password to access your network)
//const char* password = "x";
const char* password = "x";
// The fixed IP address you want for this node (must be unique inside your network - see above note)
IPAddress ip(x);
// DNS server IP address (usually the same as your router/gateway but can be another DNS server)
IPAddress dns(x);
// Gateway IP address (the address you use to access your router/gateway)
IPAddress gateway(x);
// Subnet mask IP address ()
IPAddress subnet(x);
// Hostname (the name you want to give to this node, must be unique inside your network)
#define host_name "LeckeMeter"

//************* CONFIG MQTT ******************************************************************************
// Configurations of your MQTT server -
//********************************************************************************************************

// MQTT server IP ou URL (the ip address or URL of your MQTT broker)
const char* mqtt_server = "192.168.0.10";
// MQTT port (usually 1883)
int mqtt_port = 1883;
// MQTT user (the username of your MQTT broker)
const char* mqtt_username = "lecky";
// MQTT password (the password of your MQTT broker)
const char* mqtt_password = "lecky";

//************ MQTT TOPICS *******************************************************************************
// Configurations of your MQTT topics - to match your MQTT broker
//********************************************************************************************************

// MQTT topic to publish "watt" values
const char* mqtt_topic_watt = "ESP_Energy_Meter/watt";
// MQTT topic to publish "kwh" values
const char* mqtt_topic_kwh = "ESP_Energy_Meter/kwh";
// MQTT topic to publish "pulse/total kwh" values
const char* mqtt_topic_pulse = "ESP_Energy_Meter/pulse";
// MQTT topic to publish IP address
const char* mqtt_topic_ip = "ESP_Energy_Meter/ip";
// MQTT topic to publish MAC address
const char* mqtt_topic_mac = "ESP_Energy_Meter/mac";
// MQTT topic to subscribe and get values when node starts
const char* mqtt_topic_sub_1 = mqtt_topic_pulse;

//**************My Stuff******************************************************************************************
// Debounce is set to 50000L, if using original hardware, change to 10000L and LED_mode = 0
//********************************************************************************************************

// Debounce interval to stop double reading
int debounce_interval = 50000L;
// LED_mode set to 1 for reading a flashing LED or 0 for original hardware (however if you need a setting lower than 50000L, you are using TOO much electricity
boolean LED_mode = 1;
// Minimum time between send updates.
unsigned long SEND_FREQUENCY = 15000;                                           // Minimum time between send in milliseconds
#define TESTING 1                                                                                   // Set this to 1 if you are just testing and are not connected to a meter
int testpulse = 300;                                                                                  // testpulse in milliseconds


//************* CONFIG PULSES PER KWH ********************************************************************
//********************************************************************************************************
#define PULSE_FACTOR 1000                                                       // Number of pulses of the meter per kWh


// END
