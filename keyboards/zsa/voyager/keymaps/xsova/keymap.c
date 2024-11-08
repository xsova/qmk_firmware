#include QMK_KEYBOARD_H
#include "version.h"
// #include "features/"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

#define BASE 0
#define ARROWS 1
#define MOUSE 2
#define MEDIA 3
#define NUM 4
#define SYMBOL 5
#define FUNCTION 6

// Engram shift + key remaps
// const key_override_t KO_ONE         = ko_make_basic(MOD_MASK_SHIFT, KC_1, KC_PIPE);
// const key_override_t KO_TWO         = ko_make_basic(MOD_MASK_SHIFT, KC_2, KC_EQUAL);
// const key_override_t KO_THREE       = ko_make_basic(MOD_MASK_SHIFT, KC_3, KC_TILD);
// const key_override_t KO_FOUR        = ko_make_basic(MOD_MASK_SHIFT, KC_4, KC_PLUS);
// const key_override_t KO_FIVE        = ko_make_basic(MOD_MASK_SHIFT, KC_5, KC_LABK);
// const key_override_t KO_SIX         = ko_make_basic(MOD_MASK_SHIFT, KC_6, KC_RABK);
// const key_override_t KO_SEVEN       = ko_make_basic(MOD_MASK_SHIFT, KC_7, KC_CIRC);
// const key_override_t KO_EIGHT       = ko_make_basic(MOD_MASK_SHIFT, KC_8, KC_AMPR);
// const key_override_t KO_NINE        = ko_make_basic(MOD_MASK_SHIFT, KC_9, KC_PERC);
// const key_override_t KO_ZERO        = ko_make_basic(MOD_MASK_SHIFT, KC_0, KC_ASTR);
const key_override_t KO_ONE         = ko_make_with_layers_and_negmods(MOD_MASK_SHIFT, KC_1, KC_PIPE, ~0, MOD_MASK_CTRL | MOD_MASK_ALT | MOD_MASK_GUI);
const key_override_t KO_TWO         = ko_make_with_layers_and_negmods(MOD_MASK_SHIFT, KC_2, KC_EQUAL, ~0, MOD_MASK_CTRL | MOD_MASK_ALT | MOD_MASK_GUI);
const key_override_t KO_THREE       = ko_make_with_layers_and_negmods(MOD_MASK_SHIFT, KC_3, KC_TILD, ~0, MOD_MASK_CTRL | MOD_MASK_ALT | MOD_MASK_GUI);
const key_override_t KO_FOUR        = ko_make_with_layers_and_negmods(MOD_MASK_SHIFT, KC_4, KC_PLUS, ~0, MOD_MASK_CTRL | MOD_MASK_ALT | MOD_MASK_GUI);
const key_override_t KO_FIVE        = ko_make_with_layers_and_negmods(MOD_MASK_SHIFT, KC_5, KC_LABK, ~0, MOD_MASK_CTRL | MOD_MASK_ALT | MOD_MASK_GUI);
const key_override_t KO_SIX         = ko_make_with_layers_and_negmods(MOD_MASK_SHIFT, KC_6, KC_RABK, ~0, MOD_MASK_CTRL | MOD_MASK_ALT | MOD_MASK_GUI);
const key_override_t KO_SEVEN       = ko_make_with_layers_and_negmods(MOD_MASK_SHIFT, KC_7, KC_CIRC, ~0, MOD_MASK_CTRL | MOD_MASK_ALT | MOD_MASK_GUI);
const key_override_t KO_EIGHT       = ko_make_with_layers_and_negmods(MOD_MASK_SHIFT, KC_8, KC_AMPR, ~0, MOD_MASK_CTRL | MOD_MASK_ALT | MOD_MASK_GUI);
const key_override_t KO_NINE        = ko_make_with_layers_and_negmods(MOD_MASK_SHIFT, KC_9, KC_PERC, ~0, MOD_MASK_CTRL | MOD_MASK_ALT | MOD_MASK_GUI);
const key_override_t KO_ZERO        = ko_make_with_layers_and_negmods(MOD_MASK_SHIFT, KC_0, KC_ASTR, ~0, MOD_MASK_CTRL | MOD_MASK_ALT | MOD_MASK_GUI);
const key_override_t KO_APOS        = ko_make_basic(MOD_MASK_SHIFT, KC_QUOTE, KC_LPRN);
const key_override_t KO_COMMA       = ko_make_basic(MOD_MASK_SHIFT, KC_COMMA, KC_SCLN);
const key_override_t KO_QUOTE       = ko_make_basic(MOD_MASK_SHIFT, KC_DQUO, KC_RPRN);
const key_override_t KO_DOT         = ko_make_basic(MOD_MASK_SHIFT, KC_DOT, KC_COLN);
const key_override_t KO_QMARK       = ko_make_basic(MOD_MASK_SHIFT, KC_QUES, KC_EXLM);
const key_override_t KO_HASH        = ko_make_basic(MOD_MASK_SHIFT, KC_HASH, KC_DLR);
const key_override_t KO_AT          = ko_make_basic(MOD_MASK_SHIFT, KC_AT, KC_GRAVE);
const key_override_t KO_BKSL        = ko_make_basic(MOD_MASK_SHIFT, KC_SLSH, KC_BSLS);
const key_override_t KO_UP          = ko_make_basic(MOD_MASK_SHIFT, KC_UP, KC_PAGE_UP);
const key_override_t KO_DOWN        = ko_make_basic(MOD_MASK_SHIFT, KC_DOWN, KC_PAGE_DOWN);
const key_override_t KO_LEFT        = ko_make_basic(MOD_MASK_SHIFT, KC_LEFT, KC_HOME);
const key_override_t KO_RIGHT       = ko_make_basic(MOD_MASK_SHIFT, KC_RIGHT, KC_END);

