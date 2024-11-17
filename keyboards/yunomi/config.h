// Copyright 2021 Austin Wang (@Dafondo)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/* key matrix size */
#define MATRIX_ROWS 11
#define MATRIX_COLS 11

/* Keyboard Matrix Assignments */
#define MATRIX_ROW_PINS { F7, B1, B3, B2, B6, B5, B4, E6, D7, C6, D4 }
#define MATRIX_COL_PINS { B5, B4, E6, D7, C6, D4, F7, B1, B3, B2, B6 }

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION ROW2COL

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
