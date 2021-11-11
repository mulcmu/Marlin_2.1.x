### 2021-11-11 MARLIN 2.0.9.2 OFFICIAL RELEASE

Each firmware has a header that corresponds to the hardware (board) and functions used in the firmware.
Below is an example with the firmware for a Q5 printer with a Mks_Robin_nanov1.2 board with TMC2208 and A4988 stepper drivers:

**Exemple:**
9rWBPULR-MoBo.bin => Q5 or QQS with other MotherBoard.
=> - (9)4xTMC2208 standalone - 
   - (r)UI for BTT screen - 
   - (W)Wifi module - 
   - (B)Extruder BMG - 
   - (P)PreHeat bed - 
   - (U)Leveling mode -
   - (L)LinearAdvance - 
   - (R)Arc function enabled.

  **Note**: After choosing your binary, remove the "8CWBL-SRKxx" header or rename the file to "firmware.bin" for QQS-SKR,
  place it on your SD card, insert your SD card into the printer and power on your printer.

  **/*-------Others Firmwares for QQS with SKR family or Mks_Nano Family----*/**
  - (QQS)U9rTPULR16-SKR14T_firmware   QQS SKR14T(4xTMC2209UART)16steps with TITAN extruder. 
  - (QQS)U8rBPUR32-SKR12PRO_firmware  QQS SKR12PRO(4xTMC2208_standAlone)32steps without LA, with BMG extruder.
  - (QQS)U9rTPULR16-SKR14_firmware QQS with SKRv1.4 Board with emulation LCD (Marlin Mode)
  
  **Caption:**

  **/*------Drivers--------*/**
  - (S) A4988 (green/red)
  - (8) TMC2208 Standalone
  - (9) TMC2209 Standalone
  - (U8) 4xTMC2208_UART with no module ESP12.
  - (U9) 4xTMC2209_UART with no module ESP12.
  - (U8+) 3xTMC2208 (XYZ) + Choice for E0 (A4988,TMC220x) 
  - (U9+) 3xTMC2209 (XYZ) + Choice for E0 (A4988,TMC220x)
  - **(UH) 4xTMC2209_UART with one wire (option modules Wifi/Rpi/Neopixel)**
  - (16) All drivers 16steps
  - (32) All drivers 32steps

  **/*-------Options UI TFT--------*/**
  - (F) UI STANDARD (Emulation LCD screen on TFT)
  - (C) UI MARLIN (TFT Color screen)
  - (I) UI MKS (TFT Color screen>=480x320 use Lvgl/NANOv2-3)
  - (r) UI STANDARD (Marlin Mode on TFT FOR SKR/NANOv2-3)

  **/*------Modules--------*/**
  - (N) NeoPixel (management of led strips)
  - (W) Module ESP8266/ESP12 (infos at the middle of the page)
  - (w) Module ESP8266/ESP12 with ESP3Dv3.0 Firmware.
  - (T) Extruder Titan
  - (B) Extruder BMG (Also reverse the extruder direction)
  - (n) Extruder Nema14 (SuperDriveHX/Mini-Sherpa...)
  
  **/*-------Others options in firmware----*/**
  - (G) SENSORLESS_HOMING (Only 2209)
  - (g) SENSORLESS_PROBING (Only 2209)
  - (A) BED_LEVELING_BILINEAR
  - (U) BED_LEVELING_UBL
  - (P) PreHeat bed before leveling
  - (R) ARC_SUPPORT
  - (L) Linear Advance (Possible Bug with BabyStep and TMC2208)
  
  **/*-------Others options for advanced users who build their firmware----*/**
  - HOST_ACTION_COMMANDS (Action Command Prompt support Message on OctoPrint) 
  - (M) MEATPACK (Improve dialogue/communication with OctoPrint)
  - BINARY_FILE_TRANSFER
  - TEMP_SENSOR_0 (After changed the thermitor nozzle)
  - LCD_LANGUAGE (Change to the native language)
  - etc 
  
***
