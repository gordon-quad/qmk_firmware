#ifndef SHELTON_TABLES_H
#define SHELTON_TABLES_H

#include "encode.h"

// NOTE: (*) = not in the original Shelton table

// Lookup tables for the steno layer
const uint8_t PROGMEM g_left_hand_table[256][MAX_LETTERS] =
{
    NO_ENTRY, // [0]
    _1(_N), // [1]
    _1(_R), // [2]
    _1(_L), // [3]
    _1(_W), // [4]
    _1(_M), // [5]
    _2(_W, _R), // [6]
    _2(_M, _R), // [7]
    _1(_H), // [8]
    _1(_Y), // [9]
    _2(_R, _H), // [10]
    _2(_L, _Y), // [11]
    _2(_W, _H), // [12]
    _2(_M, _Y), // [13]
    NO_ENTRY, // [14]
    NO_ENTRY, // [15]
    _1(_C), // [16]
    _1(_Z), // [17]
    _2(_C, _R), // [18]
    _2(_C, _L), // [19]
    _1(_P), // [20]
    _2(_P, _N), // [21]
    _2(_P, _R), // [22]
    _2(_P, _L), // [23]
    _2(_C, _H), // [24]
    _2(_C, _Y), // [25]
    _3(_C, _H, _R), // [26]
    _3(_C, _R, _Y), // [27]
    _2(_P, _H), // [28]
    _2(_P, _Y), // [29]
    _3(_P, _H, _R), // [30]
    _3(_P, _H, _L), // [31]
    _1(_T), // [32]
    _1(_V), // [33]
    _2(_T, _R), // [34]
    _1(_Q), // [35]
    _2(_T, _W), // [36]
    _1(_J), // [37]
    NO_ENTRY, // [38]
    _3(_J, _E, _R), // [39]
    _2(_T, _H), // [40]
    _2(_T, _Y), // [41]
    _3(_T, _H, _R), // [42]
    _3(_T, _R, _Y), // [43]
    _1(_K), // [44]
    _2(_K, _N), // [45]
    _2(_K, _R), // [46]
    _2(_K, _L), // [47]
    _1(_D), // [48]
    _3(_D, _E, _V), // [49]
    _2(_D, _R), // [50]
    _3(_D, _E, _L), // [51]
    _2(_D, _W), // [52]
    _3(_D, _E, _M), // [53]
    _3(_D, _E, _R), // [54]
    NO_ENTRY, // [55]
    _1(_F), // [56]
    _2(_D, _Y), // [57]
    _2(_F, _R), // [58]
    _2(_F, _L), // [59]
    _1(_B), // [60]
    _2(_B, _Y), // [61]
    _2(_B, _R), // [62]
    _2(_B, _L), // [63]
    _1(_A), // [64]
    _2(_A, _N), // [65]
    _2(_A, _R), // [66]
    _2(_A, _L), // [67]
    _2(_A, _W), // [68]
    _2(_A, _M), // [69]
    NO_ENTRY, // [70]
    _3(_A, _L, _L), // [71]
    _2(_A, _H), // [72]
    _2(_A, _Y), // [73]
    NO_ENTRY, // [74]
    NO_ENTRY, // [75]
    _3(_A, _W, _H), // [76]
    NO_ENTRY, // [77]
    NO_ENTRY, // [78]
    NO_ENTRY, // [79]
    _2(_A, _C), // [80]
    _2(_A, _Z), // [81]
    _3(_A, _C, _R), // [82]
    _3(_A, _C, _L), // [83]
    _2(_A, _P), // [84]
    _3(_A, _M, _M), // [85]
    _3(_A, _P, _R), // [86]
    _3(_A, _P, _L), // [87]
    _3(_A, _C, _H), // [88]
    _3(_A, _C, _C), // [89]
    _4(_A, _C, _C, _R), // [90]
    _4(_A, _C, _C, _L), // [91]
    _3(_A, _P, _H), // [92]
    NO_ENTRY, // [93]
    _4(_A, _P, _H, _R), // [94]
    NO_ENTRY, // [95]
    _2(_A, _T), // [96]
    _2(_A, _V), // [97]
    _3(_A, _T, _R), // [98]
    _2(_A, _Q), // [99]
    _3(_A, _T, _T), // [100]
    _2(_A, _J), // [101]
    _4(_A, _T, _T, _R), // [102]
    NO_ENTRY, // [103]
    _3(_A, _T, _H), // [104]
    NO_ENTRY, // [105]
    _4(_A, _T, _H, _L), // [106]
    NO_ENTRY, // [107]
    _2(_A, _K), // [108]
    _4(_A, _C, _K, _N), // [109]
    NO_ENTRY, // [110]
    NO_ENTRY, // [111]
    _2(_A, _D), // [112]
    _3(_A, _D, _V), // [113]
    _3(_A, _D, _R), // [114]
    _3(_A, _C, _Q), // [115]
    _3(_A, _D, _D), // [116]
    _3(_A, _D, _M), // [117]
    _4(_A, _D, _D, _R), // [118]
    _4(_A, _D, _D, _L), // [119]
    _2(_A, _F), // [120]
    _3(_A, _F, _F), // [121]
    _3(_A, _F, _R), // [122]
    _3(_A, _F, _L), // [123]
    _2(_A, _B), // [124]
    _3(_A, _B, _Y), // [125]
    _3(_A, _B, _R), // [126]
    _3(_A, _B, _L), // [127]
    _1(_S), // [128]
    _2(_S, _N), // [129]
    _3(_S, _E, _R), // [130]
    _2(_S, _L), // [131]
    _2(_S, _W), // [132]
    _2(_S, _M), // [133]
    NO_ENTRY, // [134]
    NO_ENTRY, // [135]
    _2(_S, _H), // [136]
    _2(_S, _Y), // [137]
    _3(_S, _H, _R), // [138]
    _3(_S, _L, _Y), // [139]
    NO_ENTRY, // [140]
    NO_ENTRY, // [141]
    NO_ENTRY, // [142]
    NO_ENTRY, // [143]
    _2(_S, _C), // [144]
    _2(_S, _S), // [145]
    _3(_S, _C, _R), // [146]
    NO_ENTRY, // [147]
    _2(_S, _P), // [148]
    NO_ENTRY, // [149]
    _3(_S, _P, _R), // [150]
    _3(_S, _P, _L), // [151]
    _3(_S, _C, _H), // [152]
    NO_ENTRY, // [153]
    NO_ENTRY, // [154]
    NO_ENTRY, // [155]
    _3(_S, _P, _H), // [156]
    _3(_S, _P, _Y), // [157]
    NO_ENTRY, // [158]
    NO_ENTRY, // [159]
    _2(_S, _T), // [160]
    _2(_S, _V), // [161]
    _3(_S, _T, _R), // [162]
    _2(_S, _Q), // [163]
    _1(_X), // [164]
    NO_ENTRY, // [165]
    _2(_X, _R), // [166]
    _4(_S, _E, _R, _V), // [167]
    NO_ENTRY, // [168]
    _3(_S, _T, _Y), // [169]
    NO_ENTRY, // [170]
    _4(_S, _T, _R, _Y), // [171]
    _2(_S, _K), // [172]
    _2(_X, _Y), // [173]
    NO_ENTRY, // [174]
    NO_ENTRY, // [175]
    _1(_G), // [176]
    _2(_G, _N), // [177]
    _2(_G, _R), // [178]
    _2(_G, _L), // [179]
    _2(_G, _W), // [180]
    NO_ENTRY, // [181]
    NO_ENTRY, // [182]
    NO_ENTRY, // [183]
    _2(_G, _H), // [184]
    _2(_G, _Y), // [185]
    NO_ENTRY, // [186]
    NO_ENTRY, // [187]
    NO_ENTRY, // [188]
    NO_ENTRY, // [189]
    NO_ENTRY, // [190]
    NO_ENTRY, // [191]
    _2(_A, _S), // [192]
    _3(_A, _N, _N), // [193]
    _3(_A, _R, _R), // [194]
    _3(_A, _S, _L), // [195]
    NO_ENTRY, // [196]
    _3(_A, _S, _M), // [197]
    NO_ENTRY, // [198]
    NO_ENTRY, // [199]
    _3(_A, _S, _H), // [200]
    _3(_A, _S, _Y), // [201]
    NO_ENTRY, // [202]
    NO_ENTRY, // [203]
    NO_ENTRY, // [204]
    NO_ENTRY, // [205]
    NO_ENTRY, // [206]
    NO_ENTRY, // [207]
    _3(_A, _S, _C), // [208]
    _3(_A, _S, _S), // [209]
    _4(_A, _S, _C, _R), // [210]
    NO_ENTRY, // [211]
    _3(_A, _S, _P), // [212]
    _3(_A, _P, _P), // [213]
    _4(_A, _P, _P, _R), // [214]
    _4(_A, _P, _P, _L), // [215]
    NO_ENTRY, // [216]
    NO_ENTRY, // [217]
    NO_ENTRY, // [218]
    NO_ENTRY, // [219]
    _4(_A, _S, _P, _H), // [220]
    _5(_A, _S, _P, _H, _Y), // [221]
    NO_ENTRY, // [222]
    NO_ENTRY, // [223]
    _3(_A, _S, _T), // [224]
    _3(_I, _N, _V), // [225]    (*)
    _2(_I, _R), // [226]        (*)
    _3(_A, _S, _Q), // [227]
    _2(_A, _X), // [228]
    NO_ENTRY, // [229]
    NO_ENTRY, // [230]
    NO_ENTRY, // [231]
    _4(_A, _S, _T, _H), // [232]
    _3(_I, _N, _T), // [233]    (*)
    _3(_I, _R, _R), // [234]    (*)
    _5(_I, _N, _T, _E, _R), // [235]    (*)
    _3(_A, _S, _K), // [236]
    NO_ENTRY, // [237]
    NO_ENTRY, // [238]
    NO_ENTRY, // [239]
    _2(_A, _G), // [240]
    _3(_A, _G, _N), // [241]
    _3(_A, _G, _R), // [242]
    _3(_A, _G, _L), // [243]
    _3(_A, _G, _G), // [244]
    _3(_A, _D, _J), // [245]
    _4(_A, _G, _G, _R), // [246]
    _4(_A, _G, _G, _L), // [247]
    _3(_A, _G, _H), // [248]
    _3(_A, _F, _T), // [249]
    _4(_A, _F, _F, _R), // [250]
    _4(_A, _F, _F, _L), // [251]
    _3(_A, _B, _B), // [252]
    NO_ENTRY, // [253]
    _4(_A, _B, _B, _R), // [254]
    NO_ENTRY // [255]
};

