/*
Copyright 2022 Zykrah

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

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

/* Use 1000hz polling */
#define USB_POLLING_INTERVAL_MS 1
