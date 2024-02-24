/*
PASTE FOLLOWING IN "platformio_tasmota_cenv.ini"
-------------------------------------------
[env:tasmota-mt3]
build_flags = ${env.build_flags} -DFIRMWARE_MT3
board = esp8266_4M2M

[env:tasmota-mt2]
build_flags = ${env.build_flags} -DFIRMWARE_MT2
board = esp8266_4M2M

[env:tasmota-md2]
build_flags = ${env.build_flags} -DFIRMWARE_MD2
board = esp8266_4M2M

[env:tasmota-mt1]
build_flags = ${env.build_flags} -DFIRMWARE_MT1
board = esp8266_4M2M

[env:tasmota-mp1]
build_flags = ${env.build_flags} -DFIRMWARE_MP1
board = esp8266_4M2M

[env:tasmota-dd32]
extends                 = env:tasmota32_base
build_flags             = ${env:tasmota32_base.build_flags} -DFIRMWARE_DD32
board                   = esp32

[env:tasmota-zigbee32]
extends                 = env:tasmota32_base
build_flags             = ${env:tasmota32_base.build_flags} -DFIRMWARE_ZIGBEE32
board                   = esp32

[env:tasmota-perilex]
build_flags = ${env.build_flags} -DFIRMWARE_PERILEX
board                   = esp8266_4M2M

[env:tasmota-master-gang2]
build_flags = ${env.build_flags} -DFIRMWARE_MG2
board = esp8266_4M2M

[env:tasmota-master-gang1]
build_flags = ${env.build_flags} -DFIRMWARE_MG1
board = esp8266_4M2M
-------------------------------------------
*/

#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

#undef WIFI_CONFIG_TOOL
#define WIFI_CONFIG_TOOL       WIFI_MANAGER        // [WifiConfig] Default tool if Wi-Fi fails to connect (default option: 4 - WIFI_RETRY)
                                                 // (WIFI_RESTART, WIFI_MANAGER, WIFI_RETRY, WIFI_WAIT, WIFI_SERIAL, WIFI_MANAGER_RESET_ONLY)
#undef WIFI_NO_SLEEP
#define WIFI_NO_SLEEP          true             // [SetOption127] Sets Wifi in no-sleep mode which improves responsiveness on some routers

#undef ROTARY_V1
#undef USE_SONOFF_RF
#undef USE_RF_FLASH
#undef USE_SONOFF_SC
#undef USE_TUYA_MCU
#undef TUYA_DIMMER_ID
#undef USE_TUYA_TIME
#undef USE_ARMTRONIX_DIMMERS
#undef USE_PS_16_DZ
#undef USE_SONOFF_IFAN
#undef USE_ARILUX_RF
#undef USE_SHUTTER
#undef USE_DEEPSLEEP
#undef USE_EXS_DIMMER
#undef USE_PWM_DIMMER
#undef USE_PWM_DIMMER_REMOTE
#undef USE_SONOFF_D1
#undef USE_SHELLY_DIMMER
#undef SHELLY_CMDS
#undef SHELLY_FW_UPGRADE
#undef USE_MY92X1
#undef USE_SM16716
#undef USE_SM2135
#undef USE_SM2335
#undef USE_BP1658CJ
#undef USE_BP5758D
#undef USE_SONOFF_L1
#undef USE_ELECTRIQ_MOODL
#undef USE_LIGHT_PALETTE
#undef USE_LIGHT_VIRTUAL_CT
#undef USE_DGR_LIGHT_SEQUENCE
#undef USE_DS18x20
#undef USE_I2C
#undef USE_SERIAL_BRIDGE
#undef USE_ENERGY_SENSOR
#undef USE_ENERGY_MARGIN_DETECTION
#undef USE_ENERGY_POWER_LIMIT
#undef USE_ENERGY_DUMMY
#undef USE_HLW8012
#undef USE_CSE7766
#undef USE_PZEM004T
#undef USE_PZEM_AC
#undef USE_PZEM_DC
#undef USE_MCP39F501
#undef USE_DHT
#undef USE_IR_REMOTE
#undef USE_IR_RECEIVE

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
#undef USE_RULES
#undef USE_EXPRESSION
#undef SUPPORT_IF_STATEMENT