// From Jackdaw (the 4 vowels version)
const uint8_t PROGMEM g_thumbs_table[32][MAX_LETTERS] =
{
    NO_ENTRY,                               // [0]
    _1(_E),                                 // [1]
    _1(_O),                                 // [2]
    _2(_I, _E),                             // [3]
    _1(_A),                                 // [4]
    _2(_E, _A),                             // [5]
    _2(_I, _O),                             // [6]
    _3(_E, _O, _A),                         // [7]
    _1(_U),                                 // [8]
    _1(_I),                                 // [9]
    _2(_O, _U),                             // [10]
    _2(_O, _I),                             // [11]
    _2(_A, _U),                             // [12]
    _2(_E, _I),                             // [13]
    _3(_O, _A, _U),                         // [14]
    _3(_I, _O, _U),                         // [15]
    NO_ENTRY,                               // [16]
    NO_ENTRY,                               // [17]
    NO_ENTRY,                               // [18]
    NO_ENTRY,                               // [19]
    NO_ENTRY,                               // [20]
    NO_ENTRY,                               // [21]
    NO_ENTRY,                               // [22]
    NO_ENTRY,                               // [23]
    NO_ENTRY,                               // [24]
    NO_ENTRY,                               // [25]
    NO_ENTRY,                               // [26]
    NO_ENTRY,                               // [27]
    NO_ENTRY,                               // [28]
    NO_ENTRY,                               // [29]
    NO_ENTRY,                               // [30]
    NO_ENTRY,                               // [31]
};

