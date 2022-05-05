### 2022-04-05 MARLIN 2.0.10 RELEASE BUGFIX

Each firmware has a header that corresponds to the hardware (board) and functions used in the firmware.

**ADD:**
  - Pack Firmware for BTT-TFT35/50/70 mode landscape and portrait for TFT35v3. 
  
- BTT-TFT35v3,
  
  <img width=400 src="https://github.com/Foxies-CSTL/Marlin_2.0.x/wiki/menus/SR-TFT35v3.png" />

- Mks-TS35R,
  
  <img width=700 src="https://github.com/Foxies-CSTL/Marlin_2.0.x/wiki/menus/SR-TS35R.png" />


Below is an example with the firmware for a SR printer (STOCK) with a Mks_Robin_nanoV3 board with 4xTMC2209 drivers and BTT TFT:

**Exemple:**
SRM-SCBPULR32-Robin_nano_v3.bin
=> SRM = SR with MKS Nano_V3 board.
   SRB = SR with BTT Skr_v1.3 board.
  - (S)4xTMC2209 in UART mode - Stock
  - (C)UI Color Marlin RepRap TFT - (Mks-TS35R)  
  - (B)Extruder BMG
  - (P)PreHeat bed (60°C) 
  - (U)Leveling mode UBL
  - (L)LinearAdvance enabled
  - (R)Arc function enabled
  - (32) All axes in 32 steps instead of 16 steps.

  **Note**: After choosing your binary, remove the "SRM-SCBPULR32-" header or rename the file to "Robin_nano_v3.bin" for SR-MKS,
  place it on your SD card, insert your SD card into the printer and power on your printer.
  
  After the flash and to configure and prepare your printer, please follow the steps on the Wiki => [HERE](https://github.com/Foxies-CSTL/Marlin_2.0.x/wiki/2.SETTINGS-THE-PRINTER)
  
  **/*-------Others Firmwares for QQS with SKR family or Mks_Nano Family----*/**
  - (QQS)U9rTPULR16-SKR14T_firmware   QQS SKR14T(4xTMC2209UART)16steps with TITAN extruder. 
  - (QQS)U8rBPUR32-SKR12PRO_firmware     QQS SKR12PRO(4xTMC2208_standAlone)32steps without LA, with BMG extruder.
  - (QQS)U9rTPULR16-SKR14_firmware QQS with SKRv1.4 Board with emulation LCD (Marlin Mode)
  
  **Header caption:**

  **/*------Drivers--------*/**
  - (S) Stock=4xTMC2209_UART. (default)
  - (16) All drivers 16steps (default)
  - (32) All drivers 32steps

  **/*-------Options UI TFT--------*/**
  - (F) UI STANDARD (Emulation LCD screen on TFT)
  - (C) UI MARLIN (TFT Color screen like Mks TS35v2) (default)
  - (I) UI MKS (TFT Color screen>=480x320 use Lvgl/NANOv3)
  - (r) UI STANDARD (TFT Color screen like BTT-TFT35v3 or Marlin Mode Emulation)
  - (D) UI DWIN (TFT DGUS Color screen like Mks H43)

  **/*------Modules--------*/**
  - (n) NeoPixel (management of led strips)
  - (W) Module ESP8266/ESP12 (infos at the middle of the page)
  - (w) Module ESP8266/ESP12 with ESP3Dv3.0 Firmware.
  - (B) Extruder BMG right_hand (Stock) (default)
  - (O) Extruder OMG v2
  - (X) Extruder NEMA14 (SDHX/Mini-Sherpa/Orbiter/LGX)
  
  **/*-------Others options in firmware----*/**
  - (G) SENSORLESS_HOMING (Only 2209)
  - (g) SENSORLESS_PROBING (Only 2209)
  - (A) BED_LEVELING_BILINEAR
  - (U) BED_LEVELING_UBL (default)
  - (P) PreHeat bed before leveling (default)
  - (R) ARC_SUPPORT (default)
  - (L) Linear Advance (default)
  - (32) All axes in 32 steps instead of 16 steps.
  
  **/*-------Others options for advanced users who build their firmware----*/**
  - HOST_ACTION_COMMANDS (Action Command Prompt support Message on OctoPrint) (default)
  - (M) MEATPACK (Improve dialogue/communication with OctoPrint)
  - BINARY_FILE_TRANSFER (default)
  - TEMP_SENSOR_0 (After changed the thermitor nozzle)
  - LCD_LANGUAGE (Change to the native language)
  - etc 
  
***
