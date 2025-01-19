#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif

/*Remember to also change the color in keyboard_post_init_kb in boston.c to make the startup color match the layer 0 color */
const rgblight_segment_t PROGMEM capslock_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 2, HSV_WHITE}  /*White*/
);

const rgblight_segment_t PROGMEM layer_1[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 2, HSV_CYAN} /*Red*/
);

const rgblight_segment_t PROGMEM layer_2[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 2, HSV_CORAL} /*Orange*/
);

const rgblight_segment_t PROGMEM layer_3[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 2, HSV_SPRINGGREEN} /*Yellow*/
);

const rgblight_segment_t PROGMEM layer_4[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 2, HSV_GREEN} /*Green*/
);

const rgblight_segment_t PROGMEM layer_5[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 2, HSV_CHARTREUSE} /*Teal*/
);

const rgblight_segment_t PROGMEM layer_6[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 2, HSV_ORANGE} /*Blue*/
);

const rgblight_segment_t PROGMEM layer_7[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 2, HSV_PURPLE} /*Magenta*/
);

const rgblight_segment_t PROGMEM layer_8[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 2, HSV_PINK} /*Magenta*/
);

const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    capslock_layer,
    layer_1,
    layer_2,
    layer_3,
    layer_4,
    layer_5,
    layer_6,
    layer_7,
    layer_8
);

void keyboard_post_init_user(void) {
    // Enable the LED layers
    rgblight_layers = my_rgb_layers;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    // Both layers will light up if both kb layers are active
    //rgblight_set_layer_state(0, layer_state_cmp(state, 0));
    rgblight_set_layer_state(1, layer_state_cmp(state, 1));
    rgblight_set_layer_state(2, layer_state_cmp(state, 2));
    rgblight_set_layer_state(3, layer_state_cmp(state, 3));
    rgblight_set_layer_state(4, layer_state_cmp(state, 4));
    rgblight_set_layer_state(5, layer_state_cmp(state, 5));
    rgblight_set_layer_state(6, layer_state_cmp(state, 6));
    rgblight_set_layer_state(7, layer_state_cmp(state, 7));
    rgblight_set_layer_state(8, layer_state_cmp(state, 8));
    return state;
}

bool led_update_user(led_t led_state) {
    rgblight_set_layer_state(0, led_state.caps_lock);
    return true;
}
/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_Q,         KC_W,         KC_E,         KC_R,         KC_T,          /*||*/  KC_Y,         KC_U,          KC_I,         KC_O,           KC_P,
        LGUI_T(KC_A), LALT_T(KC_S), LCTL_T(KC_D), LSFT_T(KC_F), KC_G,          /*||*/  KC_H,         LSFT_T(KC_J),  LCTL_T(KC_K), LALT_T(KC_L),   LGUI_T(KC_SCLN),
        KC_Z,         RALT_T(KC_X), KC_C,         KC_V,         KC_B,          /*||*/  KC_N,         KC_M,          KC_COMM,      RALT_T(KC_DOT), KC_SLSH,
                                    LT(3,KC_ESC), LT(1,KC_SPC), LT(2,KC_TAB),  /*||*/  LT(5,KC_ENT), LT(4,KC_BSPC), LT(6,KC_DEL)
    ),

    [1] = LAYOUT(
        RESET,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_AGIN, KC_UNDO, KC_CUT,  KC_COPY, KC_PSTE,
        KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO,   KC_CAPS, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,
        KC_NO,   KC_RALT, KC_NO,   KC_NO,   KC_NO,   KC_INS,  KC_HOME, KC_PGDN, KC_PGUP, KC_END,
        KC_NO,   KC_NO,   KC_NO,   KC_ENT,  KC_BSPC, KC_DEL
    ),

    [2] = LAYOUT(
        RESET,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO,   KC_NO, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R,
        KC_NO,   KC_RALT, KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R,
        KC_NO,   KC_NO,   KC_NO,   KC_BTN2, KC_BTN1, KC_BTN3
    ),

    [3] = LAYOUT(
        RESET,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI,
        KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO,   KC_NO,   KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT,
        KC_NO,   KC_RALT, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_MSTP, KC_MPLY, KC_MUTE
    ),

    [4] = LAYOUT(
        KC_LBRC, KC_7, KC_8,    KC_9,  KC_RBRC, KC_NO, KC_NO,   KC_NO,   KC_NO,   RESET,
        KC_SCLN, KC_4, KC_5,    KC_6,  KC_EQL,  KC_NO, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
        KC_GRV,  KC_1, KC_2,    KC_3,  KC_BSLS, KC_NO, KC_NO,   KC_NO,   KC_RALT, KC_NO,
        KC_DOT,  KC_0, KC_MINS, KC_NO, KC_NO,   KC_NO
    ),

    [5] = LAYOUT(
        KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR, KC_NO, KC_NO,   KC_NO,   KC_NO,   RESET,
        KC_COLN, KC_DLR,  KC_PERC, KC_CIRC, KC_PLUS, KC_NO, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
        KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_PIPE, KC_NO, KC_NO,   KC_NO,   KC_RALT, KC_NO,
        KC_LPRN, KC_RPRN, KC_UNDS, KC_NO,   KC_NO,   KC_NO
    ),

    [6] = LAYOUT(
        KC_F12, KC_F7,  KC_F8,  KC_F9, KC_PSCR, KC_NO, KC_NO,   KC_NO,   KC_NO,   RESET,
        KC_F11, KC_F4,  KC_F5,  KC_F6, KC_SCRL, KC_NO, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
        KC_F10, KC_F1,  KC_F2,  KC_F3, KC_PAUS, KC_NO, KC_NO,   KC_NO,   KC_RALT, KC_NO,
        KC_APP, KC_SPC, KC_TAB, KC_NO, KC_NO,   KC_NO
    )

};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)




