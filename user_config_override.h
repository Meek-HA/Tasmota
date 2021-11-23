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
build_flags = ${env.build_flags} -DFIRMWARE_ZIGBEE32

-------------------------------------------
*/

#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

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

//-- Location ---------------------------
#ifdef LATITUDE
#undef LATITUDE
#endif
#define LATITUDE 51.49955

#ifdef LONGITUDE
#undef LONGITUDE
#endif
#define LONGITUDE 3.61480

//-- Rules ---------------------------
#ifdef USE_RULES
#undef USE_RULES
#endif
#define USE_RULES

#ifdef USE_EXPRESSION
#undef USE_EXPRESSION
#endif
#define USE_EXPRESSION

#ifdef SUPPORT_IF_STATEMENT
#undef SUPPORT_IF_STATEMENT
#endif
#define SUPPORT_IF_STATEMENT

//-- TLS ---------------------------
#ifdef USE_MQTT_TLS
#undef USE_MQTT_TLS
#endif
#define USE_MQTT_TLS

#ifdef USE_MQTT_TLS_CA_CERT
#undef USE_MQTT_TLS_CA_CERT
#endif
#define USE_MQTT_TLS_CA_CERT

#ifdef USE_MQTT_TLS_FORCE_EC_CIPHER
#undef USE_MQTT_TLS_FORCE_EC_CIPHER
#endif
#define USE_MQTT_TLS_FORCE_EC_CIPHER

//-- Telegram Protocol ---------------------------
#ifdef USE_TELEGRAM
#undef USE_TELEGRAM
#endif
#define USE_TELEGRAM

#ifdef USE_TELEGRAM_FINGERPRINT
#undef USE_TELEGRAM_FINGERPRINT
#endif
#define USE_TELEGRAM_FINGERPRINT "\xB2\x72\x47\xA6\x69\x8C\x3C\x69\xF9\x58\x6C\xF3\x60\x02\xFB\x83\xFA\x8B\x1F\x23"

// -- Ping ----------------------------------------
#ifdef USE_PING
#undef USE_PING
#endif
#define USE_PING

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
#define USER_TEMPLATE "{\"NAME\":\"MEEK MT3\",\"GPIO\":[480,1,1376,1,224,225,1,1,161,162,160,226,3840,1],\"FLAG\":0,\"BASE\":18}"
#endif

#ifdef USER_RULE1
#undef USER_RULE1
#endif
#define USER_RULE1 "on System#Boot do PWMFrequency,4000 endon on power1#state=1 do Backlog0 led1,250,0,250; Buzzer1,5 endon on power1#state=0 do Backlog0 led1,100,100,100; Buzzer1,5 endon on power2#state=1 do Backlog0 led2,250,0,250; Buzzer1,5 endon on power2#state=0 do Backlog0 led2,100,100,100; Buzzer1,5 endon on power3#state=1 do Backlog0 led3,250,0,250; Buzzer1,5 endon on power3#state=0 do Backlog0 led3,100,100,100; Buzzer1,5 endon"

#ifdef FRIENDLY_NAME
#undef FRIENDLY_NAME
#endif
#define FRIENDLY_NAME "Touch 3"

#define USER_BACKLOG "SetOption111 1;SwitchMode1 4;SwitchMode2 4;SwitchMode3 4;SetOption13 1;rule1 1;FriendlyName1 Left;FriendlyName2 Center;FriendlyName3 Right;FriendlyName4 RGB LED;Wifi 3;SwitchDebounce 52"
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
#define USER_TEMPLATE "{\"NAME\":\"MEEK MT2\",\"GPIO\":[480,1,1376,1,225,224,1,1,0,161,160,0,3840,1],\"FLAG\":0,\"BASE\":18}"
#endif

#ifdef USER_RULE1
#undef USER_RULE1
#endif
#define USER_RULE1 "on System#Boot do PWMFrequency,4000 endon on power1#state=1 do Backlog0 led1,250,0,250; Buzzer1,5 endon on power1#state=0 do Backlog0 led1,100,100,100; Buzzer1,5 endon on power2#state=1 do Backlog0 led2,250,0,250; Buzzer1,5 endon on power2#state=0 do Backlog0 led2,100,100,100; Buzzer1,5 endon"

#ifdef FRIENDLY_NAME
#undef FRIENDLY_NAME
#endif
#define FRIENDLY_NAME "Touch 2"

