/*
 * ai03 Soyuz VIA Keymap
 *
 * Copyright (C) 2020 Sendy YK <https://mr.sendyyk.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <https://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

enum layer_names {
    _BASE, // Default Layer
    _FN, // Fn Layer 1
    _FN2, // Fn Layer 2
    _FN3 // Fn Layer 3
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	// Default Layer
    [_BASE] = LAYOUT_ortho_5x4(
        KC_MSTP, KC_MPRV, KC_MPLY, KC_MNXT,
        KC_P7,   KC_P8,   KC_P9,   KC_PPLS,
        KC_P4,   KC_P5,   KC_P6,   KC_PPLS,
        KC_P1,   KC_P2,   KC_P3,   KC_PENT,
        KC_P0,   KC_P0,   LT(1, KC_PDOT), KC_PENT
    ),
	// Fn Layer 1
    [_FN] = LAYOUT_ortho_5x4(
        RGB_TOG, RGB_MOD, _______, _______,
        RGB_HUI, RGB_SAI, _______, RGB_VAI,
        RGB_M_P, RGB_M_B, RGB_M_R, RGB_VAI,
        RGB_M_G, _______, _______, _______,
        _______, _______, _______, _______
    ),
	// Fn Layer 2
    [_FN2] = LAYOUT_ortho_5x4(
        _______, _______, _______, _______,
        _______, _______, _______, _______,
        _______, _______, _______, _______,
        _______, _______, _______, _______,
        _______, _______, _______, _______
    ),
	// Fn Layer 3
    [_FN3] = LAYOUT_ortho_5x4(
        _______, _______, _______, _______,
        _______, _______, _______, _______,
        _______, _______, _______, _______,
        _______, _______, _______, _______,
        _______, _______, _______, _______
    )
};
