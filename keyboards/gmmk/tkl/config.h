/* Copyright 2020 Adam Honse <calcprogrammer1@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x0C45
#define PRODUCT_ID      0x652F
#define DEVICE_VER      0x0001
#define MANUFACTURER    Glorious
#define PRODUCT         GMMK TKL
#define DESCRIPTION     "Mechanical Keyboard"

/* key matrix size */
#define MATRIX_ROWS 7
#define MATRIX_COLS 13

/* key matrix pins */
#define MATRIX_ROW_PINS { D0, D1, D2, D3, D4, D5, D6 }
#define MATRIX_COL_PINS { C1, C2, A0, A1, A2, A3, A6, A7, A8, A9, A10, A11, A12}
#define UNUSED_PINS

#ifdef ENCODER_ENABLE
#define ENCODERS_PAD_A { B4 }
#define ENCODERS_PAD_B { B5 }
#define ENCODER_RESOLUTIONS { 2 }
#endif

#define DIODE_DIRECTION ROW2COL

/* 
 * Feature
 */
#define USB_POLLING_INTERVAL_MS 1           /* 1000 Hz */
#define FORCE_NKRO                          /* default NRKO enabled */
#define DEBOUNCE 1                          /* Debounce time in ms */
#define RGB_DISABLE_WHEN_USB_SUSPENDED true /* rgb off when power off / suspend */
// #define VIA_OPENRGB_HYBRID
// #define USE_FRAMEBUFFER
// #define KEYMAP_ISO 1
/* default ripple effect */
#ifdef RGB_MATRIX_CUSTOM_USER
#define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_CUSTOM_static_white
#endif

#define DYNAMIC_MACRO_SIZE 64

/* 
 * Optimization
 */
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
#define LAYER_STATE_8BIT
#define DYNAMIC_KEYMAP_LAYER_COUNT 4
// #define DYNAMIC_KEYMAP_EEPROM_MAX_ADDR 1200
#define NO_DEBUG 1
// #define NO_PRINT 1
#define OPENRGB_DIRECT_MODE_UNBUFFERED  /* use unbuffered direct mode in OpenRGB protocol */

#define DISABLE_RGB_MATRIX_ALPHAS_MODS
#define DISABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
#define DISABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
#define DISABLE_RGB_MATRIX_BAND_SAT
#define DISABLE_RGB_MATRIX_BAND_SPIRAL_SAT
#define DISABLE_RGB_MATRIX_BAND_SPIRAL_VAL
#define DISABLE_RGB_MATRIX_BAND_VAL
#define DISABLE_RGB_MATRIX_BREATHING
#define DISABLE_RGB_MATRIX_CYCLE_ALL
#define DISABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#define DISABLE_RGB_MATRIX_CYCLE_OUT_IN
#define DISABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
#define DISABLE_RGB_MATRIX_CYCLE_PINWHEEL
#define DISABLE_RGB_MATRIX_CYCLE_SPIRAL
#define DISABLE_RGB_MATRIX_CYCLE_UP_DOWN
#define DISABLE_RGB_MATRIX_DIGITAL_RAIN
#define DISABLE_RGB_MATRIX_DUAL_BEACON
#define DISABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
#define DISABLE_RGB_MATRIX_GRADIENT_UP_DOWN
#define DISABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
#define DISABLE_RGB_MATRIX_MULTISPLASH
#define DISABLE_RGB_MATRIX_RAINBOW_BEACON
#define DISABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#define DISABLE_RGB_MATRIX_RAINBOW_PINWHEELS
#define DISABLE_RGB_MATRIX_RAINDROPS
#define DISABLE_RGB_MATRIX_SOLID_MULTISPLASH
#define DISABLE_RGB_MATRIX_SOLID_REACTIVE
#define DISABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
#define DISABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
#define DISABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
#define DISABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
#define DISABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
#define DISABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#define DISABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
#define DISABLE_RGB_MATRIX_SOLID_SPLASH
#define DISABLE_RGB_MATRIX_SPLASH
#define DISABLE_RGB_MATRIX_TYPING_HEATMAP

#define LCPO_KEYS KC_LCTL, KC_LSFT, KC_LBRC
#define RCPC_KEYS KC_RCTL, KC_LSFT, KC_RBRC
#define LAPO_KEYS KC_LALT, KC_TRNS, KC_LBRC
#define RAPC_KEYS KC_RALT, KC_TRNS, KC_RBRC


#define KEY_OVERRIDES_COUNT 9

#define NO_AUTO_SHIFT_ALPHA
//#define NO_AUTO_SHIFT_SPECIAL

#include "config_led.h"

// #define DEBUG_GMMK