//-- Enable script & extensions  ---------------------------
#define USE_SCRIPT                               // Add support for script (+17k code)
    #define USE_SCRIPT_FATFS 4                     // Script: Add FAT FileSystem Support
    #define SUPPORT_MQTT_EVENT                     // Support trigger event with MQTT subscriptions (+3k5 code)
    #define USE_SCRIPT_WEB_DISPLAY
    #define SCRIPT_POWER_SECTION
    #define USE_SCRIPT_SUB_COMMAND
    #define USE_BUTTON_EVENT

//-- TLS ---------------------------
#define USE_MQTT_TLS
#define USE_MQTT_TLS_CA_CERT
#define USE_MQTT_TLS_FORCE_EC_CIPHER
#define USE_MQTT_TLS_DROP_OLD_FINGERPRINT

//-- Telegram Protocol ---------------------------
#define USE_TELEGRAM
#define USE_TELEGRAM_FINGERPRINT "\xB2\x72\x47\xA6\x69\x8C\x3C\x69\xF9\x58\x6C\xF3\x60\x02\xFB\x83\xFA\x8B\x1F\x23"

// -- Ping ----------------------------------------
#define USE_PING

//########## MEEK MT3 ##########
#ifdef FIRMWARE_MT3
#warning **** Build: MEEK MT3 ****
#undef CODE_IMAGE_STR
#define CODE_IMAGE_STR "Meek"

#undef FRIENDLY_NAME
#define FRIENDLY_NAME "Touch 3"

#undef MODULE
#define MODULE USER_MODULE
#undef FALLBACK_MODULE
#define FALLBACK_MODULE USER_MODULE

#define USER_TEMPLATE "{\"NAME\":\"Meek MT3\",\"GPIO\":[480,1,1376,1,225,226,1,1,161,162,160,224,227,1],\"FLAG\":0,\"BASE\":18}"
#define START_SCRIPT_FROM_BOOT
//----- https://jsonformatter.org/json-stringify-online -----
#define PRECONFIGURED_SCRIPT ">D\nout1=0\nout2=0\nout3=0\n\n>B\n->power4 0\n->PWMFrequency 4000\n->led1 101010\n->led2 101010\n->led3 101010\ndelay(1000)\n->led1 100000\ndelay(1000)\n->led2 100000\ndelay(1000)\n->led3 100000\ndelay(1000)\n->power4 1\n->led1 101010\n->led2 101010\n->led3 101010\nif pwr[1]==1\nthen ->led1 100010\nout1=1\nendif\nif pwr[2]==1\nthen ->led2 100010\nout2=1\nendif\nif pwr[3]==1\nthen ->led3 100010\nout3=1\nendif\n\n>P\nif pwr[3]!=out3\nthen\nif out3==0\nthen\n->led3 990099\n->buzzer 1\n->led3 100010\nout3=1\nbreak\nelse\n->led3 999999\n->buzzer 1\n->led3 101010\nout3=0\nbreak\nendif\nendif\n\nif pwr[2]!=out2\nthen\nif out2==0\nthen\n->led2 990099\n->buzzer 1\n->led2 100010\nout2=1\nbreak\nelse\n->led2 999999\n->buzzer 1\n->led2 101010\nout2=0\nbreak\nendif\nendif\n\nif pwr[1]!=out1\nthen\nif out1==0\nthen\n->led1 990099\n->buzzer 1\n->led1 100010\nout1=1\nbreak\nelse\n->led1 999999\n->buzzer 1\n->led1 101010\nout1=0\nbreak\nendif\nendif\n"
#define USER_BACKLOG "script 1;SetOption111 1;SwitchMode1 4;SwitchMode2 4;SwitchMode3 4;SetOption13 1;FriendlyName1 Left;FriendlyName2 Center;FriendlyName3 Right;FriendlyName4 $Touch Control;FriendlyName5 $RGB LED;Wifi 3;SwitchDebounce 52;WebButton1 Left;WebButton2 Center;WebButton3 Right;WebButton4 Touch;WebButton5 RGB;power4 1;power5 1"

