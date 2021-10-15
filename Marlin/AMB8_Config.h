/*==========================================================================
*=================== Stel AMB8 - CARTESIAN Printer =============================
*================= With pins_.h BOARD =========================
*===========================================================================
*
* For a Delta printer start with one of the configuration files in the
* config/examples/ANET/A8 directory and customize for your machine.
*
* TIPS:
* -For reduce binary size : https://thborges.github.io/blog/marlin/2019/01/07/reducing-marlin-binary-size.html
* 
* -For NeoPixel use library : https://github.com/Foxies-CSTL/Nano-NeoPixel-Lib/archive/master.zip,
* and active it into the part of platformio.ini "env:flsun_hispeed",
* and commented error in SanityCheck.h for pass error check.
* // custom_marlin.NEOPIXEL_LED = Adafruit NeoPixel=https://github.com/p3p/Adafruit_NeoPixel/archive/1.5.0.zip
* -For 2209 change TMC2208 by TMC2209 at the bottom file.
*/

//========= Hardware ==========//
/*------Drivers-(1 CHOICE)-----*/
//#define STOCK                      //(S) For 4xA4988 with Robin_mini Board(Comment POWER_LOSS_RECOVERY)
//#define RAMPS                      //(S) For 4xA4988(green or red color)
#define SKR

/* MODE TMC */
//#define AMB8_TMC                   //(8) For 4xTMC220x_STANDALONE For 2208(white color) or 2209(black color)
#define AMB8_UARTx                   //(U8/U9) 4xTMC220x Note: For 2209 change TMC2208 by TMC2209 at the bottom file and remove on your printer the module WIFI.
//#define AMB8_UART9                 //(UH) Mode special 2209 wiring with one I/O pin (Remove module ESP12)

/*------- Choice Other driver for EXTRUDER-------//
* Options: 
* LV8729/A4988/TMC2208_STANDALONE/TMC2209_STANDALONE/TMC2208/TMC2209 
*/
//#define DRIVER_EXT A4988

/* QQS Stock have a clone TITAN EXtruder,
* also if you have another try this.
* (T=397)/(B=417)/(b=141)
*/
//#define INV_EXT                    //(T) Uncommment to reverse direction.
//#define BMG                        //(B) Uncomment to change Extruder step.

/*-------Driver TFT Color--(1 CHOICE)-----*/
#define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER
#define TFT_REPRAP
//#define TFT_GENERIC

/*--- Choice UI TFT ----*/
//#define TFT_CLASSIC_UI             //(F) UI STANDARD 
//#define TFT_COLOR_UI               //(C) UI MARLIN (too big with mode UART+UBL=ok with nanolib)
//#define TFT_LVGL_UI                //(I) UI MKS  => (Bug)

/*----  Modules -----*/
//#define ESP_WIFI                   //(W) Module ESP8266/ESP12

/*For LedStrip which need an external power source on Vcc pin.*/
//#define NEOPIXEL_LED               //(N) Use port GPIO Wifi module (PA10/PA9/PA8/PC7)

//Many options for Modules: 
//#define POWER_LOSS_RECOVERY        //NC LVGL pb SD
#define FILAMENT_RUNOUT_SENSOR     //NC LVGL
#define ADVANCED_PAUSE_FEATURE     //NC LVGL
#define LIN_ADVANCE                //(L) Possible Bug with BabyStep.For TMC_UART prefer mode spreadCycle         
#define ARC_SUPPORT                //(R)
//#define CLASSIC_JERK
//#define NOZZLE_CLEAN_FEATURE
#define ADAPTIVE_STEP_SMOOTHING
#ifdef RAMPS
  #define TEMP_SENSOR_0 1
  #define TEMP_SENSOR_BED 5
  #define TEMP_SENSOR_CHAMBER 11
  #define TEMP_CHAMBER_PIN TEMP_1_PIN //
#else
  #define TEMP_SENSOR_0 11
  #define TEMP_SENSOR_BED 5
  #define TEMP_SENSOR_CHAMBER 11
  //#define TEMP_CHAMBER_PIN TEMP_1_PIN //
#endif
#define MICROSTEPS32
#define Z_OFFSET  -3.9
//============= End_Hardware ===============//