// Double single vowels and invert bigrams
const uint8_t PROGMEM g_thumbs_bigrams_table[32][MAX_LETTERS] =
{
    NO_ENTRY,                               // [0]
    _2(_E, _E),                             // [1]
    _2(_O, _O),                             // [2]
    _2(_E, _I),                             // [3]
    _2(_A, _A),                             // [4]
    _2(_A, _E),                             // [5]
    _2(_O, _I),                             // [6]
    _3(_E, _A, _O),                         // [7]
    _2(_U, _U),                             // [8]
    _2(_I, _I),                             // [9]
    _2(_U, _O),                             // [10]
    _2(_I, _O),                             // [11]
    _2(_U, _A),                             // [12]
    _3(_E, _U, _A),                         // [13]
    _3(_O, _U, _A),                         // [14]
    _3(_U, _O, _U),                         // [15]
    NO_ENTRY,                               // [16]
    NO_ENTRY,                               // [17]
    NO_ENTRY,                               // [18]
    NO_ENTRY,                               // [19]
    NO_ENTRY,                               // [20]
    NO_ENTRY,                               // [21]
    NO_ENTRY,                               // [22]
    NO_ENTRY,                               // [23]
    NO_ENTRY,                               // [24]
    NO_ENTRY,                               // [25]
    NO_ENTRY,                               // [26]
    NO_ENTRY,                               // [27]
    NO_ENTRY,                               // [28]
    NO_ENTRY,                               // [29]
    NO_ENTRY,                               // [30]
    NO_ENTRY,                               // [31]
};