//-- Modules ---------------------------
#undef WS2812_LEDS
#define WS2812_LEDS            3    //Amount of LED's
#endif
//########## MEEK MT3 ##########

//########## MEEK MT2 ##########
#ifdef FIRMWARE_MT2
#warning **** Build: MEEK MT2 ****
#undef CODE_IMAGE_STR
#define CODE_IMAGE_STR "Meek"

#undef FRIENDLY_NAME
#define FRIENDLY_NAME "Touch 2"

#undef MODULE
#define MODULE USER_MODULE
#undef FALLBACK_MODULE
#define FALLBACK_MODULE USER_MODULE

#define USER_TEMPLATE "{\"NAME\":\"Meek MT2\",\"GPIO\":[480,1,1376,1,225,224,1,1,0,161,160,0,226,1],\"FLAG\":0,\"BASE\":18}"
#define START_SCRIPT_FROM_BOOT
//----- https://jsonformatter.org/json-stringify-online -----
#define PRECONFIGURED_SCRIPT ">D\r\nout1=0\r\nout2=0\r\n\r\n>B\r\n->power4 0\r\n->PWMFrequency 4000\r\n->led1 101010\r\n->led2 101010\r\ndelay(1000)\r\n->led1 100000\r\ndelay(1000)\r\n->led2 100000\r\ndelay(1000)\r\n->power4 1\r\n->led1 101010\r\n->led2 101010\r\nif pwr[1]==1\r\nthen ->led1 100010\r\nout1=1\r\nendif\r\nif pwr[2]==1\r\nthen ->led2 100010\r\nout2=1\r\nendif\r\n\r\n>P\r\nif pwr[2]!=out2\r\nthen\r\nif out2==0\r\nthen\r\n->led2 990099\r\n->buzzer 1\r\n->led2 100010\r\nout2=1\r\nbreak\r\nelse\r\n->led2 999999\r\n->buzzer 1\r\n->led2 101010\r\nout2=0\r\nbreak\r\nendif\r\nendif\r\n\r\nif pwr[1]!=out1\r\nthen\r\nif out1==0\r\nthen\r\n->led1 990099\r\n->buzzer 1\r\n->led1 100010\r\nout1=1\r\nbreak\r\nelse\r\n->led1 999999\r\n->buzzer 1\r\n->led1 101010\r\nout1=0\r\nbreak\r\nendif\r\nendif"
#define USER_BACKLOG "script 1;SetOption111 1;SwitchMode1 4;SwitchMode2 4;SetOption13 1;FriendlyName1 Left;FriendlyName2 Right;FriendlyName3 $Touch Control;FriendlyName4 $RGB LED;Wifi 3;SwitchDebounce 52;WebButton1 Left;WebButton2 Right;WebButton3 Touch;WebButton4 RGB;power3 1;power4 1"

//-- Modules ---------------------------
#undef WS2812_LEDS
#define WS2812_LEDS            2    //Amount of LED's
#endif
//########## MEEK MT2 ##########

//########## MEEK MT1 ##########
#ifdef FIRMWARE_MT1
#warning **** Build: MEEK MT1 ****
#undef CODE_IMAGE_STR
#define CODE_IMAGE_STR "Meek"

#undef FRIENDLY_NAME
#define FRIENDLY_NAME "Touch 1"

#undef MODULE
#define MODULE USER_MODULE
#undef FALLBACK_MODULE
#define FALLBACK_MODULE USER_MODULE

