### 2021-11-11 MARLIN 2.0.9.2 OFFICIAL RELEASE
 
 - Q5 STOCK With 3xTMC2208 + 1xA4988 = Q5_STOCK-Robin_nano.bin

Each firmware has a header that corresponds to the hardware (board) and functions used in the firmware.
Below is an example with the firmware for a Q5 printer with a Mks_Robin_nanov1.2 board with TMC2208 and A4988 stepper drivers:

**Exemple:**
8+SCWTPULR-Robin_nano.bin => Q5 Stock
=> - (8+S)TMC2208 standalone(XYZ) + A4988(E0) - 
   - (C)UI Marlin TFT32 - 
   - (W)Wifi module - 
   - (T)Extruder Titan - 
   - (P)PreHeat bed - 
   - (U)Leveling mode -
   - (L)LinearAdvance - 
   - (R)Arc function enabled.

  **Note**: After choosing your binary, remove the "8+SCWTPULR-" header or rename the file to "Robin_nano.bin" for Q5,
  place it on your SD card, insert your SD card into the printer and power on your printer.

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

  **/*-------Options UI TFT--------*/**
  - (F) UI STANDARD (Emulation LCD screen on TFT)
  - (C) UI MARLIN (TFT Color screen)
  - (I) UI MKS (TFT Color screen>=480x320 use Lvgl/NANOv2-3)
  - (r) UI STANDARD (Marlin Mode on TFT FOR SKR/NANOv2-3 include BTT's TFT)

  **/*------Modules--------*/**
  - (N) NeoPixel (management of led strips)
  - (W) Module ESP8266/ESP12 (infos at the middle of the page)
  - (w) Module ESP8266/ESP12 with ESP3Dv3.0 Firmware.
  - (T) Extruder Titan
  - (B) Extruder BMG
  - (b) Extruder BMG mini
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
  
  **/*-------Others Firmwares for Q5 nanov1.2 or QQS with SKR family or Mks_Nano Family----*/**
  - (Q5_8+SCTPULR-Robin_nano)   Q5 Stock(3xTMC2208+1xA4988) with TITAN extruder. 
  - (Q5_9CBPULR-Robin_nano)     Q5 with 4xTMC2209 with BMG extruder.
  - (QQS)U9rTPULR16-SKR14_firmware QQS with SKRv1.4 Board with emulation LCD (Marlin Mode)
***
