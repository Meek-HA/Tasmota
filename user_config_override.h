/*
PASTE FOLLOWING IN "platformio_tasmota_cenv.ini"
-------------------------------------------
[env:tasmota-perilex]
build_flags = ${env.build_flags} -DFIRMWARE_PERILEX
board                   = esp8266_4M2M

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

//-- MEEK PERILEX ---------------------------
#ifdef FIRMWARE_PERILEX
#warning **** Build: MEEK PERILEX ****
#undef CODE_IMAGE_STR
#define CODE_IMAGE_STR "Meek"

#ifdef MODULE
#undef MODULE
#endif
#define MODULE USER_MODULE

#ifdef FALLBACK_MODULE
#undef FALLBACK_MODULE
#endif
#define FALLBACK_MODULE USER_MODULE

#ifdef ESP8266
#define USER_TEMPLATE "{\"NAME\":\"Meek PERILEX\",\"GPIO\":[480,1,1376,1,224,225,1,1,161,162,160,226,227,1],\"FLAG\":0,\"BASE\":18}"
#endif

#define START_SCRIPT_FROM_BOOT
//----- https://jsonformatter.org/json-stringify-online -----
#define PRECONFIGURED_SCRIPT ">D\r\nButton=0\r\nStatus=0\r\n\r\n>B\r\n->power4 0\r\n->PWMFrequency 4000\r\n->led1 100000\r\ndelay(1000)\r\nif pwr[1]==1\r\nthen ->led1 101010\r\nStatus=1\r\nendif\r\nif pwr[2]==1\r\nthen ->led1 000010\r\nStatus=2\r\nendif\r\nif pwr[3]==1\r\nthen ->led1 100000\r\nStatus=3\r\nendif\r\n->power4 1\r\nif Status==0\r\nthen\r\n=>power1 1\r\nendif\r\n\r\n>b\r\nButton=bt[1]\r\nif Button==1\r\nthen\r\nStatus+=1\r\nendif\r\n\r\nif Status==1\r\nthen\r\n+>Power1 1\r\nendif\r\n\r\nif Status==2\r\nthen\r\n+>Power2 1\r\nendif\r\n\r\nif Status==3\r\nthen\r\n+>Power3 1\r\nendif\r\n\r\n>P\r\nif pwr[3]==1\r\nthen\r\n->led1 990000\r\n->buzzer 3\r\n->led1 100000\r\nStatus=0\r\nendif\r\n\r\nif pwr[2]==1\r\nthen\r\n->led1 000099\r\n->buzzer 2\r\n->led1 000010\r\nStatus=2\r\nendif\r\n\r\nif pwr[1]==1\r\nthen\r\n->led1 999999\r\n->buzzer 1\r\n->led1 101010\r\nStatus=1\r\nendif"

#undef WS2812_LEDS
#define WS2812_LEDS            1    //Amount of LED's

#ifdef FRIENDLY_NAME
#undef FRIENDLY_NAME
#endif
#define FRIENDLY_NAME "Perilex"

#define USER_BACKLOG "script 1;SetOption111 1;SetOption1 1;SetOption73 1 1;SetOption13 1;FriendlyName1 Low;FriendlyName2 Medium;FriendlyName3 High;FriendlyName4 $Touch Control;FriendlyName5 $RGB LED;Wifi 3;SwitchDebounce 52;WebButton1 Low;WebButton2 Medium;WebButton3 High;WebButton4 Touch;WebButton5 RGB"
#endif


//-- MEEK MT3 ---------------------------
#ifdef FIRMWARE_MT3
#warning **** Build: MEEK MT3 ****
#undef CODE_IMAGE_STR
#define CODE_IMAGE_STR "Meek"

#ifdef MODULE
#undef MODULE
#endif
#define MODULE USER_MODULE

#ifdef FALLBACK_MODULE
#undef FALLBACK_MODULE
#endif
#define FALLBACK_MODULE USER_MODULE

#ifdef ESP8266
#define USER_TEMPLATE "{\"NAME\":\"Meek MT3\",\"GPIO\":[480,1,1376,1,224,225,1,1,161,162,160,226,227,1],\"FLAG\":0,\"BASE\":18}"
#endif

#define START_SCRIPT_FROM_BOOT
//----- https://jsonformatter.org/json-stringify-online -----
#define PRECONFIGURED_SCRIPT ">D\nout1=0\nout2=0\nout3=0\n\n>B\n->power4 0\n->PWMFrequency 4000\n->led1 101010\n->led2 101010\n->led3 101010\ndelay(1000)\n->led1 100000\ndelay(1000)\n->led2 100000\ndelay(1000)\n->led3 100000\ndelay(1000)\n->power4 1\n->led1 101010\n->led2 101010\n->led3 101010\nif pwr[1]==1\nthen ->led1 100010\nout1=1\nendif\nif pwr[2]==1\nthen ->led2 100010\nout2=1\nendif\nif pwr[3]==1\nthen ->led3 100010\nout3=1\nendif\n\n>P\nif pwr[3]!=out3\nthen\nif out3==0\nthen\n->led3 990099\n->buzzer 1\n->led3 100010\nout3=1\nbreak\nelse\n->led3 999999\n->buzzer 1\n->led3 101010\nout3=0\nbreak\nendif\nendif\n\nif pwr[2]!=out2\nthen\nif out2==0\nthen\n->led2 990099\n->buzzer 1\n->led2 100010\nout2=1\nbreak\nelse\n->led2 999999\n->buzzer 1\n->led2 101010\nout2=0\nbreak\nendif\nendif\n\nif pwr[1]!=out1\nthen\nif out1==0\nthen\n->led1 990099\n->buzzer 1\n->led1 100010\nout1=1\nbreak\nelse\n->led1 999999\n->buzzer 1\n->led1 101010\nout1=0\nbreak\nendif\nendif\n"

#undef WS2812_LEDS
#define WS2812_LEDS            3    //Amount of LED's

#ifdef FRIENDLY_NAME
#undef FRIENDLY_NAME
#endif
#define FRIENDLY_NAME "Touch 3"

#define USER_BACKLOG "script 1;SetOption111 1;SwitchMode1 4;SwitchMode2 4;SwitchMode3 4;SetOption13 1;FriendlyName1 Left;FriendlyName2 Center;FriendlyName3 Right;FriendlyName4 $Touch Control;FriendlyName5 $RGB LED;Wifi 3;SwitchDebounce 52;WebButton1 Left;WebButton2 Center;WebButton3 Right;WebButton4 Touch;WebButton5 RGB"
#endif

//-- MEEK MT2 ---------------------------
#ifdef FIRMWARE_MT2
#warning **** Build: MEEK MT2 ****
#undef CODE_IMAGE_STR
#define CODE_IMAGE_STR "Meek"

#ifdef MODULE
#undef MODULE
#endif
#define MODULE USER_MODULE

#ifdef FALLBACK_MODULE
#undef FALLBACK_MODULE
#endif
#define FALLBACK_MODULE USER_MODULE

#ifdef ESP8266
#define USER_TEMPLATE "{\"NAME\":\"Meek MT2\",\"GPIO\":[480,1,1376,1,225,224,1,1,0,161,160,0,226,1],\"FLAG\":0,\"BASE\":18}"
#endif

#define START_SCRIPT_FROM_BOOT
//----- https://jsonformatter.org/json-stringify-online -----
#define PRECONFIGURED_SCRIPT ">D\nout1=0\nout2=0\nout3=0\n\n>B\n->power4 0\n->PWMFrequency 4000\n->led1 101010\n->led2 101010\n->led3 101010\ndelay(1000)\n->led1 100000\ndelay(1000)\n->led2 100000\ndelay(1000)\n->led3 100000\ndelay(1000)\n->power4 1\n->led1 101010\n->led2 101010\n->led3 101010\nif pwr[1]==1\nthen ->led1 100010\nout1=1\nendif\nif pwr[2]==1\nthen ->led2 100010\nout2=1\nendif\nif pwr[3]==1\nthen ->led3 100010\nout3=1\nendif\n\n>P\nif pwr[3]!=out3\nthen\nif out3==0\nthen\n->led3 990099\n->buzzer 1\n->led3 100010\nout3=1\nbreak\nelse\n->led3 999999\n->buzzer 1\n->led3 101010\nout3=0\nbreak\nendif\nendif\n\nif pwr[2]!=out2\nthen\nif out2==0\nthen\n->led2 990099\n->buzzer 1\n->led2 100010\nout2=1\nbreak\nelse\n->led2 999999\n->buzzer 1\n->led2 101010\nout2=0\nbreak\nendif\nendif\n\nif pwr[1]!=out1\nthen\nif out1==0\nthen\n->led1 990099\n->buzzer 1\n->led1 100010\nout1=1\nbreak\nelse\n->led1 999999\n->buzzer 1\n->led1 101010\nout1=0\nbreak\nendif\nendif\n"

#undef WS2812_LEDS
#define WS2812_LEDS            2    //Amount of LED's

#ifdef FRIENDLY_NAME
#undef FRIENDLY_NAME
#endif
#define FRIENDLY_NAME "Touch 2"

#define USER_BACKLOG "script 1;SetOption111 1;SwitchMode1 4;SwitchMode2 4;SetOption13 1;FriendlyName1 Left;FriendlyName2 Right;FriendlyName3 $Touch Control;FriendlyName4 $RGB LED;Wifi 3;SwitchDebounce 52;WebButton1 Left;WebButton2 Right;WebButton3 Touch;WebButton4 RGB"
#endif

//-- MEEK MT1 ---------------------------
#ifdef FIRMWARE_MT1
#warning **** Build: MEEK MT1 ****
#undef CODE_IMAGE_STR
#define CODE_IMAGE_STR "Meek"

#ifdef MODULE
#undef MODULE
#endif
#define MODULE USER_MODULE

#ifdef FALLBACK_MODULE
#undef FALLBACK_MODULE
#endif
#define FALLBACK_MODULE USER_MODULE

#ifdef ESP8266
#define USER_TEMPLATE "{\"NAME\":\"Meek MT1\",\"GPIO\":[480,1,1376,1,0,224,1,1,160,0,0,0,225,1],\"FLAG\":0,\"BASE\":18}"
#endif

#define START_SCRIPT_FROM_BOOT
//----- https://jsonformatter.org/json-stringify-online -----
#define PRECONFIGURED_SCRIPT ">D\r\nout1=0\r\n>B\r\n->power2 0\r\n->PWMFrequency 4000\r\n->led1 101010\r\ndelay(1000)\r\n->led1 100000\r\ndelay(1000)\r\n->power2 1\r\n->led1 101010\r\nif pwr[1]==1\r\nthen ->led1 100010\r\nout1=1\r\nendif\r\n\r\n>P\r\nif pwr[1]!=out1\r\nthen\r\nif out1==0\r\nthen\r\n->led1 990099\r\n->buzzer 1\r\n->led1 100010\r\nout1=1\r\nbreak\r\nelse\r\n->led1 999999\r\n->buzzer 1\r\n->led1 101010\r\nout1=0\r\nbreak\r\nendif\r\nendif"

#undef WS2812_LEDS
#define WS2812_LEDS            1    //Amount of LED's

#ifdef FRIENDLY_NAME
#undef FRIENDLY_NAME
#endif
#define FRIENDLY_NAME "Touch 1"

#define USER_BACKLOG "script 1;SetOption111 1;SwitchMode1 4;SwitchMode2 4;SetOption13 1;FriendlyName1 Button;FriendlyName2 $Touch Control;FriendlyName3 $RGB LED;Wifi 3;SwitchDebounce 52;WebButton1 Button;WebButton2 Touch;WebButton3 RGB"
#endif

//-- MEEK DD ---------------------------
#ifdef FIRMWARE_DD
#warning **** Build: MEEK DD ****
#undef CODE_IMAGE_STR
#define CODE_IMAGE_STR "MEEK DD"

#ifdef PROJECT
#undef PROJECT
#endif
#define PROJECT "Meek_DD"

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

//-- DFPlayer minie ---------------------------
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

#undef WS2812_LEDS
#define WS2812_LEDS            250    //Amount of LED's

#ifdef ESP8266
#define USER_TEMPLATE "{\"NAME\":\"Meek DD\",\"GPIO\":[0,0,1376,3232,608,640,160,225,352,161,353,224,2144,1],\"FLAG\":0,\"BASE\":18}"
#endif

#define START_SCRIPT_FROM_BOOT
//----- https://jsonformatter.org/json-stringify-online -----
#define PRECONFIGURED_SCRIPT ">D\r\nmelody=1\r\nvolume=10\r\ndoorbell=0\r\n>W\r\nsl(1 25 melody \"1\" \"Melody\" \"25\")\r\nsl(0 100 volume \"0\" \"Volume\" \"100\")\r\nMelody:{m} %0melody%\r\nVolume:{m} %0volume%\r\n>BS\r\n+>subscribe volume, cmnd/%topic%/volume\r\n+>subscribe melody, cmnd/%topic%/melody\r\n>S\r\nif chg[volume]> 0 {\r\n=>publish stat/%topic%/RESULT {\"volume\":\"%0volume%\"}\r\n=>mp3volume %volume%\r\nprint Volume changed to level: %0volume%\r\n}\r\nif chg[melody]> 0 {\r\n=>publish stat/%topic%/RESULT {\"melody\":\"%0melody%\"}\r\n=>mp3track %melody%\r\nprint Melody selection updated to song: %0melody%\r\n}\r\n\r\n>T\r\ndoorbell=pwr[2]\r\nif doorbell==1\r\nthen\r\n=>mp3play %melody%\r\nprint Someone is at the door!\r\nendif"

#ifdef FRIENDLY_NAME
#undef FRIENDLY_NAME
#endif
#define FRIENDLY_NAME "Meek DD"
#define USER_BACKLOG "SwitchMode1 4;SwitchMode2 4;PulseTime2 25;SerialDelimiter 10;SerialSend 1;Wifi 3;FriendlyName1 Relay;WebButton1 Relay;FriendlyName2 DoorBell;WebButton2 DoorBell;FriendlyName3 $RGB;WebButton3 RGB"

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

#ifdef PROJECT
#undef PROJECT
#endif
#define PROJECT "Meek_Zigbee"

#ifdef MQTT_TOPIC
#undef MQTT_TOPIC
#endif
#define MQTT_TOPIC             PROJECT

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
//----- https://jsonformatter.org/json-stringify-online -----
#define PRECONFIGURED_SCRIPT ">D\nButton1=0\nButton2=0\nButton3=0\n\n>B\n->power4 0\n->PWMFrequency 4000\n->led1 101010\n->led2 101010\n->led3 101010\n->led4 101010\ndelay(1000)\n->led1 100000\ndelay(1000)\n->led2 100000\ndelay(1000)\n->led3 100000\ndelay(1000)\n->led4 100000\ndelay(1000)\n->led1 101010\n->led2 101010\n->led3 101010\n->led4 101010\n\n>b\nButton1=bt[1]\nButton2=bt[2]\nButton3=bt[3]\n\nif Button1==1\nthen ->scheme 12\n->buzzer 37 1 15\nelse\n->scheme 0\nendif\n\nif Button3==1\nthen ->ZbPermitJoin 1\nendif"

#ifdef FRIENDLY_NAME
#undef FRIENDLY_NAME
#endif
#define FRIENDLY_NAME "Zigbee Gateway"
#define USER_BACKLOG "Wifi 3;script 1;SetOption1 1;SetOption13 1;SetOption111 1;SwitchMode1 15;SwitchMode2 15;SwitchMode3 15"
#endif

#endif  // _USER_CONFIG_OVERRIDE_H_