#define USER_TEMPLATE "{\"NAME\":\"Meek MT1\",\"GPIO\":[480,1,1376,1,0,224,1,1,160,0,0,0,225,1],\"FLAG\":0,\"BASE\":18}"
#define START_SCRIPT_FROM_BOOT
//----- https://jsonformatter.org/json-stringify-online -----
#define PRECONFIGURED_SCRIPT ">D\r\nout1=0\r\n>B\r\n->power2 0\r\n->PWMFrequency 4000\r\n->led1 101010\r\ndelay(1000)\r\n->led1 100000\r\ndelay(1000)\r\n->power2 1\r\n->led1 101010\r\nif pwr[1]==1\r\nthen ->led1 100010\r\nout1=1\r\nendif\r\n\r\n>P\r\nif pwr[1]!=out1\r\nthen\r\nif out1==0\r\nthen\r\n->led1 990099\r\n->buzzer 1\r\n->led1 100010\r\nout1=1\r\nbreak\r\nelse\r\n->led1 999999\r\n->buzzer 1\r\n->led1 101010\r\nout1=0\r\nbreak\r\nendif\r\nendif"
#define USER_BACKLOG "script 1;SetOption111 1;SwitchMode1 4;SwitchMode2 4;SetOption13 1;FriendlyName1 Button;FriendlyName2 $Touch Control;FriendlyName3 $RGB LED;Wifi 3;SwitchDebounce 52;WebButton1 Button;WebButton2 Touch;WebButton3 RGB;power2 1;power3 1"

//-- Modules ---------------------------
#undef WS2812_LEDS
#define WS2812_LEDS            1    //Amount of LED's
#endif
//########## MEEK MT1 ##########

//########## MEEK DD ESP32 ##########
#ifdef FIRMWARE_DD32
#warning **** Build: MEEK DD ESP32 ****
#undef CODE_IMAGE_STR
#define CODE_IMAGE_STR "Meek"

#undef FRIENDLY_NAME
#define FRIENDLY_NAME "Meek DD32"

#undef PROJECT
#define PROJECT "Meek_DD32"

#undef MODULE
#define MODULE USER_MODULE
#undef FALLBACK_MODULE
#define FALLBACK_MODULE USER_MODULE

#undef MQTT_TOPIC
#define MQTT_TOPIC             PROJECT

#define USER_TEMPLATE "{\"NAME\":\"Meek DD32\",\"GPIO\":[225,0,0,0,0,0,0,0,0,1376,354,0,32,0,2144,0,0,0,5472,5504,0,224,352,353,0,0,0,0,608,640,0,4704,0,0,0,0],\"FLAG\":0,\"BASE\":1}"
#define START_SCRIPT_FROM_BOOT
//----- https://jsonformatter.org/json-stringify-online -----
#define PRECONFIGURED_SCRIPT ">D\r\np:melody=1\r\np:volume=10\r\np:DD=2\r\nbutton=0\r\ntimer=0\r\nplay=0\r\n\r\n>B\r\n->led1 101010\r\ndelay(1000)\r\n->led1 100000\r\n\r\n>W\r\nsl(1 50 melody \"1\" \"Melody %0melody%\" \"50\")\r\nsl(0 100 volume \"0\" \"Volume %0volume%\" \"100\")\r\nsl(0 20 DD \"0\" \"Delay %0DD%\" \"20\")\r\nbu(play \"Play\")\r\n\r\n>BS\r\n+>subscribe volume, cmnd/%topic%/volume\r\n+>subscribe melody, cmnd/%topic%/melody\r\n\r\n>S\r\nif chg[volume]> 0 {\r\n=>publish stat/%topic%/RESULT {\"volume\":\"%0volume%\"}\r\n=>mp3volume %volume%\r\nprint Volume changed to level: %0volume%\r\n}\r\nif chg[melody]> 0 {\r\n=>publish stat/%topic%/RESULT {\"melody\":\"%0melody%\"}\r\nprint Melody selection updated to track: %0melody%\r\n}\r\n\r\nif play==1\r\nthen\r\n=>MP3Track %0melody%\r\nplay=0\r\nendif\r\n\r\nif upsecs-timer>DD\r\nand pwr[2]==1\r\nthen\r\n=>power2 0\r\nendif\r\n\r\n>b\r\nbutton=bt[1]\r\nif pwr[2]==0\r\nthen  \r\nprint Someone is at the door!\r\ntimer=upsecs+DD\r\n=>MP3Track %0melody%\r\n=>power2 1\r\nendif"
#define USER_BACKLOG "SetOption1 1;SetOption13 1;SetOption73 1;SwitchMode1 15;SwitchMode2 15;FriendlyName1 Doorbell;WebButton1 Doorbell;WebButton2 Button;FriendlyName2 Button;WebButton3 RGB;FriendlyName3 RGB;Power3 1;script >volume=15;script >melody=1;script >DD=2"

