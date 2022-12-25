#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_2x2(
        KC_W,    KC_A,
        KC_S,    KC_D
    )
};
