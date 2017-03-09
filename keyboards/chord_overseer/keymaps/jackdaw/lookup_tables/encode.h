#ifndef ENCODE_H
#define ENCODE_H

#define MAX_LETTERS 6
#define NO_ENTRY {0}
#define _1(c1) {c1, 0, 0, 0, 0, 0}
#define _2(c1, c2) {c1, c2, 0, 0, 0, 0}
#define _3(c1, c2, c3) {c1, c2, c3, 0, 0, 0}
#define _4(c1, c2, c3, c4) {c1, c2, c3, c4, 0, 0}
#define _5(c1, c2, c3, c4, c5) {c1, c2, c3, c4, c5, 0}
#define _6(c1, c2, c3, c4, c5, c6) {c1, c2, c3, c4, c5, c6}

#define MAX_SYMBOLS 3
#define _S1(c1) {c1, 0, 0}
#define _S2(c1, c2) {c1, c2, 0}
#define _S3(c1, c2, c3) {c1, c2, c3}

#define MAX_PUNCTUATIONS 5
#define _P1(c1) {c1, 0, 0, 0, 0}
#define _P2(c1, c2) {c1, c2, 0, 0, 0}
#define _P3(c1, c2, c3) {c1, c2, c3, 0, 0}
#define _P4(c1, c2, c3, c4) {c1, c2, c3, c4, 0}
#define _P5(c1, c2, c3, c4, c5) {c1, c2, c3, c4, c5}

#define _NOSPC QK_MODS_MAX

#ifdef COLEMAK_OS_ENABLE

#define _A      KC_A
#define _B      KC_B
#define _C      KC_C
#define _S      KC_D
#define _F      KC_E
#define _T      KC_F
#define _D      KC_G
#define _H      KC_H
#define _U      KC_I
#define _N      KC_J
#define _E      KC_K
#define _I      KC_L
#define _M      KC_M
#define _K      KC_N
#define _Y      KC_O
#define _COLN   KC_P
#define _SCLN   LSFT(KC_P)
#define _O      KC_SCLN
#define _Q      KC_Q
#define _P      KC_R
#define _R      KC_S
#define _G      KC_T
#define _L      KC_U
#define _V      KC_V
#define _W      KC_W
#define _X      KC_X
#define _J      KC_Y
#define _Z      KC_Z

#else

#define _A      KC_A
#define _B      KC_B
#define _C      KC_C
#define _D      KC_D
#define _E      KC_E
#define _F      KC_F
#define _G      KC_G
#define _H      KC_H
#define _I      KC_I
#define _J      KC_J
#define _K      KC_K
#define _L      KC_L
#define _M      KC_M
#define _N      KC_N
#define _O      KC_O
#define _P      KC_P
#define _Q      KC_Q
#define _R      KC_R
#define _S      KC_S
#define _T      KC_T
#define _U      KC_U
#define _V      KC_V
#define _W      KC_W
#define _X      KC_X
#define _Y      KC_Y
#define _Z      KC_Z

#define _SCLN   KC_SCLN
#define _COLN   KC_COLN

#endif

#define _SUP2   KC_SUP2
#define _AMP    LSFT(KC_7)
#define _EACU   KC_EACU
#define _DQUOT  LSFT(KC_QUOT)
#define _APOS   KC_QUOT
#define _LPRN   KC_LPRN
#define _MINS   KC_MINS
#define _EGRV   KC_EGRV
#define _UNDS   KC_UNDS
#define _CCED   KC_CCED
#define _AGRV   KC_AGRV
#define _RPRN   KC_RPRN
#define _EQL    KC_EQL
#define _DLR    KC_DLR
#define _UGRV   KC_UGRV
#define _ASTR   KC_ASTR
#define _LESS   LSFT(KC_COMM)
#define _COMM   KC_COMM
#define _EXLM   KC_EXLM
#define _N1     KC_1 
#define _N2     KC_2 
#define _N3     KC_3 
#define _N4     KC_4 
#define _N5     KC_5 
#define _N6     KC_6 
#define _N7     KC_7 
#define _N8     KC_8 
#define _N9     KC_9 
#define _N0     KC_0 
#define _OVRR   KC_OVRR
#define _PLUS   KC_PLUS
#define _UMLT   KC_UMLT
#define _PND    KC_PND
#define _PERC   KC_PERC
#define _MU     KC_MU 
#define _GRTR   LSFT(KC_DOT)
#define _QUES   LSFT(KC_SLSH)
#define _DOT    KC_DOT
#define _SLSH   KC_SLSH
#define _SECT   KC_SECT
#define _TILD   KC_TILD
#define _HASH   KC_HASH
#define _LCBR   KC_LCBR
#define _LBRC   KC_LBRC
#define _PIPE   KC_PIPE
#define _GRV    KC_GRV 
#define _BSLS   KC_BSLS
#define _CIRC   ALGR(KC_9)
#define _AT     KC_AT 
#define _RBRC   KC_RBRC
#define _RCBR   KC_RCBR
#define _EURO   KC_EURO
#define _BULT   KC_BULT

#endif