//-- Modules ---------------------------
#define USE_SERIAL_BRIDGE
#define USE_TCP_BRIDGE
#define USE_I2C
#define USE_SML_M
#define USE_MP3_PLAYER
#undef WS2812_LEDS
#define WS2812_LEDS            250    //Amount of LED's
#endif
//########## MEEK DD ESP32 ##########

//########## MEEK ZIGBEE ESP32 ##########
#ifdef FIRMWARE_ZIGBEE32
#warning **** Build: MEEK ZIGBEE ESP32 ****
#undef CODE_IMAGE_STR
#define CODE_IMAGE_STR "Meek"

#undef FRIENDLY_NAME
#define FRIENDLY_NAME "Zigbee Gateway"

#undef PROJECT
#define PROJECT "Meek_Zigbee"

#undef MODULE
#define MODULE USER_MODULE
#undef FALLBACK_MODULE
#define FALLBACK_MODULE USER_MODULE

#undef MQTT_TOPIC
#define MQTT_TOPIC             PROJECT

#define USER_TEMPLATE "{\"NAME\":\"Meek Zigbee\",\"GPIO\":[0,0,0,0,34,0,0,0,0,1376,0,0,5792,0,0,33,0,0,0,0,0,32,480,256,0,0,0,0,3552,3584,0,0,0,0,0,0],\"FLAG\":0,\"BASE\":1}"
#define START_SCRIPT_FROM_BOOT
//----- https://jsonformatter.org/json-stringify-online -----
#define PRECONFIGURED_SCRIPT ">D\nButton1=0\nButton2=0\nButton3=0\n\n>B\n->power4 0\n->PWMFrequency 4000\n->led1 101010\n->led2 101010\n->led3 101010\n->led4 101010\ndelay(1000)\n->led1 100000\ndelay(1000)\n->led2 100000\ndelay(1000)\n->led3 100000\ndelay(1000)\n->led4 100000\ndelay(1000)\n->led1 101010\n->led2 101010\n->led3 101010\n->led4 101010\n\n>b\nButton1=bt[1]\nButton2=bt[2]\nButton3=bt[3]\n\nif Button1==1\nthen ->scheme 12\n->buzzer 3\nelse\n->scheme 0\nendif\n\nif Button3==1\nthen ->ZbPermitJoin 1\nendif"
#define USER_BACKLOG "Wifi 3;script 1;SetOption1 1;SetOption73 1;SetOption111 1;FriendlyName2 RGB;WebButton2 RGB;WebButton1 BSL;FriendlyName1 BSL;power1 0;power2 1"

//-- Modules ---------------------------
#define USE_SERIAL_BRIDGE
#define USE_TCP_BRIDGE
#define USE_ZIGBEE
#undef WS2812_LEDS
#define WS2812_LEDS            4    //Amount of LED's
#endif
//########## MEEK ZIGBEE ESP32 ##########


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

//-- MEEK MASTER GANG2 ---------------------------
#ifdef FIRMWARE_MG2
#warning **** Build: MEEK MASTER GANG2 ****
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
#define USER_TEMPLATE "{\"NAME\":\"Meek MG2\",\"GPIO\":[480,1,1376,1,224,160,1,1,0,161,164,225,226,1],\"FLAG\":0,\"BASE\":18}"
#endif

#define START_SCRIPT_FROM_BOOT
//----- https://jsonformatter.org/json-stringify-online -----
#define PRECONFIGURED_SCRIPT ">D\r\nout1=0\r\nout2=0\r\n\r\n>B\r\n->power3 0\r\n->PWMFrequency 4000\r\n->led1 101010\r\n->led2 101010\r\ndelay(1000)\r\n->led1 100000\r\ndelay(1000)\r\n->led2 100000\r\ndelay(1000)\r\n->power3 1\r\n->led1 101010\r\n->led2 101010\r\nif pwr[1]==1\r\nthen ->led1 100010\r\nout1=1\r\nendif\r\nif pwr[2]==1\r\nthen ->led2 100010\r\nout2=1\r\nendif\r\n\r\n>P\r\nif pwr[2]!=out2\r\nthen\r\nif out2==0\r\nthen\r\n->led2 990099\r\n->buzzer 1\r\n->led2 100010\r\nout2=1\r\nbreak\r\nelse\r\n->led2 999999\r\n->buzzer 1\r\n->led2 101010\r\nout2=0\r\nbreak\r\nendif\r\nendif\r\n\r\nif pwr[1]!=out1\r\nthen\r\nif out1==0\r\nthen\r\n->led1 990099\r\n->buzzer 1\r\n->led1 100010\r\nout1=1 #->websend [ip MG-Slave] led2 100010\r\nbreak\r\nelse\r\n->led1 999999\r\n->buzzer 1\r\n->led1 101010\r\nout1=0 #->websend [ip MG-Slave] led2 101010\r\nbreak\r\nendif\r\nendif"

#undef WS2812_LEDS
#define WS2812_LEDS            2    //Amount of LED's

#ifdef FRIENDLY_NAME
#undef FRIENDLY_NAME
#endif
#define FRIENDLY_NAME "Master Gang 2"

#define USER_BACKLOG "script 1;SetOption111 1;SwitchMode1 3;SwitchMode2 4;SwitchMode5 3;SetOption13 1;SetOption1 1;FriendlyName1 Left;FriendlyName2 Right;FriendlyName3 $Touch Control;FriendlyName4 $RGB LED;Wifi 3;SwitchDebounce 52;WebButton1 Left;WebButton2 Right;WebButton3 Touch;WebButton4 RGB;power3 1;power4 1"
#endif

//########## MEEK Dimmer1 ##########
#ifdef FIRMWARE_MD1
#warning **** Build: MEEK Dimmer1 ****
#undef CODE_IMAGE_STR
#define CODE_IMAGE_STR "Meek"

#undef FRIENDLY_NAME
#define FRIENDLY_NAME "Dimmer 1"

#ifdef MODULE
#undef MODULE
#endif
#define MODULE USER_MODULE

#define USE_PWM_DIMMER

#define USE_PWM_DIMMER_REMOTE

#ifdef FALLBACK_MODULE
#undef FALLBACK_MODULE
#endif
#define FALLBACK_MODULE USER_MODULE

#ifdef ESP8266
#define USER_TEMPLATE "{\"NAME\":\"Meek MD1\",\"GPIO\":[0,0,0,0,352,355,1,1,0,161,160,416,226,1],\"FLAG\":0,\"BASE\":18}"
#endif

