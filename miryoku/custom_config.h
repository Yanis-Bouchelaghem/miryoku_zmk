// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
U_MT(LGUI, A),     U_MT(LALT, S),     U_MT(LSHFT, D),    U_MT(LCTRL, F),    &kp G,             &kp H,             U_MT(LCTRL, J),    U_MT(LSHFT, K),    U_MT(LALT, L),     U_MT(LGUI, SQT),   \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

#define MIRYOKU_LAYER_NUM \
&kp EXCL,          &kp AT,            &kp LBRC,          &kp RBRC,          &kp PIPE,          &kp PLUS,          &kp N7,            &kp N8,            &kp N9,            &kp ASTERISK,      \
U_MT(LGUI, HASH),  U_MT(LALT, DOLLAR),U_MT(LSHFT, LPAR), U_MT(LCTRL, RPAR), &kp GRAVE,         &kp MINUS,         &kp N4,            &kp N5,            &kp N6,            &kp COLON,         \
&kp PERCENT,       &kp CARET,         &kp LBKT,          &kp RBKT,          &kp TILDE,         &kp EQUAL,         &kp N1,            &kp N2,            &kp N3,            &kp BSLH,         \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp RET,           &kp N0,            &kp DOT,           U_NP,              U_NP

#define MIRYOKU_LAYER_NAV \
&kp F1,            &kp F2,            &kp F3,            &kp F4,            &u_out_tog,        U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
U_MT(LGUI, F5),    U_MT(LALT, F6),    U_MT(LSHFT, F7),   U_MT(LCTRL, F8),   U_EP_TOG,         &kp LEFT,          &kp DOWN,          &kp UP,            &kp RIGHT,         &u_caps_word,      \
&kp F9,            &kp F10,           &kp F11,           &kp F12,           U_NA,              &kp HOME,          &kp PG_DN,         &kp PG_UP,         &kp END,           &kp INS,           \
U_NP,              U_NP,              &bt BT_CLR,        U_NA,              &bt BT_NXT,        &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP
