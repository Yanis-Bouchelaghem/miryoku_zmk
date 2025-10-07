// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp P,             \
U_MT(LGUI, A),     U_MT(LALT, R),     U_MT(LSHFT, S),    U_MT(LCTRL, T),    &kp G,             &kp M,             U_MT(LCTRL, N),    U_MT(LSHFT, E),    U_MT(LALT, I),     U_MT(LGUI, O),\
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp D,             &kp V,             &kp K,             &kp H,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_NUM, ESC),  U_MT(LSHFT, SPACE),U_LT(U_NAV, TAB),  U_LT(U_SYM, RET),  U_LT(U_MEDIA, BSPC), U_LT(U_FUN, DEL),U_NP,              U_NP

#define MIRYOKU_LAYER_NUM \
&kp EXCL,          &kp AT,            &kp LBRC,          &kp RBRC,          &kp PIPE,          &kp PLUS,          &kp N7,            &kp N8,            &kp N9,            &kp ASTERISK,      \
U_MT(LGUI, HASH),  U_MT(LALT, DOLLAR),U_MT(LSHFT, LPAR), U_MT(LCTRL, RPAR), &kp GRAVE,         &kp MINUS,         &kp N4,            &kp N5,            &kp N6,            &kp SQT,         \
&kp PERCENT,       &kp CARET,         &kp LBKT,          &kp RBKT,          &kp TILDE,         &kp EQUAL,         &kp N1,            &kp N2,            &kp N3,            &kp BSLH,         \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp RET,           &kp N0,            &kp DOT,           U_NP,              U_NP

#define MIRYOKU_LAYER_NAV \
&kp F1,            &kp F2,            &kp F3,            &kp F4,            &bt BT_NXT,        U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
U_MT(LGUI, F5),    U_MT(LALT, F6),    U_MT(LSHFT, F7),   U_MT(LCTRL, F8),   &bt BT_PRV,        &kp LEFT,          &kp DOWN,          &kp UP,            &kp RIGHT,         &u_caps_word,      \
&kp F9,            &kp F10,           &kp F11,           &kp F12,           &bt BT_CLR,        &kp HOME,          &kp PG_DN,         &kp PG_UP,         &kp END,           &kp INS,           \
U_NP,              U_NP,              &u_out_tog,        &soft_off,         U_NA,         &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP