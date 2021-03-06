#ifndef MISC_TABLES_H
#define MISC_TABLES_H

#include "encode.h"

const uint16_t PROGMEM g_spaces_ctl_table[4][MAX_SYMBOLS] =
{
    NO_ENTRY,                               // [0]
    _S1(KC_TAB),                            // [1]
    _S1(KC_ENT),                            // [2]
    NO_ENTRY                                // [3]
};

const uint16_t PROGMEM g_left_numbers[32][MAX_SYMBOLS] =
{
    NO_ENTRY,                               // [0]
    _S1(_N1),                               // [1]
    _S1(_N2),                               // [2]
    _S1(_N3),                               // [3]
    _S1(_N4),                               // [4]
    _S1(_N5),                               // [5]
    _S1(_N6),                               // [6]
    _S1(_N7),                               // [7]
    _S1(_N8),                               // [8]
    _S1(_N9),                               // [9]
    _S2(_N1,_N0),                           // [10]
    _S2(_N1,_N1),                           // [11]
    _S2(_N1,_N2),                           // [12]
    _S2(_N1,_N3),                           // [13]
    _S2(_N1,_N4),                           // [14]
    _S2(_N1,_N5),                           // [15]
    _S1(_N0),                               // [16]
    _S2(_N1, _N0),                          // [17]
    _S2(_N2, _N0),                          // [18]
    _S2(_N3, _N0),                          // [19]
    _S2(_N4, _N0),                          // [20]
    _S2(_N5, _N0),                          // [21]
    _S2(_N6, _N0),                          // [22]
    _S2(_N7, _N0),                          // [23]
    _S2(_N8, _N0),                          // [24]
    _S2(_N9, _N0),                          // [25]
    _S3(_N1, _N0, _N0),                     // [26]
    _S3(_N1, _N1, _N0),                     // [27]
    _S3(_N1, _N2, _N0),                     // [28]
    _S3(_N1, _N3, _N0),                     // [29]
    _S3(_N1, _N4, _N0),                     // [30]
    _S3(_N1, _N5, _N0)                      // [31]
};

const uint16_t PROGMEM g_right_numbers[32][MAX_SYMBOLS] =
{
    NO_ENTRY,                               // [0]
    _S1(_N1),                               // [1]
    _S1(_N2),                               // [2]
    _S1(_N3),                               // [3]
    _S1(_N4),                               // [4]
    _S1(_N5),                               // [5]
    _S1(_N6),                               // [6]
    _S1(_N7),                               // [7]
    _S1(_N8),                               // [8]
    _S1(_N9),                               // [9]
    _S2(_N1,_N0),                           // [10]
    _S2(_N1,_N1),                           // [11]
    _S2(_N1,_N2),                           // [12]
    _S2(_N1,_N3),                           // [13]
    _S2(_N1,_N4),                           // [14]
    _S2(_N1,_N5),                           // [15]
    _S1(_N0),                               // [16]
    _S2(_N1, _N0),                          // [17]
    _S2(_N2, _N0),                          // [18]
    _S2(_N3, _N0),                          // [19]
    _S2(_N4, _N0),                          // [20]
    _S2(_N5, _N0),                          // [21]
    _S2(_N6, _N0),                          // [22]
    _S2(_N7, _N0),                          // [23]
    _S2(_N8, _N0),                          // [24]
    _S2(_N9, _N0),                          // [25]
    _S3(_N1, _N0, _N0),                     // [26]
    _S3(_N1, _N1, _N0),                     // [27]
    _S3(_N1, _N2, _N0),                     // [28]
    _S3(_N1, _N3, _N0),                     // [29]
    _S3(_N1, _N4, _N0),                     // [30]
    _S3(_N1, _N5, _N0)                      // [31]
};

#endif