//Choice add menu: (OPT)
#define SOFT_ENDSTOPS_MENU_ITEM    // for UI CLASSIC and UI COLOR
#define PID_EDIT_MENU              //
#define PID_AUTOTUNE_MENU          //
#define LCD_INFO_MENU              // Informations printer.
#define CUSTOM_MENU_MAIN

//  Type Calibration (CAL)
//#define AUTO_BED_LEVELING_BILINEAR //(A)
#define AUTO_BED_LEVELING_UBL    //(U) 
#define LEVEL_BED_CORNERS

// Option for Octoprint (OCTO)
#define HOST_ACTION_COMMANDS       // Action Command Prompt support Message on Octoprint
#define UTF_FILENAME_SUPPORT
#define EMERGENCY_PARSER
#define BINARY_FILE_TRANSFER
//#define MEATPACK_ON_SERIAL_PORT_1
#define SDCARD_CONNECTION ONBOARD

//#define CANCEL_OBJECTS
#define SDCARD_SORT_ALPHA
#define M114_DETAIL
#define REPORT_FAN_CHANGE

/* OPTION no validate */
//#define USE_CONTROLLER_FAN         //BOARD FAN
//EXTRUDER_AUTO_FAN   //

//
//==================Part for Driver defintions=============//
// Options for Modules Hardware
#ifdef ESP_WIFI
  #define BINARY_FILE_TRANSFER       // Bin transfert for host like ESP3D or others.
#endif
#ifdef NEOPIXEL_LED
  #define LED_CONTROL_MENU           // To control LedStrip.
#endif

//TFT Type For TFT_GENERIC
#if ENABLED(TFT_GENERIC)
  #define TFT_DRIVER AUTO
  #define TFT_INTERFACE_FSMC
  #define TFT_RES_320x240
#endif

//variables to calculate steps and current
#ifdef MICROSTEPS32
  #define XYZ_MICROSTEPS 32
  #define E_MICROSTEPS 32
#else
  #define XYZ_MICROSTEPS 16
  #define E_MICROSTEPS 16
#endif

//Set for A4988 
#ifdef STOCK
    #define DRIVER_AXES A4988
    #ifndef DRIVER_EXT
      #define DRIVER_EXT A4988
    #endif
#endif

//For set 2209 change TMC2208 by TMC2209 
#ifdef AMB8_TMC
    #define DRIVER_AXES TMC2208_STANDALONE
    #ifndef DRIVER_EXT
      #define DRIVER_EXT TMC2208_STANDALONE
    #endif
#endif

// Software Serial UART for TMC 2208 / TMC 2209
#ifdef AMB8_UARTx
    #define QQS_UART
    #define DRIVER_AXES TMC2208
    #ifndef DRIVER_EXT
      #define DRIVER_EXT TMC2209
    #endif
#endif

// Note:
// HardwareSerial with one pins for four drivers
// Compatible with TMC2209. Provides best performance.
// Requires SLAVE_ADDRESS definitions in Configuration_adv.h
// and proper jumper configuration. Uses I/O pins
// like PA10/PA9/PC7/PA8 only.
#ifdef AMB8_UART9
    #define QQS_UART
    #define HARDWARE_SERIAL
    #define DRIVER_AXES TMC2209
    #ifndef DRIVER_EXT
      #define DRIVER_EXT TMC2209
    #endif
#endif

 /**
 * Modif 2020:EVO3.3
 *      2.0.6 SERIAL_PORT 0=>3
 *      BNBSX v1 (Modif des Vref à 0.74v Max)
 *      BEAR  Modif parametres firmware BEAR/BNBSX en 16bits (X,Y,Z) et 32 (E0)
 *      OPT   Calcul avec MicroStep à 32 (TMC + STEPS_PER_UNIT ())                                   
 *      act. Modif FAN_SOFT_PWM, FWRETRACT, ARC_SUPPORT, STEALTHCHOP_E
 *      TEMP  Activation Temp. enceinte "#define TEMP_CHAMBER_PIN TEMP_1_PIN" (PIN A15 T2)
 *            Modif LCD logo _Statusscreen.h
 *      LCD_AMB8  Modif
 */