#define START_SCRIPT_FROM_BOOT
//----- https://jsonformatter.org/json-stringify-online -----
//#define PRECONFIGURED_SCRIPT ">D\r\nout1=0\r\n>B\r\n->power2 0\r\n->PWMFrequency 4000\r\n->led1 101010\r\ndelay(1000)\r\n->led1 100000\r\ndelay(1000)\r\n->power2 1\r\n->led1 101010\r\nif pwr[1]==1\r\nthen ->led1 100010\r\nout1=1\r\nendif\r\n\r\n>P\r\nif pwr[1]!=out1\r\nthen\r\nif out1==0\r\nthen\r\n->led1 990099\r\n->buzzer 1\r\n->led1 100010\r\nout1=1\r\nbreak\r\nelse\r\n->led1 999999\r\n->buzzer 1\r\n->led1 101010\r\nout1=0\r\nbreak\r\nendif\r\nendif"

#undef WS2812_LEDS
#define WS2812_LEDS            1    //Amount of LED's

#define USER_BACKLOG "script 1;Wifi 3"
//#define USER_BACKLOG "script 1;SetOption111 1;SwitchMode1 4;SwitchMode2 4;SetOption13 1;FriendlyName1 Button;FriendlyName2 $Touch Control;FriendlyName3 $RGB LED;Wifi 3;SwitchDebounce 52;WebButton1 Button;WebButton2 Touch;WebButton3 RGB;power2 1;power3 1"
#endif
//########## MEEK Dimmer1 ##########

//########## MEEK MD2 ##########
#ifdef FIRMWARE_MD2
#warning **** Build: MEEK MD2 ****
#undef CODE_IMAGE_STR
#define CODE_IMAGE_STR "Meek"

#undef MODULE
#define MODULE USER_MODULE
#undef FALLBACK_MODULE
#define FALLBACK_MODULE USER_MODULE


#define USE_PWM_DIMMER
#define USE_PWM_DIMMER_REMOTE

#define USER_TEMPLATE "{\"NAME\":\"Meek MD2\",\"GPIO\":[480,1,1376,1,225,224,1,1,0,161,160,0,226,1],\"FLAG\":0,\"BASE\":18}"


#define START_SCRIPT_FROM_BOOT
//----- https://jsonformatter.org/json-stringify-online -----
#define PRECONFIGURED_SCRIPT ">D\r\nout1=0\r\nout2=0\r\n\r\n>B\r\n->power4 0\r\n->PWMFrequency 4000\r\n->led1 101010\r\n->led2 101010\r\ndelay(1000)\r\n->led1 100000\r\ndelay(1000)\r\n->led2 100000\r\ndelay(1000)\r\n->power4 1\r\n->led1 101010\r\n->led2 101010\r\nif pwr[1]==1\r\nthen ->led1 100010\r\nout1=1\r\nendif\r\nif pwr[2]==1\r\nthen ->led2 100010\r\nout2=1\r\nendif\r\n\r\n>P\r\nif pwr[2]!=out2\r\nthen\r\nif out2==0\r\nthen\r\n->led2 990099\r\n->buzzer 1\r\n->led2 100010\r\nout2=1\r\nbreak\r\nelse\r\n->led2 999999\r\n->buzzer 1\r\n->led2 101010\r\nout2=0\r\nbreak\r\nendif\r\nendif\r\n\r\nif pwr[1]!=out1\r\nthen\r\nif out1==0\r\nthen\r\n->led1 990099\r\n->buzzer 1\r\n->led1 100010\r\nout1=1\r\nbreak\r\nelse\r\n->led1 999999\r\n->buzzer 1\r\n->led1 101010\r\nout1=0\r\nbreak\r\nendif\r\nendif"

#undef WS2812_LEDS
#define WS2812_LEDS            2    //Amount of LED's

#ifdef FRIENDLY_NAME
#undef FRIENDLY_NAME
#endif
#define FRIENDLY_NAME "Dimmer 2"

#define USER_BACKLOG "Wifi 3"
#endif

#endif  // _USER_CONFIG_OVERRIDE_H_