enum custom_keycodes {
  CUSTOM_MOD = ML_SAFE_RANGE,
  RGB_SLD,
  ST_MACRO_0,
};

const key_override_t *key_overrides[] = {
  // Numbers
  &KO_ONE,
  &KO_TWO,
  &KO_THREE,
  &KO_FOUR,
  &KO_FIVE,
  &KO_SIX,
  &KO_SEVEN,
  &KO_EIGHT,
  &KO_NINE,
  &KO_ZERO,
  // Sym
  &KO_APOS,
  &KO_COMMA,
  &KO_QUOTE,
  &KO_DOT,
  &KO_QMARK,
  &KO_HASH,
  &KO_AT,
  &KO_BKSL,
  // Arrows
  &KO_UP,
  &KO_DOWN,
  &KO_LEFT,
  &KO_RIGHT,
  NULL
};

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  ST_MACRO_0,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_ESC,      KC_1,               KC_2,               KC_3,               KC_4,                   KC_5,                                          KC_6,              KC_7,               KC_8,                KC_9,               KC_0,                 KC_ESC,           
    KC_HASH,     KC_B,               KC_Y,               KC_O,               KC_U,                   KC_QUOTE,                                       KC_DQUO,      KC_L,               KC_D,                KC_W,               KC_V,                 KC_Q,
    KC_AT,       MT(MOD_LCTL, KC_C), MT(MOD_LALT, KC_I), MT(MOD_LSFT, KC_E), MT(MOD_LGUI, KC_A), KC_COMMA,                                   KC_DOT,        MT(MOD_RGUI, KC_H), MT(MOD_RSFT, KC_T),  MT(MOD_LALT, KC_S), MT(MOD_RCTL, KC_N),   KC_Z, 
    KC_SLSH,     KC_G,               KC_X,               KC_J,               KC_K,               KC_MINUS,                                       KC_QUES,      KC_R,               KC_M,                KC_F,               KC_P,                 CW_TOGG, 
                                                                              LT(ARROWS, KC_SPACE),      LT(MOUSE, KC_TAB),                              LT(5,KC_ENTER), LT(NUM, KC_BSPC)
  ),
  [1] = LAYOUT_voyager(
    KC_NO,        KC_NO,              KC_NO,              KC_NO,              KC_NO,              KC_NO,                                          KC_NO,          KC_DELETE,          KC_NO,               KC_NO,              KC_NO,                KC_NO, 
    KC_NO,        KC_NO,              KC_NO,              KC_NO,              KC_NO,              KC_NO,                                          KC_NO,          KC_MEDIA_PREV_TRACK,KC_AUDIO_VOL_DOWN,   KC_AUDIO_VOL_UP,    KC_MEDIA_NEXT_TRACK,  KC_NO,          
    KC_NO,        KC_LEFT_CTRL,       KC_LEFT_ALT,        KC_LEFT_SHIFT,      KC_LEFT_GUI,        KC_NO,                                          KC_NO,          KC_LEFT,            KC_DOWN,             KC_UP,              KC_RIGHT,             KC_NO,  
    KC_NO,        KC_NO,              KC_NO,              KC_NO,              KC_NO,              KC_NO,                                          KC_NO,          KC_HOME,            KC_PGDN,             KC_PAGE_UP,         KC_END,               KC_NO,          
                                                                              KC_NO,              KC_NO,                                          KC_ENTER,       KC_BSPC
  ),
  [2] = LAYOUT_voyager(
    KC_NO,        KC_NO,              KC_NO,              KC_NO,              KC_NO,              KC_NO,                                          KC_NO,          KC_NO,              KC_NO,               KC_NO,              KC_NO,                KC_NO, 
    KC_NO,        KC_NO,              KC_NO,              KC_NO,              KC_NO,              KC_NO,                                          LCTL(KC_Y),     KC_MEDIA_PREV_TRACK,KC_AUDIO_VOL_DOWN,   KC_AUDIO_VOL_UP,    KC_MEDIA_NEXT_TRACK,  KC_NO,          
    KC_NO,        KC_LEFT_CTRL,       KC_LEFT_ALT,        KC_LEFT_SHIFT,      KC_LEFT_GUI,        KC_NO,                                          LCTL(KC_F),     KC_MS_LEFT,         KC_MS_DOWN,          KC_MS_UP,           KC_MS_RIGHT,          KC_NO,          
    KC_NO,        KC_NO,              KC_NO,              KC_NO,              KC_NO,              KC_NO,                                          KC_NO,          KC_MS_WH_LEFT,      KC_MS_WH_DOWN,       KC_MS_WH_UP,        KC_MS_WH_RIGHT,       KC_NO,          
                                                                              KC_NO,              KC_NO,                                          KC_MS_BTN2,     KC_MS_BTN1
  ),
  [3] = LAYOUT_voyager(
    KC_NO,        KC_NO,              KC_NO,              KC_NO,              KC_NO,              KC_NO,                                          KC_NO,          KC_NO,               KC_NO,              KC_NO,               KC_NO,               KC_NO, 
    KC_NO,        KC_NO,              KC_NO,              KC_NO,              KC_NO,              KC_NO,                                          RGB_SAD,        RGB_HUD,             RGB_VAD,            RGB_VAI,             RGB_HUI,             RGB_SAI,        
    KC_NO,        KC_LEFT_CTRL,       KC_LEFT_ALT,        KC_LEFT_SHIFT,      KC_LEFT_GUI,        KC_NO,                                          RGB_SLD,        KC_MEDIA_PREV_TRACK, KC_AUDIO_VOL_DOWN,  KC_AUDIO_VOL_UP,     KC_MEDIA_NEXT_TRACK, RGB_TOG,        
    KC_NO,        KC_NO,              KC_RIGHT_ALT,       KC_NO,              KC_CAPS,            KC_NO,                                          KC_NO,          KC_NO,               KC_BRIGHTNESS_DOWN, KC_BRIGHTNESS_UP,    KC_NO,               KC_NO,          
                                                                              KC_NO,              KC_NO,                                          KC_MEDIA_STOP,  KC_MEDIA_PLAY_PAUSE
  ),
  [4] = LAYOUT_voyager(
    KC_NO,        KC_NO,              KC_NO,              KC_NO,              KC_ESCAPE,          KC_NO,                                          KC_NO,          KC_NO,               KC_NO,               KC_NO,              KC_NO,               KC_NO, 
    KC_DLR,       KC_1,               KC_2,               KC_3,               KC_4,               KC_5,                                           KC_6,           KC_7,                KC_8,                KC_9,               KC_0,                KC_RBRC,        
    KC_GRAVE,     KC_LPRN,            KC_RPRN,            KC_LBRC,            KC_RBRC,            KC_SCLN,                                        KC_COLN,        KC_RIGHT_GUI,        KC_RIGHT_SHIFT,      KC_LEFT_ALT,        KC_RIGHT_CTRL,       KC_NO,          
    KC_BSLS,      KC_LBRC,            KC_RBRC,            KC_LABK,            KC_RABK,            KC_UNDS,                                        KC_EXLM,        KC_CAPS,             KC_NO,               KC_RIGHT_ALT,       KC_NO,               KC_NO,          
                                                                              KC_SPACE,           KC_TAB,                                         KC_NO,          KC_NO
  ),
  [5] = LAYOUT_voyager(
    KC_NO,        KC_NO,              KC_NO,              KC_NO,              KC_ESCAPE,          KC_NO,                                          KC_NO,          KC_NO,               KC_NO,               KC_NO,              KC_NO,                KC_NO, 
    KC_DLR,       KC_PIPE,            KC_EQUAL,           KC_TILD,            KC_PLUS,            KC_LABK,                                        KC_RABK,        KC_CIRC,             KC_AMPR,             KC_PERC,            KC_ASTR,              KC_RBRC,        
    KC_GRAVE,     KC_LPRN,            KC_RPRN,            KC_LCBR,            KC_RCBR,            KC_SCLN,                                        KC_COLN,        KC_RIGHT_GUI,        KC_RIGHT_SHIFT,      KC_LEFT_ALT,        KC_RIGHT_CTRL,        KC_NO,          
    KC_BSLS,      KC_LBRC,            KC_RBRC,            KC_LABK,            KC_RABK,            KC_UNDS,                                        KC_EXLM,        KC_CAPS,             KC_NO,               KC_RIGHT_ALT,       KC_NO,                KC_NO,          
                                                                              KC_SPACE,           KC_TAB,                                         KC_NO,          KC_NO
  ),
  [6] = LAYOUT_voyager(
    KC_NO,        KC_NO,              KC_NO,              KC_NO,              KC_APPLICATION,     KC_NO,                                          KC_NO,          KC_NO,               KC_NO,               KC_NO,              KC_NO,                KC_NO, 
    KC_NO,        KC_F1,              KC_F2,              KC_F3,              KC_F4,              KC_F5,                                          KC_F6,          KC_F7,               KC_F8,               KC_F9,              KC_F10,               KC_NO,          
    KC_NO,        KC_LEFT_CTRL,       KC_LEFT_ALT,        KC_LEFT_SHIFT,      KC_LEFT_GUI,        KC_NO,                                          KC_NO,          KC_RIGHT_GUI,        KC_RIGHT_SHIFT,      KC_LEFT_ALT,        KC_RIGHT_CTRL,        KC_NO,          
    KC_NO,        KC_F11,             KC_F12,             KC_F13,             KC_F14,             KC_F15,                                         KC_F16,         KC_F17,              KC_F18,              KC_F19,             KC_F20,               KC_NO,          
                                                                              KC_SPACE,           KC_TAB,                                         KC_NO,          KC_NO
  ),
};

const uint16_t PROGMEM combo0[] = { KC_Z, KC_AT, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, ST_MACRO_0),
};

bool custom_mod_active = false;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    // case CUSTOM_MOD:
    //     if (record->event.pressed) {
    //         custom_mod_active = true; // Activate custom modifier
    //     } else {
    //         custom_mod_active = false; // Deactivate custom modifier
    //     }
    //     return false; // Skip further processing of CUSTOM_MOD
    // case KC_LEFT:
    //     if (custom_mod_active) {
    //         // Send alternate key when custom modifier is active
    //         if (record->event.pressed) {
    //             tap_code(KC_HOME); // Replace with desired alternate key
    //         }
    //         return false; // Skip normal KC_LEFT behavior
    //     }
    //     break;
    // case KC_RIGHT:
    //     if (custom_mod_active) {
    //         if (record->event.pressed) {
    //             tap_code(KC_END); // Alternate key for KC_RIGHT
    //         }
    //         return false; // Skip normal KC_RIGHT behavior
    //     }
    //     break;
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_LEFT_SHIFT) SS_DELAY(100) SS_TAP(X_LEFT_SHIFT));
    }
    break;

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}
