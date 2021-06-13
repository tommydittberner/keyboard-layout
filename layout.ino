/* -*- mode: c++ -*-
 *  Modified colemak-dhm layout for the German language.
 *  Last updated by Tommy Dittberner on 05.06.2021
 *  
 * Atreus -- Chrysalis-enabled Sketch for the Keyboardio Atreus
 * Copyright (C) 2018, 2019  Keyboard.io, Inc
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef BUILD_INFORMATION
#define BUILD_INFORMATION "locally built"
#endif

#include "Kaleidoscope.h"
//#include "Kaleidoscope-Macros.h"
#include "Kaleidoscope-Qukeys.h"
#include "Kaleidoscope-MouseKeys.h"
/* plugin: https://github.com/keyboardio/Kaleidoscope-Languages */
#include "Kaleidoscope-Languages.h"
#include "kaleidoscope/lang/de-qwertz.h"

#define MO(n) ShiftToLayer(n)
#define TG(n) LockLayer(n)

enum {
  BASE,
  SHIFT,
  SUB,
  SUPER,
  MOUSE
};

/* *INDENT-OFF* */
KEYMAPS(
  [BASE] = KEYMAP_STACKED
  (
    Key_de_Q,           Key_de_W,       Key_de_F,   Key_de_P,  Key_de_B,
    Key_de_A,           Key_de_R,       Key_de_S,   Key_de_T,  Key_de_G,
    Key_de_Z,           Key_de_X,       Key_de_C,   Key_de_D,  Key_de_V,        Key_de_Backtick,
    Key_de_LeftControl, Key_de_LeftGui, Key_de_Tab, MO(SUPER), Key_de_Spacebar, Key_de_Enter,

                  Key_de_J,         Key_de_L, Key_de_U,      Key_de_Y,      Key_de_Quote,
                  Key_de_M,         Key_de_N, Key_de_E,      Key_de_I,      Key_de_O,
    Key_de_Slash, Key_de_K,         Key_de_H, Key_de_Comma,  Key_de_Period, Key_de_Minus,
    MO(SHIFT),    Key_de_Backspace, MO(SUB),  Key_de_Delete, XXX,           Key_de_LeftAlt
  ),

  [SHIFT] = KEYMAP_STACKED
  (
    LSHIFT(Key_de_Q),      LSHIFT(Key_de_W),       LSHIFT(Key_de_F),   LSHIFT(Key_de_P), LSHIFT(Key_de_B),
    LSHIFT(Key_de_A),      LSHIFT(Key_de_R),       LSHIFT(Key_de_S),   LSHIFT(Key_de_T), LSHIFT(Key_de_G),
    LSHIFT(Key_de_Z),      LSHIFT(Key_de_X),       LSHIFT(Key_de_C),   LSHIFT(Key_de_D), LSHIFT(Key_de_V),        Key_de_Tick,
    LSHIFT(Key_de_Escape), LSHIFT(Key_de_LeftGui), LSHIFT(Key_de_Tab), XXX,              LSHIFT(Key_de_Spacebar), LSHIFT(Key_de_Enter),

                      LSHIFT(Key_de_J),         LSHIFT(Key_de_L), LSHIFT(Key_de_U),  LSHIFT(Key_de_Y), Key_de_DoubleQuote,
                      LSHIFT(Key_de_M),         LSHIFT(Key_de_N), LSHIFT(Key_de_E),  LSHIFT(Key_de_I), LSHIFT(Key_de_O),
    Key_de_Backslash, LSHIFT(Key_de_K),         LSHIFT(Key_de_H), Key_de_Semicolon,  Key_de_Colon,     Key_de_Underscore,
    XXX,              LSHIFT(Key_de_Backspace), XXX,              ___,               ___,              LSHIFT(Key_de_LeftAlt)
  ),

  [SUB] = KEYMAP_STACKED
  (
    Key_de_ExlamationMark, Key_de_At,        Key_de_Circumflex,  Key_de_Dollar,      Key_de_Percent,
    Key_de_Asterisk,       Key_de_LeftParen, Key_de_RightParen,  Key_de_LeftBracket, Key_de_RightBracket,
    XXX,                   Key_de_LessThan,  Key_de_GreaterThan, Key_de_LeftCurly,   Key_de_RightCurly,   XXX,
    XXX,                   XXX,              XXX,                XXX,                XXX,                 XXX,

         Key_de_Ampersand, Key_de_Pipe, Key_de_Equals, Key_de_QuestionMark, Key_de_Circle,
         XXX,              Key_de_Tilde, Key_de_Euro,   Key_de_Plus,         Key_de_Minus,
    XXX, XXX,              Key_de_Hash,  XXX,           XXX,                 XXX,
    XXX, XXX,              XXX,          XXX,           XXX,                 XXX
   ),

  [SUPER] = KEYMAP_STACKED
  (
    Key_de_Insert,      Key_de_Home,      Key_de_UpArrow,   Key_de_End,        Key_de_PageUp,
    Key_de_Delete,      Key_de_LeftArrow, Key_de_DownArrow, Key_de_RightArrow, Key_de_PageDown,
    Key_de_PrintScreen, XXX,              Key_de_VolumeUp,  Key_de_VolumeDown, Key_de_Mute,     XXX,
    XXX,                XXX,              XXX,              XXX,               XXX,             XXX,

         Key_de_Backspace, Key_7,        Key_8, Key_9,        Key_de_Asterisk,
         XXX,              Key_4,        Key_5, Key_6,        Key_de_Minus,
    XXX, XXX,              Key_1,        Key_2, Key_3,        Key_de_Plus,
    XXX, XXX,              Key_de_Slash, Key_0, Key_de_Comma, Key_de_Enter
   ),
   
  [MOUSE] = KEYMAP_STACKED
  (
    XXX, Key_mouseBtnP, Key_mouseUp, Key_mouseBtnN, XXX,
    XXX, Key_mouseL, Key_mouseDn, Key_mouseR, XXX,
    XXX, XXX, XXX, XXX, XXX, XXX,
    XXX, XXX, XXX, Key_mouseBtnL, Key_mouseScrollUp, Key_mouseScrollL,

         XXX, XXX, XXX, XXX, XXX,
         XXX, XXX, XXX, XXX, XXX,
    XXX, XXX, XXX, XXX, XXX, XXX,
    Key_mouseScrollR, Key_mouseScrollDn, Key_mouseBtnR, XXX, XXX, XXX
   )
)
/* *INDENT-ON* */

KALEIDOSCOPE_INIT_PLUGINS(
  Qukeys,
  MouseKeys
);

void setup() {
  QUKEYS(
    //Qukey(layer, key_addr, alternate_key)
    
    //umlaute
    kaleidoscope::plugin::Qukey(BASE,  KeyAddr(1, 2),  Key_de_SS),           // s -> ß
    kaleidoscope::plugin::Qukey(BASE,  KeyAddr(1, 0),  Key_de_AUml),         // a -> ä
    kaleidoscope::plugin::Qukey(SHIFT, KeyAddr(1, 0),  LSHIFT(Key_de_AUml)), // A -> Ä
    kaleidoscope::plugin::Qukey(BASE,  KeyAddr(1, 11), Key_de_OUml),         // o -> ö
    kaleidoscope::plugin::Qukey(SHIFT, KeyAddr(1, 11), LSHIFT(Key_de_OUml)), // o -> Ö
    kaleidoscope::plugin::Qukey(BASE,  KeyAddr(0, 9),  Key_de_UUml),         // u -> ü
    kaleidoscope::plugin::Qukey(SHIFT, KeyAddr(0, 9),  LSHIFT(Key_de_UUml)), // U -> Ü

    //common special characters
    kaleidoscope::plugin::Qukey(BASE,  KeyAddr(0, 0),  Key_de_At),           // q -> @
    kaleidoscope::plugin::Qukey(BASE,  KeyAddr(1, 9),  Key_de_Euro),         // e -> €
    kaleidoscope::plugin::Qukey(BASE,  KeyAddr(1, 8),  Key_de_Tilde),        // n -> ~

    //layer shifts/switches
    kaleidoscope::plugin::Qukey(BASE,  KeyAddr(1, 7),  MO(MOUSE)),           // shift to mouse controls

    //hold for "ctrl+" version of the key
    kaleidoscope::plugin::Qukey(BASE,  KeyAddr(2, 2),  LCTRL(Key_de_C)),     // c copy
    kaleidoscope::plugin::Qukey(BASE,  KeyAddr(2, 4),  LCTRL(Key_de_V)),     // v paste
    kaleidoscope::plugin::Qukey(BASE,  KeyAddr(2, 1),  LCTRL(Key_de_X)),     // x cut
    kaleidoscope::plugin::Qukey(BASE,  KeyAddr(2, 0),  LCTRL(Key_de_Z)),     // z undo
    kaleidoscope::plugin::Qukey(BASE,  KeyAddr(0, 10), LCTRL(Key_de_Y)),     // y redo
    kaleidoscope::plugin::Qukey(BASE,  KeyAddr(1, 3),  LCTRL(Key_de_F)),     // f find
    kaleidoscope::plugin::Qukey(BASE,  KeyAddr(0, 8),  LCTRL(Key_de_L)),     // l select address bar
    kaleidoscope::plugin::Qukey(BASE,  KeyAddr(1, 1),  LCTRL(Key_de_R)),     // r reload page
    /* todo: 
     * p = print
     * s = save or leave ß
     * t = new tab
     * n = new page/browser window/doc or leave ~
     */
  )
  
  //Qukey settings
  Qukeys.setHoldTimeout(250);
  Qukeys.setOverlapThreshold(80);

  //MouseKey settings
  MouseKeys.speed = 8;
  MouseKeys.speedDelay = 0;
  MouseKeys.accelSpeed = 0;
  
  Kaleidoscope.setup();
}

void loop() {
  Kaleidoscope.loop();
}
