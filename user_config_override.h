/*
PASTE FOLLOWING IN "platformio_tasmota_cenv.ini"
-------------------------------------------
[env:tasmota-mt3]
build_flags = ${env.build_flags} -DFIRMWARE_MT3
board = esp8266_4M2M

[env:tasmota-mt2]
build_flags = ${env.build_flags} -DFIRMWARE_MT2
board = esp8266_4M2M

[env:tasmota-mt1]
build_flags = ${env.build_flags} -DFIRMWARE_MT1
board = esp8266_4M2M

[env:tasmota-mp1]
build_flags = ${env.build_flags} -DFIRMWARE_MP1
board = esp8266_4M2M

[env:tasmota-dd]
build_flags = ${env.build_flags} -DFIRMWARE_DD
board = esp8266_4M2M

[env:tasmota-zigbee8266]
build_flags = ${env.build_flags} -DFIRMWARE_ZIGBEE8266
board = esp8266_4M2M

[env:tasmota-zigbee32]
extends                 = env:tasmota32_base
build_flags             = ${env:tasmota32_base.build_flags} -DFIRMWARE_ZIGBEE32
board                   = esp32

-------------------------------------------
*/

#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

/*
#undef  STA_SSID1
#define STA_SSID1         "Wifi"             // [Ssid1] Wifi SSID

#undef  STA_PASS1
#define STA_PASS1         "Password"     // [Password1] Wifi password
*/

#ifdef ROTARY_V1
#undef ROTARY_V1
#endif

#ifdef USE_SONOFF_RF
#undef USE_SONOFF_RF
#endif

#ifdef USE_RF_FLASH
#undef USE_RF_FLASH
#endif

#ifdef USE_SONOFF_SC
#undef USE_SONOFF_SC
#endif

#ifdef USE_TUYA_MCU
#undef USE_TUYA_MCU
#endif

#ifdef TUYA_DIMMER_ID
#undef TUYA_DIMMER_ID
#endif

#ifdef USE_TUYA_TIME
#undef USE_TUYA_TIME
#endif

#ifdef USE_ARMTRONIX_DIMMERS
#undef USE_ARMTRONIX_DIMMERS
#endif

#ifdef USE_PS_16_DZ
#undef USE_PS_16_DZ
#endif

#ifdef USE_SONOFF_IFAN
#undef USE_SONOFF_IFAN
#endif

#ifdef USE_ARILUX_RF
#undef USE_ARILUX_RF
#endif

#ifdef USE_SHUTTER
#undef USE_SHUTTER
#endif

#ifdef USE_DEEPSLEEP
#undef USE_DEEPSLEEP
#endif

#ifdef USE_EXS_DIMMER
#undef USE_EXS_DIMMER
#endif

#ifdef USE_PWM_DIMMER
#undef USE_PWM_DIMMER
#endif

#ifdef USE_PWM_DIMMER_REMOTE
#undef USE_PWM_DIMMER_REMOTE
#endif

#ifdef USE_SONOFF_D1
#undef USE_SONOFF_D1
#endif

#ifdef USE_SHELLY_DIMMER
#undef USE_SHELLY_DIMMER
#endif

#ifdef SHELLY_CMDS
#undef SHELLY_CMDS
#endif

#ifdef SHELLY_FW_UPGRADE
#undef SHELLY_FW_UPGRADE
#endif

#undef USE_MY92X1                               // Add support for MY92X1 RGBCW led controller as used in Sonoff B1, Ailight and Lohas
#undef USE_SM16716                              // Add support for SM16716 RGB LED controller (+0k7 code)
#undef USE_SM2135                               // Add support for SM2135 RGBCW led control as used in Action LSC (+0k6 code)
#undef USE_SM2335                               // Add support for SM2335 RGBCW led control as used in SwitchBot Color Bulb (+0k7 code)
#undef USE_BP1658CJ                             // Add support for BP1658CJ RGBCW led control as used in Orein OS0100411267 Bulb
#undef USE_BP5758D                              // Add support for BP5758D RGBCW led control as used in some Tuya lightbulbs (+0k8 code)
#undef USE_SONOFF_L1                            // Add support for Sonoff L1 led control
#undef USE_ELECTRIQ_MOODL                       // Add support for ElectriQ iQ-wifiMOODL RGBW LED controller (+0k3 code)
#undef USE_LIGHT_PALETTE                        // Add support for color palette (+0k7 code)
#undef USE_LIGHT_VIRTUAL_CT                     // Add support for Virtual White Color Temperature (+1.1k code)
#undef USE_DGR_LIGHT_SEQUENCE                   // Add support for device group light sequencing (requires USE_DEVICE_GROUPS) (+0k2 code)

#ifdef USE_DS18x20
#undef USE_DS18x20
#endif

#ifdef USE_I2C
#undef USE_I2C
#endif

#ifdef USE_SERIAL_BRIDGE
#undef USE_SERIAL_BRIDGE
#endif

#ifdef USE_ENERGY_SENSOR
#undef USE_ENERGY_SENSOR
#endif

#ifdef USE_ENERGY_MARGIN_DETECTION
#undef USE_ENERGY_MARGIN_DETECTION
#endif

#ifdef USE_ENERGY_POWER_LIMIT
#undef USE_ENERGY_POWER_LIMIT
#endif

#ifdef USE_ENERGY_DUMMY
#undef USE_ENERGY_DUMMY
#endif

#ifdef USE_HLW8012
#undef USE_HLW8012
#endif

#ifdef USE_CSE7766
#undef USE_CSE7766
#endif

#ifdef USE_PZEM004T
#undef USE_PZEM004T
#endif

#ifdef USE_PZEM_AC
#undef USE_PZEM_AC
#endif

#ifdef USE_PZEM_DC
#undef USE_PZEM_DC
#endif

#ifdef USE_MCP39F501
#undef USE_MCP39F501
#endif

#ifdef USE_DHT
#undef USE_DHT
#endif

#ifdef USE_IR_REMOTE
#undef USE_IR_REMOTE
#endif

#ifdef USE_IR_RECEIVE
#undef USE_IR_RECEIVE
#endif

// -- MQTT - Home Assistant Discovery -------------
#define USE_HOME_ASSISTANT                                   // Enable Home Assistant Discovery Support (+12k code, +6 bytes mem)
    #define HOME_ASSISTANT_DISCOVERY_PREFIX   "homeassistant"  // Home Assistant discovery prefix
    #define HOME_ASSISTANT_LWT_TOPIC   "homeassistant/status"  // home Assistant Birth and Last Will Topic (default = homeassistant/status)
    #define HOME_ASSISTANT_LWT_SUBSCRIBE    true               // Subscribe to Home Assistant Birth and Last Will Topic (default = true)

//--Initialize SK6812 LED's -----------------------
#undef USE_WS2812_HARDWARE
#undef USE_WS2812_CTYPE
#define USE_WS2812_HARDWARE  NEO_HW_SK6812     // Hardware type (NEO_HW_WS2812, NEO_HW_WS2812X, NEO_HW_WS2813, NEO_HW_SK6812, NEO_HW_LC8812, NEO_HW_APA106, NEO_HW_P9813)
#define USE_WS2812_CTYPE     NEO_GRB           // Color type (NEO_RGB, NEO_GRB, NEO_BRG, NEO_RBG, NEO_RGBW, NEO_GRBW)

//-- Location ---------------------------
#ifdef LATITUDE
#undef LATITUDE
#endif
#define LATITUDE 51.49955

#ifdef LONGITUDE
#undef LONGITUDE
#endif
#define LONGITUDE 3.61480

//-- Disable Rules & extensions  ---------------------------
#ifdef USE_RULES
#undef USE_RULES
#endif

#ifdef USE_EXPRESSION
#undef USE_EXPRESSION
#endif

#ifdef SUPPORT_IF_STATEMENT
#undef SUPPORT_IF_STATEMENT
#endif

//-- Enable script & extensions  ---------------------------
#define USE_SCRIPT                               // Add support for script (+17k code)
    #define USE_SCRIPT_FATFS 4                     // Script: Add FAT FileSystem Support
    #define SUPPORT_MQTT_EVENT                     // Support trigger event with MQTT subscriptions (+3k5 code)
    #define USE_SCRIPT_WEB_DISPLAY
    #define SCRIPT_POWER_SECTION
    #define USE_SCRIPT_SUB_COMMAND
    #define USE_BUTTON_EVENT

