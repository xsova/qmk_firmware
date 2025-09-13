#include "keymap_us.h"
#include QMK_KEYBOARD_H
#include "version.h"
#include "process_key_override.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
};


const key_override_t KO_ONE   = ko_make_with_layers_and_negmods(MOD_MASK_SHIFT, KC_1, KC_PIPE,  ~0, MOD_MASK_CTRL | MOD_MASK_ALT | MOD_MASK_GUI);
const key_override_t KO_TWO   = ko_make_with_layers_and_negmods(MOD_MASK_SHIFT, KC_2, KC_EQUAL, ~0, MOD_MASK_CTRL | MOD_MASK_ALT | MOD_MASK_GUI);
const key_override_t KO_THREE = ko_make_with_layers_and_negmods(MOD_MASK_SHIFT, KC_3, KC_TILD,  ~0, MOD_MASK_CTRL | MOD_MASK_ALT | MOD_MASK_GUI);
const key_override_t KO_FOUR  = ko_make_with_layers_and_negmods(MOD_MASK_SHIFT, KC_4, KC_PLUS,  ~0, MOD_MASK_CTRL | MOD_MASK_ALT | MOD_MASK_GUI);
const key_override_t KO_FIVE  = ko_make_with_layers_and_negmods(MOD_MASK_SHIFT, KC_5, KC_LABK,  ~0, MOD_MASK_CTRL | MOD_MASK_ALT | MOD_MASK_GUI);
const key_override_t KO_SIX   = ko_make_with_layers_and_negmods(MOD_MASK_SHIFT, KC_6, KC_RABK,  ~0, MOD_MASK_CTRL | MOD_MASK_ALT | MOD_MASK_GUI);
const key_override_t KO_SEVEN = ko_make_with_layers_and_negmods(MOD_MASK_SHIFT, KC_7, KC_CIRC,  ~0, MOD_MASK_CTRL | MOD_MASK_ALT | MOD_MASK_GUI);
const key_override_t KO_EIGHT = ko_make_with_layers_and_negmods(MOD_MASK_SHIFT, KC_8, KC_AMPR,  ~0, MOD_MASK_CTRL | MOD_MASK_ALT | MOD_MASK_GUI);
const key_override_t KO_NINE  = ko_make_with_layers_and_negmods(MOD_MASK_SHIFT, KC_9, KC_PERC,  ~0, MOD_MASK_CTRL | MOD_MASK_ALT | MOD_MASK_GUI);
const key_override_t KO_ZERO  = ko_make_with_layers_and_negmods(MOD_MASK_SHIFT, KC_0, KC_ASTR,  ~0, MOD_MASK_CTRL | MOD_MASK_ALT | MOD_MASK_GUI);
const key_override_t KO_APOS  = ko_make_basic(MOD_MASK_SHIFT, KC_QUOTE, KC_LPRN);
const key_override_t KO_COMMA = ko_make_basic(MOD_MASK_SHIFT, KC_COMMA, KC_SCLN);
const key_override_t KO_QUOTE = ko_make_basic(MOD_MASK_SHIFT, KC_DQUO, KC_RPRN);
const key_override_t KO_DOT   = ko_make_basic(MOD_MASK_SHIFT, KC_DOT, KC_COLN);
const key_override_t KO_QMARK = ko_make_basic(MOD_MASK_SHIFT, KC_QUES, KC_EXLM);
const key_override_t KO_HASH  = ko_make_basic(MOD_MASK_SHIFT, KC_HASH, KC_DLR);
const key_override_t KO_AT    = ko_make_basic(MOD_MASK_SHIFT, KC_AT, KC_GRAVE);
const key_override_t KO_BKSL  = ko_make_basic(MOD_MASK_SHIFT, KC_SLSH, KC_BSLS);
const key_override_t KO_UP    = ko_make_basic(MOD_MASK_SHIFT, KC_UP, KC_PAGE_UP);
const key_override_t KO_DOWN  = ko_make_basic(MOD_MASK_SHIFT, KC_DOWN, KC_PAGE_DOWN);
const key_override_t KO_LEFT  = ko_make_basic(MOD_MASK_SHIFT, KC_LEFT, KC_HOME);
const key_override_t KO_RIGHT = ko_make_basic(MOD_MASK_SHIFT, KC_RIGHT, KC_END);

const key_override_t *key_overrides[] = {
    // Numbers
    &KO_ONE, &KO_TWO, &KO_THREE, &KO_FOUR, &KO_FIVE, &KO_SIX, &KO_SEVEN, &KO_EIGHT, &KO_NINE, &KO_ZERO,
    // Symbols
    &KO_APOS, &KO_COMMA, &KO_QUOTE, &KO_DOT, &KO_QMARK, &KO_HASH, &KO_AT, &KO_BKSL,
    // Arrows // &KO_UP, // &KO_DOWN, // &KO_LEFT, // &KO_RIGHT,
    NULL
};

#define CTL_C MT(MOD_LCTL, KC_C)
#define ALT_I MT(MOD_LALT, KC_I)
#define SFT_E MT(MOD_LSFT, KC_E)
#define GUI_A MT(MOD_LGUI, KC_A)
#define GUI_H MT(MOD_LGUI, KC_H)
#define SF_T MT(MOD_RSFT, KC_T)
#define ALT_S MT(MOD_LALT, KC_S)
#define CTL_N MT(MOD_RCTL, KC_N)
#define VOL_UP KC_AUDIO_VOL_UP
#define VOL_DN KC_AUDIO_VOL_DOWN
#define A_NXT KC_MEDIA_NEXT_TRACK
#define A_PRV KC_MEDIA_PREV_TRACK
#define MUTE KC_AUDIO_MUTE
#define PLAY KC_MEDIA_PLAY_PAUSE

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager( // BASE
    KC_ESC,   KC_1,  KC_2,  KC_3,  KC_4,  KC_5,         KC_6,           KC_7,  KC_8,  KC_9,  KC_0,  KC_ESC,
    KC_HASH,  KC_B,  KC_Y,  KC_O,  KC_U,  KC_QUOTE,     KC_DQUO,        KC_L,  KC_D,  KC_W,  KC_V,  KC_Q,
    KC_AT,    CTL_C, ALT_I, SFT_E, GUI_A, KC_COMMA,     KC_DOT,         GUI_H, SF_T,  ALT_S, CTL_N, KC_Z,
    KC_SLASH, KC_G,  KC_X,  KC_J,  KC_K,  KC_MINUS,     KC_QUES,        KC_R,  KC_M,  KC_F,  KC_P,  CW_TOGG,
                      LT(1,KC_SPACE), LT(2,KC_TAB),     LT(3,KC_ENTER), LT(4,KC_BSPC)
  ),
  [1] = LAYOUT_voyager( // ARROW
    KC_NO, KC_NO,        KC_NO,       KC_NO,         KC_NO,       KC_NO,   KC_NO, KC_NO,   KC_NO,   KC_NO,      KC_NO,    KC_NO,
    KC_NO, KC_NO,        KC_NO,       KC_NO,         KC_NO,       KC_NO,   KC_NO, KC_NO,   KC_NO,   KC_NO,      KC_NO,    KC_NO,
    KC_NO, KC_LEFT_CTRL, KC_LEFT_ALT, KC_LEFT_SHIFT, KC_LEFT_GUI, KC_NO,   KC_NO, KC_LEFT, KC_DOWN, KC_UP,      KC_RIGHT, KC_NO,
    KC_NO, KC_NO,        KC_NO,       KC_NO,         KC_NO,       KC_NO,   KC_NO, KC_HOME, KC_PGDN, KC_PAGE_UP, KC_END,   KC_NO,
                                                  KC_TRANSPARENT, KC_NO,   KC_ENTER, KC_BSPC
  ),
  [2] = LAYOUT_voyager( // MOUSE
    KC_NO, KC_NO,        KC_NO,       KC_NO,         KC_NO,          KC_NO,   KC_NO, KC_NO,      KC_NO,      KC_NO,    KC_NO,       KC_NO,
    KC_NO, KC_NO,        KC_NO,       KC_NO,         KC_NO,          KC_NO,   KC_NO, KC_NO,      KC_NO,      KC_NO,    KC_NO,       KC_NO,
    KC_NO, KC_LEFT_CTRL, KC_LEFT_ALT, KC_LEFT_SHIFT, KC_LEFT_GUI,    KC_NO,   KC_NO, KC_MS_LEFT, KC_MS_DOWN, KC_MS_UP, KC_MS_RIGHT, KC_NO,
    KC_NO, KC_NO,        KC_NO,       KC_NO,         KC_TRANSPARENT, KC_NO,   KC_NO, KC_MS_BTN3, KC_NO,      KC_NO,    KC_NO,       KC_NO,
                                                     KC_NO, KC_TRANSPARENT,   KC_MS_BTN2, KC_MS_BTN1
  ),
  [3] = LAYOUT_voyager( // MEDIA
    KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO, KC_NO,    KC_NO, KC_NO,        KC_NO,          KC_NO,       KC_NO,         KC_NO,
    KC_NO, KC_NO, RGB_VAD, RGB_VAI, KC_NO, KC_NO,    KC_NO, KC_NO,        KC_NO,          KC_NO,       KC_NO,         KC_NO,
    KC_NO, A_PRV, VOL_DN,  VOL_UP,  A_NXT, KC_NO,    KC_NO, KC_RIGHT_GUI, KC_RIGHT_SHIFT, KC_LEFT_ALT, KC_RIGHT_CTRL, KC_NO,
    KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO, KC_NO,    KC_NO, KC_NO,        KC_NO,          KC_NO,       KC_NO,         KC_NO,
                                     PLAY,  MUTE,    KC_NO, KC_NO
  ),
  [4] = LAYOUT_voyager( // SYMBOLS
    KC_NO, KC_PIPE, KC_EQUAL, KC_TILD, KC_PLUS, KC_LABK,   KC_RABK, KC_CIRC,      KC_AMPR,        KC_PERC,     KC_ASTR,       KC_NO,
    KC_NO, KC_NO,   KC_EQUAL, KC_RABK, KC_NO,   KC_LPRN,   KC_RPRN, KC_NO,        KC_NO,          KC_NO,       KC_NO,         KC_F12,
    KC_NO, KC_LPRN, KC_RPRN,  KC_LCBR, KC_RCBR, KC_SCLN,   KC_COLN, KC_RIGHT_GUI, KC_RIGHT_SHIFT, KC_LEFT_ALT, KC_RIGHT_CTRL, KC_NO,
    KC_NO, KC_LBRC, KC_RBRC,  KC_LABK, KC_RABK, KC_UNDS,   KC_EXLM, KC_NO,        KC_NO,          KC_NO,       KC_NO,         KC_NO,
                                       KC_SPACE, KC_TAB,   KC_NO, KC_TRANSPARENT
  ),
};




bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}