const uint8_t PROGMEM g_right_hand_table[256][MAX_LETTERS] =
{
    NO_ENTRY,                               // [0]
    _1(_R),                                 // [1]
    _1(_N),                                 // [2]
    _2(_R, _N),                             // [3]
    _1(_L),                                 // [4]
    _2(_R, _L),                             // [5]
    _1(_S),                                 // [6]
    _2(_L, _L),                             // [7]
    _1(_G),                                 // [8]
    _2(_R, _G),                             // [9]
    _2(_N, _G),                             // [10]
    _2(_G, _N),                             // [11]
    _2(_L, _G),                             // [12]
    _2(_G, _R),                             // [13]     (*)
    _1(_D),                                 // [14]
    _2(_D, _L),                             // [15]
    _1(_C),                                 // [16]
    _2(_R, _C),                             // [17]
    _2(_N, _C),                             // [18]
    _3(_N, _C, _R),                         // [19]     (*)
    _1(_P),                                 // [20]
    _2(_R, _P),                             // [21]
    _2(_S, _P),                             // [22]
    _2(_P, _L),                             // [23]
    _1(_B),                                 // [24]
    _2(_R, _B),                             // [25]
    _2(_G, _G),                             // [26]
    _3(_B, _E, _R),                         // [27]     (*)
    _2(_B, _L),                             // [28]
    NO_ENTRY,                               // [29]
    NO_ENTRY,                               // [30]
    _2(_L, _B),                             // [31]
    _1(_H),                                 // [32]
    _1(_W),                                 // [33]
    _1(_V),                                 // [34]
    _2(_W, _N),                             // [35]
    _1(_Z),                                 // [36]
    _2(_W, _L),                             // [37]
    _2(_S, _H),                             // [38]
    _2(_L, _V),                             // [39]
    _2(_G, _H),                             // [40]
    _3(_R, _G, _H),                         // [41]
    _1(_M),                                 // [42]
    _2(_R, _M),                             // [43]
    _1(_X),                                 // [44]
    NO_ENTRY,                               // [45]
    _2(_S, _M),                             // [46]
    _2(_L, _M),                             // [47]
    _2(_C, _H),                             // [48]
    _3(_R, _C, _H),                         // [49]
    _3(_N, _C, _H),                         // [50]
    _2(_R, _V),                             // [51]
    _2(_P, _H),                             // [52]
    NO_ENTRY,                               // [53]
    NO_ENTRY,                               // [54]
    _3(_L, _C, _H),                         // [55]
    _1(_F),                                 // [56]
    _2(_R, _F),                             // [57]
    _2(_M, _B),                             // [58]
    _4(_M, _B, _E, _R),                     // [59]     (*)
    _2(_L, _F),                             // [60]
    _2(_F, _L),                             // [61]     (*)
    _2(_M, _P),                             // [62]
    _2(_P, _M),                             // [63]     (*)
    _1(_T),                                 // [64]
    _2(_R, _T),                             // [65]
    _2(_N, _T),                             // [66]
    _3(_R, _N, _T),                         // [67]
    _2(_L, _T),                             // [68]
    _2(_T, _L),                             // [69]     (*)
    _2(_S, _T),                             // [70]
    _3(_R, _S, _T),                         // [71]
    _1(_K),                                 // [72]
    _2(_R, _K),                             // [73]
    _2(_N, _K),                             // [74]
    NO_ENTRY,                               // [75]
    _2(_K, _L),                             // [76]
    NO_ENTRY,                               // [77]
    _2(_S, _K),                             // [78]
    _2(_L, _K),                             // [79]
    _2(_C, _T),                             // [80]
    _2(_C, _R),                             // [81]     (*)
    _4(_T, _I, _O, _N),                     // [82]
    NO_ENTRY,                               // [83]
    _2(_P, _T),                             // [84]
    NO_ENTRY,                               // [85]
    _3(_N, _S, _T),                         // [86]
    _2(_L, _P),                             // [87]
    _2(_C, _K),                             // [88]
    NO_ENTRY,                               // [89]
    _2(_B, _T),                             // [90]
    _4(_B, _E, _R, _T),                     // [91]     (*)
    _3(_C, _K, _L),                         // [92]
    NO_ENTRY,                               // [93]
    NO_ENTRY,                               // [94]
    NO_ENTRY,                               // [95]
    _2(_T, _H),                             // [96]
    _3(_R, _T, _H),                         // [97]
    _3(_N, _T, _H),                         // [98]
    _3(_W, _T, _H),                         // [99]
    _3(_L, _T, _H),                         // [100]
    NO_ENTRY,                               // [101]
    _2(_N, _V),                             // [102]    (*)
    NO_ENTRY,                               // [103]
    _3(_G, _H, _T),                         // [104]
    _2(_W, _K),                             // [105]
    _4(_N, _G, _T, _H),                     // [106]
    _4(_M, _E, _N, _T),                     // [107]    (*)
    _2(_X, _T),                             // [108]
    NO_ENTRY,                               // [109]
    _3(_D, _T, _H),                         // [110]
    _5(_N, _M, _E, _N, _T),                 // [111]    (*)
    _3(_T, _C, _H),                         // [112]
    NO_ENTRY,                               // [113]
    NO_ENTRY,                               // [114]
    NO_ENTRY,                               // [115]
    _3(_P, _T, _H),                         // [116]
    NO_ENTRY,                               // [117]
    NO_ENTRY,                               // [118]
    NO_ENTRY,                               // [119]
    _2(_F, _T),                             // [120]
    _4(_F, _T, _E, _R),                     // [121]    (*)
    _4(_F, _T, _E, _N),                     // [122]    (*)
    NO_ENTRY,                               // [123]
    NO_ENTRY,                               // [124]
    NO_ENTRY,                               // [125]
    _3(_M, _P, _T),                         // [126]
    _5(_P, _M, _E, _N, _T),                 // [127]    (*)
    _1(_S),                                 // [128]
    _2(_R, _S),                             // [129]
    _2(_N, _S),                             // [130]
    _3(_R, _N, _S),                         // [131]
    _2(_L, _S),                             // [132]
    _3(_R, _L, _S),                         // [133]
    _2(_S, _S),                             // [134]
    _3(_L, _L, _S),                         // [135]
    _2(_G, _S),                             // [136]
    _3(_R, _G, _S),                         // [137]
    _3(_N, _G, _S),                         // [138]
    _3(_G, _N, _S),                         // [139]
    NO_ENTRY,                               // [140]
    NO_ENTRY,                               // [141]
    _2(_D, _S),                             // [142]
    NO_ENTRY,                               // [143]
    _2(_C, _S),                             // [144]
    _3(_R, _C, _S),                         // [145]
    _4(_N, _C, _E, _S),                     // [146]
    NO_ENTRY,                               // [147]
    _2(_P, _S),                             // [148]
    _3(_R, _P, _S),                         // [149]
    _3(_S, _P, _S),                         // [150]
    _4(_P, _L, _E, _S),                     // [151]
    _2(_B, _S),                             // [152]
    _3(_R, _B, _S),                         // [153]
    _3(_G, _G, _S),                         // [154]
    _4(_B, _E, _R, _S),                     // [155]        (*)
    _4(_B, _L, _E, _S),                     // [156]
    NO_ENTRY,                               // [157]
    NO_ENTRY,                               // [158]
    _3(_L, _B, _S),                         // [159]
    _2(_H, _S),                             // [160]
    _2(_W, _S),                             // [161]
    _3(_V, _E, _S),                         // [162]
    _3(_W, _N, _S),                         // [163]
    _3(_Z, _E, _S),                         // [164]
    _3(_W, _L, _S),                         // [165]
    _4(_S, _H, _E, _S),                     // [166]
    _4(_L, _V, _E, _S),                     // [167]
    _3(_G, _H, _S),                         // [168]
    NO_ENTRY,                               // [169]
    _2(_M, _S),                             // [170]
    _3(_R, _M, _S),                         // [171]
    _3(_X, _E, _S),                         // [172]
    NO_ENTRY,                               // [173]
    _3(_S, _M, _S),                         // [174]
    _3(_L, _M, _S),                         // [175]
    _1(_D),                                 // [176]
    _2(_R, _D),                             // [177]
    _2(_N, _D),                             // [178]
    _2(_W, _D),                             // [179]
    _3(_P, _H, _S),                         // [180]
    _3(_R, _L, _D),                         // [181]
    _2(_S, _D),                             // [182]    (*) 
    _2(_L, _D),                             // [183]
    _2(_D, _G),                             // [184]
    NO_ENTRY,                               // [185]
    _3(_M, _B, _S),                         // [186]
    _5(_M, _B, _E, _R, _S),                 // [187]    (*)
    NO_ENTRY,                               // [188]
    NO_ENTRY,                               // [189]
    _3(_M, _P, _S),                         // [190]
    NO_ENTRY,                               // [191]
    _2(_T, _S),                             // [192]
    _3(_R, _T, _S),                         // [193]
    _3(_N, _T, _S),                         // [194]
    NO_ENTRY,                               // [195]
    _3(_L, _T, _S),                         // [196]
    _3(_T, _L, _Y),                         // [197]    (*)
    _3(_S, _T, _S),                         // [198]
    _4(_R, _S, _T, _S),                     // [199]
    _2(_K, _S),                             // [200]
    _3(_R, _K, _S),                         // [201]
    _3(_N, _K, _S),                         // [202]
    NO_ENTRY,                               // [203]
    NO_ENTRY,                               // [204]
    NO_ENTRY,                               // [205]
    _3(_S, _K, _S),                         // [206]
    _3(_L, _K, _S),                         // [207]
    _3(_C, _T, _S),                         // [208]
    NO_ENTRY,                               // [209]
    _5(_T, _I, _O, _N, _S),                 // [210]    (*)
    NO_ENTRY,                               // [211]
    NO_ENTRY,                               // [212]
    NO_ENTRY,                               // [213]
    NO_ENTRY,                               // [214]
    _3(_L, _P, _S),                         // [215]
    _3(_C, _K, _S),                         // [216]
    NO_ENTRY,                               // [217]
    _3(_B, _T, _S),                         // [218]
    _5(_B, _E, _R, _T, _S),                 // [219]    (*)
    _5(_C, _K, _L, _E, _S),                 // [220]
    NO_ENTRY,                               // [221]
    NO_ENTRY,                               // [222]
    NO_ENTRY,                               // [223]
    _3(_T, _H, _S),                         // [224]
    _4(_R, _T, _H, _S),                     // [225]
    _4(_N, _T, _H, _S),                     // [226]
    _4(_W, _T, _H, _S),                     // [227]
    NO_ENTRY,                               // [228]
    NO_ENTRY,                               // [229]
    NO_ENTRY,                               // [230]
    NO_ENTRY,                               // [231]
    _4(_G, _H, _T, _S),                     // [232]
    _3(_W, _K, _S),                         // [233]
    _5(_N, _G, _T, _H, _S),                 // [234]
    _5(_M, _E, _N, _T, _S),                 // [235]    (*)
    NO_ENTRY,                               // [236]
    NO_ENTRY,                               // [237]
    _4(_D, _T, _H, _S),                     // [238]
    _6(_N, _M, _E, _N, _T, _S),             // [239]    (*)
    _2(_D, _S),                             // [240]
    _3(_R, _D, _S),                         // [241]
    _3(_N, _D, _S),                         // [242]
    _3(_W, _D, _S),                         // [243]
    _4(_P, _T, _H, _S),                     // [244]
    _4(_R, _L, _D, _S),                     // [245]
    NO_ENTRY,                               // [246]
    _3(_L, _D, _S),                         // [247]
    NO_ENTRY,                               // [248]
    NO_ENTRY,                               // [249]
    NO_ENTRY,                               // [250]
    NO_ENTRY,                               // [251]
    NO_ENTRY,                               // [252]
    NO_ENTRY,                               // [253]
    _4(_M, _P, _T, _S),                     // [254]
    _6(_P, _M, _E, _N, _T, _S)              // [255]    (*)
};

const uint8_t PROGMEM g_right_pinky_table[8][MAX_LETTERS] =
{
    NO_ENTRY,                               // [0]
    _1(_E),                                 // [1]
    _1(_Y),                                 // [2]
    _2(_E, _Y),                             // [3]
    _1(_S),                                 // [4]
    _2(_E, _S),                             // [5]
    _2(_Y, _S),                             // [6]
    _3(_E, _Y, _S)                          // [7]
};

#endif