//-- TLS ---------------------------
#ifndef USE_MQTT_TLS
#define USE_MQTT_TLS
#endif

#ifndef USE_MQTT_TLS_CA_CERT
#define USE_MQTT_TLS_CA_CERT
#endif

#ifndef USE_MQTT_TLS_FORCE_EC_CIPHER
#define USE_MQTT_TLS_FORCE_EC_CIPHER
#endif

#define USE_MQTT_TLS_DROP_OLD_FINGERPRINT

//-- Telegram Protocol ---------------------------
#ifndef USE_TELEGRAM
#define USE_TELEGRAM
#endif

#ifndef USE_TELEGRAM_FINGERPRINT
#define USE_TELEGRAM_FINGERPRINT "\xB2\x72\x47\xA6\x69\x8C\x3C\x69\xF9\x58\x6C\xF3\x60\x02\xFB\x83\xFA\x8B\x1F\x23"
#endif

// -- Ping ----------------------------------------
#ifndef USE_PING
#define USE_PING
#endif

//-- MEEK MT3 ---------------------------
#ifdef FIRMWARE_MT3
#warning **** Build: MEEK MT3 ****
#undef CODE_IMAGE_STR
#define CODE_IMAGE_STR "MEEK MT3"

#ifdef PROJECT
#undef PROJECT
#endif
#define PROJECT "MEEK-MT3"

#ifdef MODULE
#undef MODULE
#endif
#define MODULE USER_MODULE

#ifdef FALLBACK_MODULE
#undef FALLBACK_MODULE
#endif
#define FALLBACK_MODULE USER_MODULE

#ifdef ESP8266
#define USER_TEMPLATE "{\"NAME\":\"MEEK MT3\",\"GPIO\":[480,1,1376,1,224,225,1,1,161,162,160,226,227,1],\"FLAG\":0,\"BASE\":18}"
#endif

#define START_SCRIPT_FROM_BOOT
#define PRECONFIGURED_SCRIPT ">D\n>B\nsmlj=0\n;->sensor53 r\n>R\nsmlj=0\n>S\nif upsecs>30\nthen\nsmlj=1\nendif\n>M 1\n+1,26,mN2,16,9600,Solar,32,10,01040008,0104000B,0104000E\n1,=h------------BATTERY------------\n1,01040SSss@i0:327.68,Voltage,V,Voltage,3\n1,01040SSss@i1:413.94,Current,A,Current,3\n1,01040ssxx@i2:100,Temp,°C,Temperature,2\n#"

#ifdef FRIENDLY_NAME
#undef FRIENDLY_NAME
#endif
#define FRIENDLY_NAME "Touch 3"

#define USER_BACKLOG "script 1;SetOption111 1;SwitchMode1 4;SwitchMode2 4;SwitchMode3 4;SetOption13 1;rule1 1;FriendlyName1 Left;FriendlyName2 Center;FriendlyName3 Right;FriendlyName4 $Touch Control;FriendlyName5 $RGB LED;Wifi 3;SwitchDebounce 52;WebButton1 Left;WebButton2 Center;WebButton3 Right;WebButton4 Touch;WebButton5 RGB"
#endif
 
//-- MEEK MT2 ---------------------------
#ifdef FIRMWARE_MT2
#warning **** Build: MEEK MT2 ****
#undef CODE_IMAGE_STR
#define CODE_IMAGE_STR "MEEK MT2"

#ifdef PROJECT
#undef PROJECT
#endif
#define PROJECT "MEEK-MT2"

#ifdef MODULE
#undef MODULE
#endif
#define MODULE USER_MODULE

#ifdef FALLBACK_MODULE
#undef FALLBACK_MODULE
#endif
#define FALLBACK_MODULE USER_MODULE

#ifdef ESP8266
#define USER_TEMPLATE "{\"NAME\":\"MEEK MT2\",\"GPIO\":[480,1,1376,1,225,224,1,1,0,161,160,0,226,1],\"FLAG\":0,\"BASE\":18}"
#endif

#ifdef USER_RULE1
#undef USER_RULE1
#endif
#define USER_RULE1 "on System#Boot do backlog power3 0;led1 200,0,0;led2 200,0,0;color1 1;delay 100;Fade 1;speed 10;color1 12;PWMFrequency,4000;delay 100;power3 1;Fade 0 endon on power1#state=1 do Backlog0 led1,250,0,250; Buzzer1,5 endon on power1#state=0 do Backlog0 led1,100,100,100; Buzzer1,5 endon on power2#state=1 do Backlog0 led2,250,0,250; Buzzer1,5 endon on power2#state=0 do Backlog0 led2,100,100,100; Buzzer1,5 endon"

#ifdef FRIENDLY_NAME
#undef FRIENDLY_NAME
#endif
#define FRIENDLY_NAME "Touch 2"

#define USER_BACKLOG "SetOption111 1;SwitchMode1 4;SwitchMode2 4;SetOption13 1;rule1 1;FriendlyName1 Left;FriendlyName2 Right;FriendlyName3 $Touch Control;FriendlyName4 $RGB LED;Wifi 3;SwitchDebounce 52;WebButton1 Left;WebButton2 Right;WebButton3 Touch;WebButton4 RGB"
#endif

//-- MEEK MT1 ---------------------------
#ifdef FIRMWARE_MT2
#warning **** Build: MEEK MT1 ****
#undef CODE_IMAGE_STR
#define CODE_IMAGE_STR "MEEK MT1"

#ifdef PROJECT
#undef PROJECT
#endif
#define PROJECT "MEEK-MT1"

#ifdef MODULE
#undef MODULE
#endif
#define MODULE USER_MODULE

#ifdef FALLBACK_MODULE
#undef FALLBACK_MODULE
#endif
#define FALLBACK_MODULE USER_MODULE

#ifdef ESP8266
#define USER_TEMPLATE "{\"NAME\":\"MEEK MT1\",\"GPIO\":[480,1,1376,1,225,224,1,1,0,161,160,0,226,1],\"FLAG\":0,\"BASE\":18}"
#endif

#ifdef USER_RULE1
#undef USER_RULE1
#endif
#define USER_RULE1 "on System#Boot do backlog power3 0;led1 200,0,0;led2 200,0,0;color1 1;delay 100;Fade 1;speed 10;color1 12;PWMFrequency,4000;delay 100;power3 1;Fade 0 endon on power1#state=1 do Backlog0 led1,250,0,250; Buzzer1,5 endon on power1#state=0 do Backlog0 led1,100,100,100; Buzzer1,5 endon on power2#state=1 do Backlog0 led2,250,0,250; Buzzer1,5 endon on power2#state=0 do Backlog0 led2,100,100,100; Buzzer1,5 endon"

#ifdef FRIENDLY_NAME
#undef FRIENDLY_NAME
#endif
#define FRIENDLY_NAME "Touch 1"

#define USER_BACKLOG "SetOption111 1;SwitchMode1 4;SwitchMode2 4;SetOption13 1;rule1 1;FriendlyName1 Left;FriendlyName2 Right;FriendlyName3 $Touch Control;FriendlyName4 $RGB LED;Wifi 3;SwitchDebounce 52;WebButton1 Left;WebButton2 Right;WebButton3 Touch;WebButton4 RGB"
#endif

//-- MEEK DD ---------------------------
#ifdef FIRMWARE_DD
#warning **** Build: MEEK DD ****
#undef CODE_IMAGE_STR
#define CODE_IMAGE_STR "MEEK DD"

#ifdef PROJECT
#undef PROJECT
#endif
#define PROJECT "MEEK-DD"

#ifdef MODULE
#undef MODULE
#endif
#define MODULE USER_MODULE

#ifdef FALLBACK_MODULE
#undef FALLBACK_MODULE
#endif
#define FALLBACK_MODULE USER_MODULE

#ifdef MQTT_TOPIC
#undef MQTT_TOPIC
#endif
#define MQTT_TOPIC             PROJECT