#define USER_BACKLOG "SetOption111 1;SwitchMode1 4;SwitchMode2 4;SetOption13 1;rule1 1;FriendlyName1 Left;FriendlyName2 Right;FriendlyName3 RGB LED;Wifi 3;SwitchDebounce 52"
#endif

//-- MEEK ZIGBEE ESP8266 ---------------------------
#ifdef FIRMWARE_ZIGBEE8266
#warning **** Build: MEEK ZIGBEE ESP8266 ****
#undef CODE_IMAGE_STR
#define CODE_IMAGE_STR "MEEK ZIGBEE"

#ifdef USE_SERIAL_BRIDGE
#undef USE_SERIAL_BRIDGE
#endif
#define USE_SERIAL_BRIDGE

#ifdef USE_TCP_BRIDGE
#undef USE_TCP_BRIDGE
#endif
#define USE_TCP_BRIDGE

#ifdef MODULE
#undef MODULE
#endif
#define MODULE USER_MODULE

#ifdef FALLBACK_MODULE
#undef FALLBACK_MODULE
#endif
#define FALLBACK_MODULE USER_MODULE

#ifdef ESP8266
#define USER_TEMPLATE "{\"NAME\":\"MEEK ZIGBEE\",\"GPIO\":[480,1,1376,1,225,226,1,1,161,162,160,224,3840,1],\"FLAG\":0,\"BASE\":18}"
#endif

#ifdef USER_RULE1
#undef USER_RULE1
#endif
#define USER_RULE1 "on System#Boot do PWMFrequency,4003 endon on power1#state=1 do Backlog0 led1,250,0,250; Buzzer1,5 endon on power1#state=0 do Backlog0 led1,100,100,100; Buzzer1,5 endon on power2#state=1 do Backlog0 led2,250,0,250; Buzzer1,5 endon on power2#state=0 do Backlog0 led2,100,100,100; Buzzer1,5 endon on power3#state=1 do Backlog0 led3,250,0,250; Buzzer1,5 endon on power3#state=0 do Backlog0 led3,100,100,100; Buzzer1,5 endon"

#ifdef FRIENDLY_NAME
#undef FRIENDLY_NAME
#endif
#define FRIENDLY_NAME "MEEK_ZIGBEE"
#define USER_BACKLOG "SetOption111 1;SwitchMode1 4;SwitchMode2 4;SwitchMode3 4;SetOption13 1;rule1 1"
#endif

//-- MEEK DD ---------------------------
#ifdef FIRMWARE_DD
#warning **** Build: MEEK DD ****
#undef CODE_IMAGE_STR
#define CODE_IMAGE_STR "MEEK DD"

#ifdef MODULE
#undef MODULE
#endif
#define MODULE USER_MODULE

#ifdef FALLBACK_MODULE
#undef FALLBACK_MODULE
#endif
#define FALLBACK_MODULE USER_MODULE

#ifdef ESP8266
#define USER_TEMPLATE "{\"NAME\":\"MEEK DD\",\"GPIO\":[480,1,1376,1,225,226,1,1,161,162,160,224,3840,1],\"FLAG\":0,\"BASE\":18}"
#endif

#ifdef USER_RULE1
#undef USER_RULE1
#endif
#define USER_RULE1 "on System#Boot do PWMFrequency,4003 endon on power1#state=1 do Backlog0 led1,250,0,250; Buzzer1,5 endon on power1#state=0 do Backlog0 led1,100,100,100; Buzzer1,5 endon on power2#state=1 do Backlog0 led2,250,0,250; Buzzer1,5 endon on power2#state=0 do Backlog0 led2,100,100,100; Buzzer1,5 endon on power3#state=1 do Backlog0 led3,250,0,250; Buzzer1,5 endon on power3#state=0 do Backlog0 led3,100,100,100; Buzzer1,5 endon"

#ifdef FRIENDLY_NAME
#undef FRIENDLY_NAME
#endif
#define FRIENDLY_NAME "MEEK_DD"
#define USER_BACKLOG "SetOption111 1;SwitchMode1 4;SwitchMode2 4;SwitchMode3 4;SetOption13 1;rule1 1"

#ifdef USE_MP3_PLAYER
#undef USE_MP3_PLAYER
#endif
#define USE_MP3_PLAYER

#ifdef MP3_VOLUME
#undef MP3_VOLUME
#endif
#define MP3_VOLUME 25
#endif

#endif  // _USER_CONFIG_OVERRIDE_H_
