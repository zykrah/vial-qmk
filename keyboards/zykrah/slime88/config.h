/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0x7A79 /* "ZY" */
#define PRODUCT_ID      0x0088
#define DEVICE_VER      0x0001
#define MANUFACTURER    Zykrah
#define PRODUCT         Slime88

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 17

#define MATRIX_ROW_PINS { 2, 29, 28, 27, 11, 12 }
#define MATRIX_COL_PINS { 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 0, 1, 3 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U