#ifdef USE_TCP_BRIDGE
#undef USE_TCP_BRIDGE
#endif
#define USE_TCP_BRIDGE

//-- Smart Meter Interface ---------------------------
#ifndef USE_SML_M
#define USE_SML_M
#endif

#ifdef ESP8266
#define USER_TEMPLATE "{\"NAME\":\"MEEK DD\",\"GPIO\":[0,0,1376,3232,608,640,160,225,352,161,353,224,2144,1],\"FLAG\":0,\"BASE\":18}"
#endif

#ifdef FRIENDLY_NAME
#undef FRIENDLY_NAME
#endif
#define FRIENDLY_NAME "MEEK DD"
#define USER_BACKLOG "SwitchMode1 4;SwitchMode2 4;PulseTime2 25;SerialDelimiter 10;SerialSend 1;rule1 1;Wifi 3;FriendlyName1 Relay;WebButton1 Relay;FriendlyName2 DoorBell;WebButton2 DoorBell;FriendlyName3 $RGB;WebButton3 RGB"

#ifdef USE_MP3_PLAYER
#undef USE_MP3_PLAYER
#endif
#define USE_MP3_PLAYER

#ifdef MP3_VOLUME
#undef MP3_VOLUME
#endif
#define MP3_VOLUME 25

#define USE_I2C
#define USE_SERIAL_BRIDGE
#endif

//-- MEEK ZIGBEE ESP32 ---------------------------
#ifdef FIRMWARE_ZIGBEE32
#warning **** Build: MEEK ZIGBEE ESP32 ****
#undef CODE_IMAGE_STR
#define CODE_IMAGE_STR "Meek"

#ifdef USE_SERIAL_BRIDGE
#undef USE_SERIAL_BRIDGE
#endif
#define USE_SERIAL_BRIDGE

#ifdef USE_TCP_BRIDGE
#undef USE_TCP_BRIDGE
#endif
#define USE_TCP_BRIDGE

#ifdef USE_ZIGBEE
#undef USE_ZIGBEE
#endif
#define USE_ZIGBEE

#undef WS2812_LEDS
#define WS2812_LEDS            4    //Amount of LED's

#ifdef MODULE
#undef MODULE
#endif
#define MODULE USER_MODULE

#ifdef FALLBACK_MODULE
#undef FALLBACK_MODULE
#endif
#define FALLBACK_MODULE USER_MODULE

#ifdef ESP32
#define USER_TEMPLATE "{\"NAME\":\"Meek Zigbee\",\"GPIO\":[1,1,1,1,1,1,1,1,1,1,1,1,130,1,1,1376,0,5793,3584,3552,0,32,480,1,0,0,0,0,1,33,1,1,1,0,0,1],\"FLAG\":0,\"BASE\":1}"
#endif

//-- Zigbee Script ---------------------------
#define START_SCRIPT_FROM_BOOT
#define PRECONFIGURED_SCRIPT ">D\nButton1=0\nButton2=0\nButton3=0\n\n>B\n->power4 0\n->PWMFrequency 4000\n->led1 101010\n->led2 101010\n->led3 101010\n->led4 101010\ndelay(1000)\n->led1 100000\ndelay(1000)\n->led2 100000\ndelay(1000)\n->led3 100000\ndelay(1000)\n->led4 100000\ndelay(1000)\n->led1 101010\n->led2 101010\n->led3 101010\n->led4 101010\n\n>b\nButton1=bt[1]\nButton2=bt[2]\nButton3=bt[3]\n\nif Button1==1\nthen ->scheme 12\n->buzzer 37 1 15\nelse\n->scheme 0\nendif\n\nif Button3==1\nthen ->ZbPermitJoin 1\nendif"

#ifdef FRIENDLY_NAME
#undef FRIENDLY_NAME
#endif
#define FRIENDLY_NAME "Zigbee Gateway"
#define USER_BACKLOG "Wifi 3;script 1;SetOption1 1;SetOption13 1;SetOption111 1;SwitchMode1 15;SwitchMode2 15;SwitchMode3 15"
#endif

#endif  // _USER_CONFIG_OVERRIDE_H_
