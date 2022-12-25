#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_2x2(
        LCTL(KC_X),    LCTL(KC_A),
        LCTL(KC_C),    LCTL(KC_V)
    )
};
