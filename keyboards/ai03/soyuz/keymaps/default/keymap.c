#include QMK_KEYBOARD_H

// enum custom_keycodes {
// 	TMGR = SAFE_RANGE,
// };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ortho_5x4( /* Base */
    KC_MPRV, KC_MSTP, KC_MPLY, KC_MNXT, \
	LALT(KC_A),   LALT(KC_V),   _______,   KC_VOLU, \
	LCTL(LSFT(KC_M)),   LCTL(LSFT(KC_D)),   _______,   KC_VOLD, \
	KC_WSCH,   KC_WBAK,   KC_WFWD,   KC_MUTE, \
	LCTL(LSFT(KC_ESC)),   LCTL(LSFT(KC_A)),   LT(1, KC_PDOT), KC_WREF  \
  ),
  [1] = LAYOUT_ortho_5x4(
    RGB_TOG, RGB_MOD, _______, _______, \
    RGB_HUI, RGB_SAI, _______, RGB_VAI, \
    RGB_M_P, RGB_M_B, RGB_M_R, RGB_VAI, \
    RGB_M_G, _______, _______, _______, \
    _______, _______, _______, _______ \
  )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	// switch(keycode){
	// 	case TMGR:
	// 		if(record->event.pressed){
	// 			LCTL(LSFT(KC_ESC));
	// 		} else {

	// 		}
	// 		break;
	// }
 	return true;
}

void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

void led_set_user(uint8_t usb_led) {

}
