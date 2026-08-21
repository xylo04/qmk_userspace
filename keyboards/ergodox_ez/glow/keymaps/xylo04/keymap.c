#include QMK_KEYBOARD_H
#include "version.h"

enum custom_keycodes {
    HSV_0_255_255 = QK_USER,
    HSV_86_255_255,
    HSV_172_255_255,
    ST_MACRO_0,
    ST_MACRO_1,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_ergodox_pretty(KC_EQUAL, KC_1, KC_2, KC_3, KC_4, KC_5, TG(1), TG(2), KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINUS, KC_DELETE, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_TRANSPARENT, KC_TRANSPARENT, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS, KC_BSPC, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, LT(2, KC_SCLN), MT(MOD_LGUI, KC_QUOTE), KC_LEFT_SHIFT, MT(MOD_LCTL, KC_Z), MT(MOD_LALT, KC_X), KC_C, KC_V, KC_B, LGUI(LCTL(KC_LEFT)), LGUI(LCTL(KC_RIGHT)), KC_N, KC_M, KC_COMMA, MT(MOD_RALT, KC_DOT), MT(MOD_RCTL, KC_SLASH), KC_RIGHT_SHIFT, LT(1, KC_GRAVE), KC_QUOTE, LCTL(KC_Z), KC_LEFT, KC_RIGHT, KC_UP, KC_DOWN, KC_LBRC, KC_RBRC, MO(1), MT(MOD_LALT, KC_APPLICATION), KC_LEFT_GUI, KC_LEFT_ALT, MT(MOD_LCTL, KC_ESCAPE), KC_HOME, KC_PAGE_UP, KC_SPACE, KC_BSPC, KC_END, KC_PGDN, KC_TAB, KC_ENTER),
    [1] = LAYOUT_ergodox_pretty(KC_ESCAPE, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_TRANSPARENT, KC_PSCR, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_CAPS, KC_EXLM, KC_AT, KC_LCBR, KC_RCBR, KC_PIPE, KC_TRANSPARENT, KC_NUM, KC_UP, KC_KP_7, KC_KP_8, KC_KP_9, KC_KP_ASTERISK, KC_F12, KC_SCRL, KC_HASH, KC_DLR, KC_LPRN, KC_RPRN, KC_GRAVE, KC_DOWN, KC_KP_4, KC_KP_5, KC_KP_6, KC_KP_MINUS, KC_KP_SLASH, KC_LEFT_SHIFT, KC_PERC, KC_CIRC, KC_LBRC, KC_RBRC, KC_TILD, KC_TRANSPARENT, KC_TRANSPARENT, KC_EQUAL, KC_KP_1, KC_KP_2, KC_KP_3, KC_PLUS, KC_RIGHT_SHIFT, KC_TRANSPARENT, KC_LEFT_CTRL, KC_LEFT_ALT, KC_LEFT, KC_RIGHT, KC_KP_0, KC_KP_0, KC_KP_DOT, KC_KP_ENTER, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_SPACE, KC_BSPC, KC_TRANSPARENT, KC_TRANSPARENT, KC_TAB, KC_ENTER),
    [2] = LAYOUT_ergodox_pretty(KC_TRANSPARENT, ST_MACRO_0, ST_MACRO_1, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, MS_UP, KC_TRANSPARENT, KC_TRANSPARENT, LGUI(LSFT(KC_MINUS)), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, MS_LEFT, MS_DOWN, MS_RGHT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PLAY_PAUSE, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LGUI(LSFT(KC_EQUAL)), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PREV_TRACK, KC_MEDIA_NEXT_TRACK, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, MS_BTN1, MS_BTN2, KC_AUDIO_VOL_UP, KC_AUDIO_VOL_DOWN,
                                KC_AUDIO_MUTE, KC_TRANSPARENT, KC_TRANSPARENT, RM_NEXT, HSV_0_255_255, RM_TOGG, RGB_M_P, HSV_86_255_255, KC_TRANSPARENT, RM_VALD, RM_VALU, HSV_172_255_255, KC_TRANSPARENT, RM_HUED, RM_HUEU),
};

RGB hsv_to_rgb_with_value(HSV hsv) {
    hsv.v = rgb_matrix_get_val();
    return hsv_to_rgb(hsv);
}

void keyboard_post_init_user(void) {
    rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [1] = {{0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 0, 0}, {172, 255, 255}, {172, 255, 255}, {172, 255, 255}, {0, 0, 0}, {0, 0, 0}, {172, 255, 255}, {172, 255, 255}, {172, 255, 255}, {0, 0, 0}, {0, 0, 0}, {172, 255, 255}, {172, 255, 255}, {172, 255, 255}, {0, 0, 0}, {172, 255, 255}, {0, 0, 0}, {172, 255, 255}, {0, 0, 0}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {249, 228, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},

    [2] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {172, 255, 255}, {172, 255, 255}, {0, 0, 0}, {172, 255, 255}, {172, 255, 255}, {172, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {74, 255, 255}, {74, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 255, 255}, {0, 255, 255}, {0, 0, 0}, {0, 0, 0}},

};

void set_layer_color(int layer) {
    for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
        HSV hsv = {
            .h = pgm_read_byte(&ledmap[layer][i][0]),
            .s = pgm_read_byte(&ledmap[layer][i][1]),
            .v = pgm_read_byte(&ledmap[layer][i][2]),
        };
        if (!hsv.h && !hsv.s && !hsv.v) {
            rgb_matrix_set_color(i, 0, 0, 0);
        } else {
            RGB rgb = hsv_to_rgb_with_value(hsv);
            rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
        }
    }
}

bool rgb_matrix_indicators_user(void) {
    switch (get_highest_layer(layer_state)) {
        case 1:
            set_layer_color(1);
            break;
        case 2:
            set_layer_color(2);
            break;
    }

    return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case ST_MACRO_0:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_LEFT_CTRL) SS_DELAY(100) SS_TAP(X_LEFT_CTRL) SS_DELAY(100) SS_TAP(X_1));
            }
            break;
        case ST_MACRO_1:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_LEFT_CTRL) SS_DELAY(100) SS_TAP(X_LEFT_CTRL) SS_DELAY(100) SS_TAP(X_2));
            }
            break;

        case HSV_0_255_255:
            if (record->event.pressed) {
                rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_COLOR);
                rgb_matrix_sethsv_noeeprom(0, 255, 255);
            }
            return false;
        case HSV_86_255_255:
            if (record->event.pressed) {
                rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_COLOR);
                rgb_matrix_sethsv_noeeprom(86, 255, 255);
            }
            return false;
        case HSV_172_255_255:
            if (record->event.pressed) {
                rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_COLOR);
                rgb_matrix_sethsv_noeeprom(172, 255, 255);
            }
            return false;
    }
    return true;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    uint8_t layer = get_highest_layer(state);
    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    switch (layer) {
        case 1:
            ergodox_right_led_1_on();
            break;
        case 2:
            ergodox_right_led_2_on();
            break;
        case 3:
            ergodox_right_led_3_on();
            break;
        case 4:
            ergodox_right_led_1_on();
            ergodox_right_led_2_on();
            break;
        case 5:
            ergodox_right_led_1_on();
            ergodox_right_led_3_on();
            break;
        case 6:
            ergodox_right_led_2_on();
            ergodox_right_led_3_on();
            break;
        case 7:
            ergodox_right_led_1_on();
            ergodox_right_led_2_on();
            ergodox_right_led_3_on();
            break;
        default:
            break;
    }
    return state;
};
