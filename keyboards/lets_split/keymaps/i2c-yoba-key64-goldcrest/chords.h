#ifndef _CHORDS_H_
#define _CHORDS_H_

#define CHORD_NONE           0
#define CHORD_A              1
#define CHORD_B              2
#define CHORD_C              3
#define CHORD_D              4
#define CHORD_E              5
#define CHORD_F              6
#define CHORD_G              7
#define CHORD_H              8
#define CHORD_I              9
#define CHORD_J             10
#define CHORD_K             11
#define CHORD_L             12
#define CHORD_M             13
#define CHORD_N             14
#define CHORD_O             15
#define CHORD_P             16
#define CHORD_Q             17
#define CHORD_R             18
#define CHORD_S             19
#define CHORD_T             20
#define CHORD_U             21
#define CHORD_V             22
#define CHORD_W             23
#define CHORD_X             24
#define CHORD_Y             25
#define CHORD_Z             26
#define CHORD_TH            27
#define CHORD_AN            28
#define CHORD_AT            29
#define CHORD_EN            30
#define CHORD_ER            31
#define CHORD_RE            32
#define CHORD_HE            33
#define CHORD_IN            34
#define CHORD_ND            35
#define CHORD_ON            36
#define CHORD_TE            37
#define CHORD_OR            38
#define CHORD_TI            39
#define CHORD_ES            40
#define CHORD_OF            41
#define CHORD_ED            42
#define CHORD_IS            43
#define CHORD_IT            44
#define CHORD_MINUS         45
#define CHORD_EXCL          46
#define CHORD_DQUOTE        47
#define CHORD_COMMA         48
#define CHORD_DOT           49
#define CHORD_QUEST         50
#define CHORD_QUOTE         51
#define CHORD_UNDERS        52
#define CHORD_SPACE         53
#define CHORD_C_A           54
#define CHORD_C_B           55
#define CHORD_C_C           56
#define CHORD_C_D           57
#define CHORD_C_E           58
#define CHORD_C_F           59
#define CHORD_C_G           60
#define CHORD_C_H           61
#define CHORD_C_I           62
#define CHORD_C_J           63
#define CHORD_C_K           64
#define CHORD_C_L           65
#define CHORD_C_M           66
#define CHORD_C_N           67
#define CHORD_C_O           68
#define CHORD_C_P           69
#define CHORD_C_Q           70
#define CHORD_C_R           71
#define CHORD_C_S           72
#define CHORD_C_T           73
#define CHORD_C_U           74
#define CHORD_C_V           75
#define CHORD_C_W           76
#define CHORD_C_X           77
#define CHORD_C_Y           78
#define CHORD_C_Z           79
#define CHORD_C_TH          80
#define CHORD_C_AN          81
#define CHORD_C_AT          82
#define CHORD_C_EN          83
#define CHORD_C_ER          84
#define CHORD_C_RE          85
#define CHORD_C_HE          86
#define CHORD_C_IN          87
#define CHORD_C_ND          88
#define CHORD_C_ON          89
#define CHORD_C_TE          90
#define CHORD_C_OR          91
#define CHORD_C_TI          92
#define CHORD_C_ES          93
#define CHORD_C_OF          94
#define CHORD_C_ED          95
#define CHORD_C_IS          96
#define CHORD_C_IT          97
#define CHORD_1             98
#define CHORD_2             99
#define CHORD_3            100
#define CHORD_4            101
#define CHORD_5            102
#define CHORD_6            103
#define CHORD_7            104
#define CHORD_8            105
#define CHORD_9            106
#define CHORD_0            107
#define CHORD_AAT          108
#define CHORD_HASH         109
#define CHORD_DOLLAR       110
#define CHORD_PERCENT      111
#define CHORD_HAT          112
#define CHORD_AMP          113
#define CHORD_ASTERISK     114
#define CHORD_LPAREN       115
#define CHORD_RPAREN       116
#define CHORD_EQUAL        117
#define CHORD_PLUS         118
#define CHORD_LBRACE       119
#define CHORD_RBRACE       120
#define CHORD_LCURL        121
#define CHORD_RCURL        122
#define CHORD_SEMICOLON    123
#define CHORD_COLON        124
#define CHORD_BACKSLASH    125
#define CHORD_PIPE         126
#define CHORD_LESS         127
#define CHORD_GREAT        128
#define CHORD_SLASH        129
#define CHORD_GRAVE        130
#define CHORD_TILDA        131
#define CHORD_F1           132
#define CHORD_F2           133
#define CHORD_F3           134
#define CHORD_F4           135
#define CHORD_F5           136
#define CHORD_F6           137
#define CHORD_F7           138
#define CHORD_F8           139
#define CHORD_F9           140
#define CHORD_F10          141
#define CHORD_F11          142
#define CHORD_F12          143
#define CHORD_HOME         144
#define CHORD_END          145
#define CHORD_UP           146
#define CHORD_DOWN         147
#define CHORD_LEFT         148
#define CHORD_RIGHT        149
#define CHORD_BSPACE       150
#define CHORD_DELETE       151
#define CHORD_INSERT       152
#define CHORD_PGUP         153
#define CHORD_PGDOWN       154
#define CHORD_ESCAPE       155
#define CHORD_CAPSLOCK     156
#define CHORD_TAB          157

#define CHORD_CYR_A        158
#define CHORD_CYR_B        159
#define CHORD_CYR_V        160
#define CHORD_CYR_G        161
#define CHORD_CYR_D        162
#define CHORD_CYR_YE       163
#define CHORD_CYR_YO       164
#define CHORD_CYR_ZHE      165
#define CHORD_CYR_Z        166
#define CHORD_CYR_I        167
#define CHORD_CYR_ISHORT   168
#define CHORD_CYR_K        169
#define CHORD_CYR_L        170
#define CHORD_CYR_M        171
#define CHORD_CYR_N        172
#define CHORD_CYR_O        173
#define CHORD_CYR_P        174
#define CHORD_CYR_R        175
#define CHORD_CYR_S        176
#define CHORD_CYR_T        177
#define CHORD_CYR_U        178
#define CHORD_CYR_F        179
#define CHORD_CYR_KHA      180
#define CHORD_CYR_TSE      181
#define CHORD_CYR_CHE      182
#define CHORD_CYR_SHA      183
#define CHORD_CYR_SCHA     184
#define CHORD_CYR_HARD     185
#define CHORD_CYR_YI       186
#define CHORD_CYR_SOFT     187
#define CHORD_CYR_E        188
#define CHORD_CYR_YU       189
#define CHORD_CYR_YA       190
#define CHORD_CYR_NO       191
#define CHORD_CYR_NA       192
#define CHORD_CYR_EN       193
#define CHORD_CYR_PO       194
#define CHORD_CYR_OV       195
#define CHORD_CYR_NI       196
#define CHORD_CYR_KO       197
#define CHORD_CYR_RA       198
#define CHORD_CYR_ST       199
#define CHORD_CYR_TO       200
#define CHORD_C_CYR_A      201
#define CHORD_C_CYR_B      202
#define CHORD_C_CYR_V      203
#define CHORD_C_CYR_G      204
#define CHORD_C_CYR_D      205
#define CHORD_C_CYR_YE     266
#define CHORD_C_CYR_YO     207
#define CHORD_C_CYR_ZHE    208
#define CHORD_C_CYR_Z      209
#define CHORD_C_CYR_I      210
#define CHORD_C_CYR_ISHORT 211
#define CHORD_C_CYR_K      212
#define CHORD_C_CYR_L      213
#define CHORD_C_CYR_M      214
#define CHORD_C_CYR_N      215
#define CHORD_C_CYR_O      216
#define CHORD_C_CYR_P      217
#define CHORD_C_CYR_R      218
#define CHORD_C_CYR_S      219
#define CHORD_C_CYR_T      220
#define CHORD_C_CYR_U      221
#define CHORD_C_CYR_F      222
#define CHORD_C_CYR_KHA    223
#define CHORD_C_CYR_TSE    224
#define CHORD_C_CYR_CHE    225
#define CHORD_C_CYR_SHA    226
#define CHORD_C_CYR_SCHA   227
#define CHORD_C_CYR_HARD   228
#define CHORD_C_CYR_YI     229
#define CHORD_C_CYR_SOFT   230
#define CHORD_C_CYR_E      231
#define CHORD_C_CYR_YU     232
#define CHORD_C_CYR_YA     233
#define CHORD_C_CYR_NO     234
#define CHORD_C_CYR_NA     235
#define CHORD_C_CYR_EN     236
#define CHORD_C_CYR_PO     237
#define CHORD_C_CYR_OV     238
#define CHORD_C_CYR_NI     239
#define CHORD_C_CYR_KO     230
#define CHORD_C_CYR_RA     241
#define CHORD_C_CYR_ST     242
#define CHORD_C_CYR_TO     243

#define CHORD_SPECIAL         1024
#define CHORD_THUMB_CAP1      1025
#define CHORD_THUMB_CAP2      1026
#define CHORD_THUMB_CAP12     1027
#define CHORD_THUMB_SYMB      1028
#define CHORD_THUMB_MODS      1029
#define CHORD_THUMB_SYMB_MODS 1030
#define CHORD_THUMB_NAV       1031

#define CHORD_LANG_LAT        1041
#define CHORD_LANG_CYR        1042

#define CHORD_MODS_GUI               1051
#define CHORD_MODS_CTL               1052
#define CHORD_MODS_CTL_GUI           1053
#define CHORD_MODS_SFT               1054
#define CHORD_MODS_SFT_GUI           1055
#define CHORD_MODS_SFT_CTL           1056
#define CHORD_MODS_SFT_CTL_GUI       1057
#define CHORD_MODS_ALT               1058
#define CHORD_MODS_ALT_GUI           1059
#define CHORD_MODS_ALT_CTL           1060
#define CHORD_MODS_ALT_CTL_GUI       1061
#define CHORD_MODS_ALT_SFT           1062
#define CHORD_MODS_ALT_SFT_GUI       1063
#define CHORD_MODS_ALT_SFT_CTL       1064
#define CHORD_MODS_ALT_SFT_CTL_GUI   1065

#define MAP_LAT         0
#define MAP_LAT_CAPS    1
#define MAP_CYR         2
#define MAP_CYR_CAPS    3
#define MAP_SYMB        4
#define MAP_MODS        5
#define MAP_NAV         6

#define CHORD_MAX       60

/*
 Diff       relative difficulty
   4
 025        Bit numbers
 136
  Id        Chord Id
 Lat Cap    Latin map    Capital latin
 Sym Mod    Symbol Map   Modifier Map
 Cyr Cap    Cyrillic Map Capical cyrillic


  0      10     20     10     10     20     10     20     20     40
   -      -      -      -      -      -      -      -      -      -
 ---    -x-    -x-    ---    x--    x--    ---    xx-    ---    xx-
 ---    ---    -x-    -x-    ---    x--    x--    ---    xx-    xx-
  1      2      3      4      5      6      7      8      9      10
 e E    e E    p P    t T    a A    g G    o O    y Y    b B    LAT
 1      1 GUI  \      2 CTL  3      `      4      ~      @
 е Е    е Е    п П    т Т    а А    г Г    о О    й Й    б Б    LAT

  10     10     20     15     15     25     15     20     25     45
   x      x      x      x      x      x      x      x      x      x
 ---    -x-    -x-    ---    x--    x--    ---    xx-    ---    xx-
 ---    ---    -x-    -x-    ---    x--    x--    ---    xx-    xx-
  11     12     13     14     15     16     17     18     19     20
 spc    i I    v V    h H    l L   te Te   d D    k K   or Or
 5      6      #    spc    bks           tab      $
 spc    и И    в В    х Х    л Л   но Но   д Д    к К   на На
  
  20     20     30     20     25     35     25     30     35     55
   x      x      x      x      x      x      x      x      x      x
 --x    -xx    -xx    --x    x-x    x-x    --x    xxx    --x    xxx
 ---    ---    -x-    -x-    ---    x--    x--    ---    xx-    xx-
  21     22     23     24     25     26     27     28     29     30
 x X    j J    . .    q Q   ti Ti   ! !   es Es   , ,    ? ?
 %      ^      .      &             !             ,      ?
 ч Ч    ж Ж    . .    ё Ё   ен Ен   ! !   по По   , ,    ? ?
                  
  10     20     20     10     15     25     15     20     20     40
   -      -      -      -      -      -      -      -      -      -
 --x    -xx    -xx    --x    x-x    x-x    --x    xxx    --x    xxx
 ---    ---    -x-    -x-    ---    x--    x--    ---    xx-    xx-
  31     32     33     34     35     36     37     38     39     40
 bks    z Z   th Th   n N    c C   of Of   u U   an An  at At   CYR
 7 SFT  (      )      8      +             -      [      ]
 bks    з З    ш Ш    н Н    ц Ц   ов Ов   у У    щ Щ    ъ Ъ    CYR
  
  20     20     30     20     25     35     25     30     30     50
   -      -      -      -      -      -      -      -      -      -
 --x    -xx    -xx    --x    x-x    x-x    --x    xxx    --x    xxx
 --x    --x    -xx    -xx    --x    x-x    x-x    --x    xxx    xxx
  41     42     43     44     45     46     47     48     49     50
en En  er Er   ' '   re Re  ed Ed   _ _   is Is   " "    - -
 {      }      '      <             _             "      -
 ы Ы    ь Ь    ' '    з З   ни Ни   _ _   ко Ко   " "    - -
  
  10     10     20     20     15     25     15     20     20     40
   -      -      -      -      -      -      -      -      -      -
 ---    -x-    -x-    ---    x--    x--    ---    xx-    ---    xx-
 --x    --x    -xx    -xx    --x    x-x    x-x    --x    xxx    xxx
  51     52     53     54     55     56     57     58     59     60
 s S    r R   he He  in In   m M   it It   f F   nd Nd  on On
 9 ALT  0      >      |      *             /
 с С    р Р    ю Ю    я Я    м М   ра Ра   ф Ф   ст Ст  то То
*/
static const uint8_t left_pr_chord_to_id[128] PROGMEM =
{
    [0b0000000] = 1,
    [0b0000100] = 2,
    [0b0001100] = 3,
    [0b0001000] = 4,
    [0b0000001] = 5,
    [0b0000011] = 6,
    [0b0000010] = 7,
    [0b0000101] = 8,
    [0b0001010] = 9,
    [0b0001111] = 10,
    [0b0001110] = 10,
    [0b0001101] = 10,
    [0b0001011] = 10,
    [0b0000111] = 10,
    [0b0010000] = 11,
    [0b0010100] = 12,
    [0b0011100] = 13,
    [0b0011000] = 14,
    [0b0010001] = 15,
    [0b0010011] = 16,
    [0b0010010] = 17,
    [0b0010101] = 18,
    [0b0011010] = 19,
    [0b0011111] = 20,
    [0b0011110] = 20,
    [0b0011101] = 20,
    [0b0011011] = 20,
    [0b0010111] = 20,
    [0b0110000] = 21,
    [0b0110100] = 22,
    [0b0111100] = 23,
    [0b0111000] = 24,
    [0b0110001] = 25,
    [0b0110011] = 26,
    [0b0110010] = 27,
    [0b0110101] = 28,
    [0b0111010] = 29,
    [0b0111111] = 30,
    [0b0111110] = 30,
    [0b0111101] = 30,
    [0b0111011] = 30,
    [0b0110111] = 30,
    [0b0100000] = 31,
    [0b0100100] = 32,
    [0b0101100] = 33,
    [0b0101000] = 34,
    [0b0100001] = 35,
    [0b0100011] = 36,
    [0b0100010] = 37,
    [0b0100101] = 38,
    [0b0101010] = 39,
    [0b0101111] = 40,
    [0b0101110] = 40,
    [0b0101101] = 40,
    [0b0101011] = 40,
    [0b0100111] = 40,
    [0b1100000] = 41,
    [0b1100100] = 42,
    [0b1101100] = 43,
    [0b1101000] = 44,
    [0b1100001] = 45,
    [0b1100011] = 46,
    [0b1100010] = 47,
    [0b1100101] = 48,
    [0b1101010] = 49,
    [0b1101111] = 50,
    [0b1101110] = 50,
    [0b1101101] = 50,
    [0b1101011] = 50,
    [0b1100111] = 50,
    [0b1000000] = 51,
    [0b1000100] = 52,
    [0b1001100] = 53,
    [0b1001000] = 54,
    [0b1000001] = 55,
    [0b1000011] = 56,
    [0b1000010] = 57,
    [0b1000101] = 58,
    [0b1001010] = 59,
    [0b1001111] = 60,
    [0b1001110] = 60,
    [0b1001101] = 60,
    [0b1001011] = 60,
    [0b1000111] = 60
};

/*
 Diff       relative difficulty
 2
 146        Bit numbers
 035
  Id        Chord Id
 Lat Cap    Latin map    Capital latin
 Sym Mod    Symbol Map   Modifier Map
 Cyr Cap    Cyrillic Map Capical cyrillic
 

  0      10     20     10     10     20     10     20     20     40
 -      -      -      -      -      -      -      -      -      -
 ---    -x-    -x-    ---    --x    --x    ---    -xx    ---    -xx
 ---    ---    -x-    -x-    ---    --x    --x    ---    -xx    -xx
  1      2      3      4      5      6      7      8      9      10
 e E    e E    p P    t T    a A    g G    o O    y Y    b B    LAT
 1      1 GUI  \      2 CTL  3      `      4      ~      @
 е Е    е Е    п П    т Т    а А    г Г    о О    й Й    б Б    LAT

  10     10     20     15     15     25     15     20     25     45
 x      x      x      x      x      x      x      x      x      x
 ---    -x-    -x-    ---    --x    --x    ---    -xx    ---    -xx
 ---    ---    -x-    -x-    ---    --x    --x    ---    -xx    -xx
  11     12     13     14     15     16     17     18     19     20
 spc    i I    v V    h H    l L   te Te   d D    k K   or Or
 5      6      #    spc    bks           tab      $
 spc    и И    в В    х Х    л Л   но Но   д Д    к К   на На

  20     20     30     20     25     35     25     30     35     55
 x      x      x      x      x      x      x      x      x      x
 x--    xx-    xx-    x--    x-x    x-x    x--    xxx    x--    xxx
 ---    ---    -x-    -x-    ---    --x    --x    ---    -xx    -xx
  21     22     23     24     25     26     27     28     29     30
 x X    j J    . .    q Q   ti Ti   ! !   es Es   , ,    ? ?
 %      ^      .      &             !             ,      ?
 ч Ч    ж Ж    . .    ё Ё   ен Ен   ! !   по По   , ,    ? ?

  10     20     20     10     15     25     15     20     20     40
 -      -      -      -      -      -      -      -      -      -
 x--    xx-    xx-    x--    x-x    x-x    x--    xxx    x--    xxx
 ---    ---    -x-    -x-    ---    --x    --x    ---    -xx    -xx
  31     32     33     34     35     36     37     38     39     40
 bks    z Z   th Th   n N    c C   of Of   u U   an An  at At   CYR
 7 SFT  (      )      8      +             -      [      ]
 bks    з З    ш Ш    н Н    ц Ц   ов Ов   у У    щ Щ    ъ Ъ    CYR

  20     20     30     20     25     35     25     30     30     50
 -      -      -      -      -      -      -      -      -      -
 x--    xx-    xx-    x--    x-x    x-x    x--    xxx    x--    xxx
 x--    x--    xx-    xx-    x--    x-x    x-x    x--    xxx    xxx
  41     42     43     44     45     46     47     48     49     50
en En  er Er   ' '   re Re  ed Ed   _ _   is Is   " "    - -
 {      }      '      <             _             "      -
 ы Ы    ь Ь    ' '    з З   ни Ни   _ _   ко Ко   " "    - -

  10     10     20     20     15     25     15     20     20     40
 -      -      -      -      -      -      -      -      -      -
 ---    -x-    -x-    ---    --x    --x    ---    -xx    ---    -xx
 x--    x--    xx-    xx-    x--    x-x    x-x    x--    xxx    xxx
  51     52     53     54     55     56     57     58     59     60
 s S    r R   he He  in In   m M   it It   f F   nd Nd  on On
 9 ALT  0      >      |      *             /
 с С    р Р    ю Ю    я Я    м М   ра Ра   ф Ф   ст Ст  то То
*/
static const uint8_t right_pr_chord_to_id[128] PROGMEM =
{
    [0b0000000] = 1,
    [0b0010000] = 2,
    [0b0011000] = 3,
    [0b0001000] = 4,
    [0b1000000] = 5,
    [0b1100000] = 6,
    [0b0100000] = 7,
    [0b1010000] = 8,
    [0b0101000] = 9,
    [0b1111000] = 10,
    [0b1110000] = 10,
    [0b1101000] = 10,
    [0b1011000] = 10,
    [0b0111000] = 10,
    [0b0000100] = 11,
    [0b0010100] = 12,
    [0b0011100] = 13,
    [0b0001100] = 14,
    [0b1000100] = 15,
    [0b1100100] = 16,
    [0b0100100] = 17,
    [0b1010100] = 18,
    [0b0101100] = 19,
    [0b1111100] = 20,
    [0b1110100] = 20,
    [0b1101100] = 20,
    [0b1011100] = 20,
    [0b0111100] = 20,
    [0b0000110] = 21,
    [0b0010110] = 22,
    [0b0011110] = 23,
    [0b0001110] = 24,
    [0b1000110] = 25,
    [0b1100110] = 26,
    [0b0100110] = 27,
    [0b1010110] = 28,
    [0b0101110] = 29,
    [0b1111110] = 30,
    [0b1110110] = 30,
    [0b1101110] = 30,
    [0b1011110] = 30,
    [0b0111110] = 30,
    [0b0000010] = 31,
    [0b0010010] = 32,
    [0b0011010] = 33,
    [0b0001010] = 34,
    [0b1000010] = 35,
    [0b1100010] = 36,
    [0b0100010] = 37,
    [0b1010010] = 38,
    [0b0101010] = 39,
    [0b1111010] = 40,
    [0b1110010] = 40,
    [0b1101010] = 40,
    [0b1011010] = 40,
    [0b0111010] = 40,
    [0b0000011] = 41,
    [0b0010011] = 42,
    [0b0011011] = 43,
    [0b0001011] = 44,
    [0b1000011] = 45,
    [0b1100011] = 46,
    [0b0100011] = 47,
    [0b1010011] = 48,
    [0b0101011] = 49,
    [0b1111011] = 50,
    [0b1110011] = 50,
    [0b1101011] = 50,
    [0b1011011] = 50,
    [0b0111011] = 50,
    [0b0000001] = 51,
    [0b0010001] = 52,
    [0b0011001] = 53,
    [0b0001001] = 54,
    [0b1000001] = 55,
    [0b1100001] = 56,
    [0b0100001] = 57,
    [0b1010001] = 58,
    [0b0101001] = 59,
    [0b1111001] = 60,
    [0b1110001] = 60,
    [0b1101001] = 60,
    [0b1011001] = 60,
    [0b0111001] = 60
};

static const uint16_t pr_chords_lat[CHORD_MAX] PROGMEM =
{
    [1] =  CHORD_NONE,
    [2] =  CHORD_E,
    [3] =  CHORD_P,
    [4] =  CHORD_T,
    [5] =  CHORD_A,
    [6] =  CHORD_G,
    [7] =  CHORD_O,
    [8] =  CHORD_Y,
    [9] =  CHORD_B,
    [10] = CHORD_LANG_LAT,
    [11] = CHORD_BSPACE,
    [12] = CHORD_I,
    [13] = CHORD_V,
    [14] = CHORD_H,
    [15] = CHORD_L,
    [16] = CHORD_TE,
    [17] = CHORD_D,
    [18] = CHORD_K,
    [19] = CHORD_OR,
    [21] = CHORD_X,
    [22] = CHORD_J,
    [23] = CHORD_DOT,
    [24] = CHORD_Q,
    [25] = CHORD_TI,
    [26] = CHORD_EXCL,
    [27] = CHORD_ES,
    [28] = CHORD_COMMA,
    [29] = CHORD_QUEST,
    [31] = CHORD_SPACE,
    [32] = CHORD_Z,
    [33] = CHORD_TH,
    [34] = CHORD_N,
    [35] = CHORD_C,
    [36] = CHORD_OF,
    [37] = CHORD_U,
    [38] = CHORD_AN,
    [39] = CHORD_AT,
    [40] = CHORD_LANG_CYR,
    [41] = CHORD_EN,
    [42] = CHORD_ER,
    [43] = CHORD_QUOTE,
    [44] = CHORD_RE,
    [45] = CHORD_ED,
    [46] = CHORD_UNDERS,
    [47] = CHORD_IS,
    [48] = CHORD_DQUOTE,
    [49] = CHORD_MINUS,
    [51] = CHORD_S,
    [52] = CHORD_R,
    [53] = CHORD_HE,
    [54] = CHORD_IN,
    [55] = CHORD_M,
    [56] = CHORD_IT,
    [57] = CHORD_F,
    [58] = CHORD_ND,
    [59] = CHORD_ON
};

static const uint16_t pr_chords_lat_caps[CHORD_MAX] PROGMEM =
{
    [1] =  CHORD_NONE,
    [2] =  CHORD_C_E,
    [3] =  CHORD_C_P,
    [4] =  CHORD_C_T,
    [5] =  CHORD_C_A,
    [6] =  CHORD_C_G,
    [7] =  CHORD_C_O,
    [8] =  CHORD_C_Y,
    [9] =  CHORD_C_B,
    [10] = CHORD_LANG_LAT,
    [11] = CHORD_BSPACE,
    [12] = CHORD_C_I,
    [13] = CHORD_C_V,
    [14] = CHORD_C_H,
    [15] = CHORD_C_L,
    [16] = CHORD_C_TE,
    [17] = CHORD_C_D,
    [18] = CHORD_C_K,
    [19] = CHORD_C_OR,
    [21] = CHORD_C_X,
    [22] = CHORD_C_J,
    [23] = CHORD_DOT,
    [24] = CHORD_C_Q,
    [25] = CHORD_C_TI,
    [26] = CHORD_EXCL,
    [27] = CHORD_C_ES,
    [28] = CHORD_COMMA,
    [29] = CHORD_QUEST,
    [31] = CHORD_SPACE,
    [32] = CHORD_C_Z,
    [33] = CHORD_C_TH,
    [34] = CHORD_C_N,
    [35] = CHORD_C_C,
    [36] = CHORD_C_OF,
    [37] = CHORD_C_U,
    [38] = CHORD_C_AN,
    [39] = CHORD_C_AT,
    [40] = CHORD_LANG_CYR,
    [41] = CHORD_C_EN,
    [42] = CHORD_C_ER,
    [43] = CHORD_QUOTE,
    [44] = CHORD_C_RE,
    [45] = CHORD_C_ED,
    [46] = CHORD_UNDERS,
    [47] = CHORD_C_IS,
    [48] = CHORD_DQUOTE,
    [49] = CHORD_MINUS,
    [51] = CHORD_C_S,
    [52] = CHORD_C_R,
    [53] = CHORD_C_HE,
    [54] = CHORD_C_IN,
    [55] = CHORD_C_M,
    [56] = CHORD_C_IT,
    [57] = CHORD_C_F,
    [58] = CHORD_C_ND,
    [59] = CHORD_C_ON
};

static const uint16_t pr_chords_cyr[CHORD_MAX] PROGMEM =
{
    [1] =  CHORD_NONE,
    [2] =  CHORD_CYR_YE,
    [3] =  CHORD_CYR_P,
    [4] =  CHORD_CYR_T,
    [5] =  CHORD_CYR_A,
    [6] =  CHORD_CYR_G,
    [7] =  CHORD_CYR_O,
    [8] =  CHORD_CYR_ISHORT,
    [9] =  CHORD_CYR_B,
    [10] = CHORD_LANG_LAT,
    [11] = CHORD_BSPACE,
    [12] = CHORD_CYR_I,
    [13] = CHORD_CYR_V,
    [14] = CHORD_CYR_KHA,
    [15] = CHORD_CYR_L,
    [16] = CHORD_CYR_NO,
    [17] = CHORD_CYR_D,
    [18] = CHORD_CYR_K,
    [19] = CHORD_CYR_NA,
    [21] = CHORD_CYR_CHE,
    [22] = CHORD_CYR_ZHE,
    [23] = CHORD_DOT,
    [24] = CHORD_CYR_YO,
    [25] = CHORD_CYR_EN,
    [26] = CHORD_EXCL,
    [27] = CHORD_CYR_PO,
    [28] = CHORD_COMMA,
    [29] = CHORD_QUEST,
    [31] = CHORD_SPACE,
    [32] = CHORD_CYR_Z,
    [33] = CHORD_CYR_SHA,
    [34] = CHORD_CYR_N,
    [35] = CHORD_CYR_TSE,
    [36] = CHORD_CYR_OV,
    [37] = CHORD_CYR_U,
    [38] = CHORD_CYR_SCHA,
    [39] = CHORD_CYR_HARD,
    [40] = CHORD_LANG_CYR,
    [41] = CHORD_CYR_YI,
    [42] = CHORD_CYR_SOFT,
    [43] = CHORD_QUOTE,
    [44] = CHORD_CYR_E,
    [45] = CHORD_CYR_NI,
    [46] = CHORD_UNDERS,
    [47] = CHORD_CYR_KO,
    [48] = CHORD_DQUOTE,
    [49] = CHORD_MINUS,
    [51] = CHORD_CYR_S,
    [52] = CHORD_CYR_R,
    [53] = CHORD_CYR_YU,
    [54] = CHORD_CYR_YA,
    [55] = CHORD_CYR_M,
    [56] = CHORD_CYR_RA,
    [57] = CHORD_CYR_F,
    [58] = CHORD_CYR_ST,
    [59] = CHORD_CYR_TO
};

static const uint16_t pr_chords_cyr_caps[CHORD_MAX] PROGMEM =
{
    [1] =  CHORD_NONE,
    [2] =  CHORD_C_CYR_YE,
    [3] =  CHORD_C_CYR_P,
    [4] =  CHORD_C_CYR_T,
    [5] =  CHORD_C_CYR_A,
    [6] =  CHORD_C_CYR_G,
    [7] =  CHORD_C_CYR_O,
    [8] =  CHORD_C_CYR_ISHORT,
    [9] =  CHORD_C_CYR_B,
    [10] = CHORD_LANG_LAT,
    [11] = CHORD_BSPACE,
    [12] = CHORD_C_CYR_I,
    [13] = CHORD_C_CYR_V,
    [14] = CHORD_C_CYR_KHA,
    [15] = CHORD_C_CYR_L,
    [16] = CHORD_C_CYR_NO,
    [17] = CHORD_C_CYR_D,
    [18] = CHORD_C_CYR_K,
    [19] = CHORD_C_CYR_NA,
    [21] = CHORD_C_CYR_CHE,
    [22] = CHORD_C_CYR_ZHE,
    [23] = CHORD_DOT,
    [24] = CHORD_C_CYR_YO,
    [25] = CHORD_C_CYR_EN,
    [26] = CHORD_EXCL,
    [27] = CHORD_C_CYR_PO,
    [28] = CHORD_COMMA,
    [29] = CHORD_QUEST,
    [31] = CHORD_SPACE,
    [32] = CHORD_C_CYR_Z,
    [33] = CHORD_C_CYR_SHA,
    [34] = CHORD_C_CYR_N,
    [35] = CHORD_C_CYR_TSE,
    [36] = CHORD_C_CYR_OV,
    [37] = CHORD_C_CYR_U,
    [38] = CHORD_C_CYR_SCHA,
    [39] = CHORD_C_CYR_HARD,
    [40] = CHORD_LANG_CYR,
    [41] = CHORD_C_CYR_YI,
    [42] = CHORD_C_CYR_SOFT,
    [43] = CHORD_QUOTE,
    [44] = CHORD_C_CYR_E,
    [45] = CHORD_C_CYR_NI,
    [46] = CHORD_UNDERS,
    [47] = CHORD_C_CYR_KO,
    [48] = CHORD_DQUOTE,
    [49] = CHORD_MINUS,
    [51] = CHORD_C_CYR_S,
    [52] = CHORD_C_CYR_R,
    [53] = CHORD_C_CYR_YU,
    [54] = CHORD_C_CYR_YA,
    [55] = CHORD_C_CYR_M,
    [56] = CHORD_C_CYR_RA,
    [57] = CHORD_C_CYR_F,
    [58] = CHORD_C_CYR_ST,
    [59] = CHORD_C_CYR_TO
};

static const uint16_t pr_chords_symb[CHORD_MAX] PROGMEM =
{
    [1] = CHORD_NONE,
    [2] = CHORD_1,
    [3] = CHORD_BACKSLASH,
    [4] = CHORD_2,
    [5] = CHORD_3,
    [6] = CHORD_GRAVE,
    [7] = CHORD_4,
    [8] = CHORD_TILDA,
    [9] = CHORD_AAT,
    [10] = CHORD_LANG_LAT,
    [11] = CHORD_5,
    [12] = CHORD_6,
    [13] = CHORD_HASH,
    [14] = CHORD_SPACE,
    [15] = CHORD_BSPACE,
    [17] = CHORD_TAB,
    [18] = CHORD_DOLLAR,
    [21] = CHORD_PERCENT,
    [22] = CHORD_HAT,
    [23] = CHORD_DOT,
    [24] = CHORD_AMP,
    [26] = CHORD_EXCL,
    [28] = CHORD_COMMA,
    [29] = CHORD_QUEST,
    [31] = CHORD_7,
    [32] = CHORD_LPAREN,
    [33] = CHORD_RPAREN,
    [34] = CHORD_8,
    [35] = CHORD_PLUS,
    [37] = CHORD_MINUS,
    [38] = CHORD_LBRACE,
    [39] = CHORD_RBRACE,
    [40] = CHORD_LANG_CYR,
    [41] = CHORD_LCURL,
    [42] = CHORD_RCURL,
    [43] = CHORD_QUOTE,
    [44] = CHORD_LESS,
    [46] = CHORD_UNDERS,
    [48] = CHORD_DQUOTE,
    [49] = CHORD_MINUS,
    [51] = CHORD_9,
    [52] = CHORD_0,
    [53] = CHORD_GREAT,
    [54] = CHORD_PIPE,
    [55] = CHORD_ASTERISK,
    [57] = CHORD_SLASH
};

static const uint16_t pr_chords_mods[CHORD_MAX] PROGMEM =
{
    [1] =  CHORD_NONE,
    [2] =  CHORD_MODS_GUI,
    [4] =  CHORD_MODS_CTL,
    [3] =  CHORD_MODS_CTL_GUI,
    [10] = CHORD_LANG_LAT,
    [31] = CHORD_MODS_SFT,
    [32] = CHORD_MODS_SFT_GUI,
    [34] = CHORD_MODS_SFT_CTL,
    [33] = CHORD_MODS_SFT_CTL_GUI,
    [51] = CHORD_MODS_ALT,
    [52] = CHORD_MODS_ALT_GUI,
    [54] = CHORD_MODS_ALT_CTL,
    [53] = CHORD_MODS_ALT_CTL_GUI,
    [40] = CHORD_LANG_CYR,
    [41] = CHORD_MODS_ALT_SFT,
    [42] = CHORD_MODS_ALT_SFT_GUI,
    [44] = CHORD_MODS_ALT_SFT_CTL,
    [43] = CHORD_MODS_ALT_SFT_CTL_GUI
};

/*
 Diff       relative difficulty
 035 
 146        Bit numbers
 2    
  Id        Chord Id
 Lat Cap    Latin map    Capital latin
 Sym Nav    Symbol Map   Navigation Map
 Cyr Cap    Cyrillic Map Capical cyrillic


  0      10     20     10     10     20     10     20     20     40
 ---    --x    --x    ---    -x-    -x-    ---    -xx    ---    -xx
 ---    ---    --x    --x    ---    -x-    -x-    ---    -xx    -xx
 -      -      -      -      -      -      -      -      -      -
  1      2      3      4      5      6      7      8      9      10
        e E    p P    t T    a A    g G    o O    y Y    b B
        1 up   \ F8   2 dwn  3 rgt  ' F9   4 lft  ~ F10  @ F11
        е Е    п П    т Т    а А    г Г    о О    й Й    б Б
  
  10     15     25     15     20     20     10     20     20     40
 x--    x-x    x-x    x--    xx-    xx-    x--    xxx    x--    xxx
 ---    ---    --x    --x    ---    -x-    -x-    ---    -xx    -xx
 -      -      -      -      -      -      -      -      -      -
  11     12     13     14     15     16     17     18     19     20
 spc    h H   te Te   l L    v V    k K    i I    x X    j J
 g pupspc F1        bks F2   # F12  $      6 pdwn %      ^
 spc    х Х   но Но   л Л    в В    к К    и И    ч Ч    ж Ж
  
  20     25     35     25     20     30     20     30     30     50
 x--    x-x    x-x    x--    xx-    xx-    x--    xxx    x--    xxx
 x--    x--    x-x    x-x    x--    xx-    xx-    x--    xxx    xxx
 -      -      -      -      -      -      -      -      -      -
  21     22     23     24     25     26     27     28     29     30
 q Q   or Or   ! !   ti Ti   z Z    . .   th Th   , ,    ' '
 &             !             (      .      )      ,      '
 ё Ё   на На   ! !   ен Ен   з З    . .    ш Ш    , ,    ' '
  
  10     15     25     15     10     20     20     20     20     40
 ---    --x    --x    ---    -x-    -x-    ---    -xx    ---    -xx
 x--    x--    x-x    x-x    x--    xx-    xx-    x--    xxx    xxx
 -      -      -      -      -      -      -      -      -      -
  31     32     33     34     35     36     37     38     39     40
 bks    d D   es Es   c C    n N   an An  at At  en En  er Er
 7 hm tab F3          + F4   8 end  [      ]      {      }
 bks    д Д   по По   ц Ц    н Н    щ Щ    ъ Ъ    ы Ы    ь ь
  
  20     25     35     25     20     30     20     35     30     55
 ---    --x    --x    ---    -x-    -x-    ---    -xx    ---    -xx
 x--    x--    x-x    x-x    x--    xx-    xx-    x--    xxx    xxx
 x      x      x      x      x      x      x      x      x      x
  41     42     43     44     45     46     47     48     49     50
re Re  of Of   ? ?   ed Ed  he He   " "   in In   _ _    - -
 <             ?             >      "      |      _      -
 э Э   ов Ов   ? ?   ни Ни   ю Ю    " "    я Я    _ _    - -
  
  10     15     25     15     15     20     10     25     20     45
 ---    --x    --x    ---    -x-    -x-    ---    -xx    ---    -xx
 ---    ---    --x    --x    ---    -x-    -x-    ---    -xx    -xx
 x      x      x      x      x      x      x      x      x      x
  51     52     53     54     55     56     57     58     59     60
 s S    u U   is Is   m M    f F   nd Nd   r R   it It  on On
 9 ins  - F5          * F6   / F7          0 del
 с С    у У   ко Ко   м М    ф Ф   ст Ст   р Р   ра Ра  то То

*/
static const uint8_t left_mi_chord_to_id[128] PROGMEM =
{
    [0b0000000] = 1,
    [0b0100000] = 2,
    [0b1100000] = 3,
    [0b1000000] = 4,
    [0b0001000] = 5,
    [0b0011000] = 6,
    [0b0010000] = 7,
    [0b0101000] = 8,
    [0b1010000] = 9,
    [0b1111000] = 10,
    [0b1110000] = 10,
    [0b1101000] = 10,
    [0b1011000] = 10,
    [0b0111000] = 10,
    [0b0000001] = 11,
    [0b0100001] = 12,
    [0b1100001] = 13,
    [0b1000001] = 14,
    [0b0001001] = 15,
    [0b0011001] = 16,
    [0b0010001] = 17,
    [0b0101001] = 18,
    [0b1010001] = 19,
    [0b1111001] = 20,
    [0b1110001] = 20,
    [0b1101001] = 20,
    [0b1011001] = 20,
    [0b0111001] = 20,
    [0b0000011] = 21,
    [0b0100011] = 22,
    [0b1100011] = 23,
    [0b1000011] = 24,
    [0b0001011] = 25,
    [0b0011011] = 26,
    [0b0010011] = 27,
    [0b0101011] = 28,
    [0b1010011] = 29,
    [0b1111011] = 30,
    [0b1110011] = 30,
    [0b1101011] = 30,
    [0b1011011] = 30,
    [0b0111011] = 30,
    [0b0000010] = 31,
    [0b0100010] = 32,
    [0b1100010] = 33,
    [0b1000010] = 34,
    [0b0001010] = 35,
    [0b0011010] = 36,
    [0b0010010] = 37,
    [0b0101010] = 38,
    [0b1010010] = 39,
    [0b1111010] = 40,
    [0b1110010] = 40,
    [0b1101010] = 40,
    [0b1011010] = 40,
    [0b0111010] = 40,
    [0b0000110] = 41,
    [0b0100110] = 42,
    [0b1100110] = 43,
    [0b1000110] = 44,
    [0b0001110] = 45,
    [0b0011110] = 46,
    [0b0010110] = 47,
    [0b0101110] = 48,
    [0b1010110] = 49,
    [0b1111110] = 50,
    [0b1110110] = 50,
    [0b1101110] = 50,
    [0b1011110] = 50,
    [0b0111110] = 50,
    [0b0000100] = 51,
    [0b0100100] = 52,
    [0b1100100] = 53,
    [0b1000100] = 54,
    [0b0001100] = 55,
    [0b0011100] = 56,
    [0b0010100] = 57,
    [0b0101100] = 58,
    [0b1010100] = 59,
    [0b1111100] = 60,
    [0b1110100] = 60,
    [0b1101100] = 60,
    [0b1011100] = 60,
    [0b0111100] = 60
};

/*
 Diff       relative difficulty
 136
 025        Bit numbers
   4   
  Id        Chord Id
 Lat Cap    Latin map    Capital latin
 Sym Mod    Symbol Map   Modifier Map
 Cyr Cap    Cyrillic Map Capical cyrillic

 
  0      10     20     10     10     20     10     20     20     40
 ---    x--    x--    ---    -x-    -x-    ---    xx-    ---    xx-
 ---    ---    x--    x--    ---    -x-    -x-    ---    xx-    xx-
   -      -      -      -      -      -      -      -      -      -
  1      2      3      4      5      6      7      8       9     10
        e E    p P    t T    a A    g G    o O    y Y    b B
        1 up   \ F8   2 dwn  3 rgt  ' F9   4 lft  ~ F10  @ F11
        е Е    п П    т Т    а А    г Г    о О    й Й    б Б

  10     15     25     15     20     20     10     20     20     40
 --x    x-x    x-x    --x    -xx    -xx    --x    xxx    --x    xxx
 ---    ---    x--    x--    ---    -x-    -x-    ---    xx-    xx-
   -      -      -      -      -      -      -      -      -      -
  11     12     13     14     15     16     17     18     19     20
 spc    h H   te Te   l L    v V    k K    i I    x X    j J
 g pupspc F1        bks F2   # F12  $      6 pdwn %      ^
 spc    х Х   но Но   л Л    в В    к К    и И    ч Ч    ж Ж

  20     25     35     25     20     30     20     30     30     50
 --x    x-x    x-x    --x    -xx    -xx    --x    xxx    --x    xxx
 --x    --x    x-x    x-x    --x    -xx    -xx    --x    xxx    xxx
   -      -      -      -      -      -      -      -      -      -
  21     22     23     24     25     26     27     28     29     30
 q Q   or Or   ! !   ti Ti   z Z    . .   th Th   , ,    ' '
 &             !             (      .      )      ,      '
 ё Ё   на На   ! !   ен Ен   з З    . .    ш Ш    , ,    ' '

  10     15     25     15     10     20     20     20     20     40
 ---    x--    x--    ---    -x-    -x-    ---    xx-    ---    xx-
 --x    --x    x-x    x-x    --x    -xx    -xx    --x    xxx    xxx
   -      -      -      -      -      -      -      -      -      -
  31     32     33     34     35     36     37     38     39     40
 bks    d D   es Es   c C    n N   an An  at At  en En  er Er
 7 hm tab F3          + F4   8 end  [      ]      {      }
 bks    д Д   по По   ц Ц    н Н    щ Щ    ъ Ъ    ы Ы    ь ь

  20     25     35     25     20     30     20     35     35     55
 ---    x--    x--    ---    -x-    -x-    ---    xx-    ---    xx-
 --x    --x    x-x    x-x    --x    -xx    -xx    --x    xxx    xxx
   x      x      x      x      x      x      x      x      x      x
  41     42     43     44     45     46     47     48     49     50
re Re  of Of   ? ?   ed Ed  he He   " "   in In   _ _    - -
 <             ?             >      "      |      _      -
 э Э   ов Ов   ? ?   ни Ни   ю Ю    " "    я Я    _ _    - -

  10     15     25     15     15     20     10     25     20     45
 ---    x--    x--    ---    -x-    -x-    ---    xx-    ---    xx-
 ---    ---    x--    x--    ---    -x-    -x-    ---    xx-    xx-
   x      x      x      x      x      x      x      x      x      x
  51     52     53     54     55     56     57     58     59     60
 s S    u U   is Is   m M    f F   nd Nd   r R   it It  on On
 9 ins  - F5          * F6   / F7          0 del
 с С    у У   ко Ко   м М    ф Ф   ст Ст   р Р   ра Ра  то То
*/
static const uint8_t right_mi_chord_to_id[128] PROGMEM =
{
    [0b0000000] = 1,
    [0b0000010] = 2,
    [0b0000011] = 3,
    [0b0000001] = 4,
    [0b0001000] = 5,
    [0b0001100] = 6,
    [0b0000100] = 7,
    [0b0001010] = 8,
    [0b0000101] = 9,
    [0b0001111] = 10,
    [0b0001110] = 10,
    [0b0001101] = 10,
    [0b0001011] = 10,
    [0b0000111] = 10,
    [0b1000000] = 11,
    [0b1000010] = 12,
    [0b1000011] = 13,
    [0b1000001] = 14,
    [0b1001000] = 15,
    [0b1001100] = 16,
    [0b1000100] = 17,
    [0b1001010] = 18,
    [0b1000101] = 19,
    [0b1001111] = 20,
    [0b1001110] = 20,
    [0b1001101] = 20,
    [0b1001011] = 20,
    [0b1000111] = 20,
    [0b1100000] = 21,
    [0b1100010] = 22,
    [0b1100011] = 23,
    [0b1100001] = 24,
    [0b1101000] = 25,
    [0b1101100] = 26,
    [0b1100100] = 27,
    [0b1101010] = 28,
    [0b1100101] = 29,
    [0b1101111] = 30,
    [0b1101110] = 30,
    [0b1101101] = 30,
    [0b1101011] = 30,
    [0b1100111] = 30,
    [0b0100000] = 31,
    [0b0100010] = 32,
    [0b0100011] = 33,
    [0b0100001] = 34,
    [0b0101000] = 35,
    [0b0101100] = 36,
    [0b0100100] = 37,
    [0b0101010] = 38,
    [0b0100101] = 39,
    [0b0101111] = 40,
    [0b0101110] = 40,
    [0b0101101] = 40,
    [0b0101011] = 40,
    [0b0100111] = 40,
    [0b0110000] = 41,
    [0b0110010] = 42,
    [0b0110011] = 43,
    [0b0110001] = 44,
    [0b0111000] = 45,
    [0b0111100] = 46,
    [0b0110100] = 47,
    [0b0111010] = 48,
    [0b0110101] = 49,
    [0b0111111] = 50,
    [0b0111110] = 50,
    [0b0111101] = 50,
    [0b0111011] = 50,
    [0b0110111] = 50,
    [0b0010000] = 51,
    [0b0010010] = 52,
    [0b0010011] = 53,
    [0b0010001] = 54,
    [0b0011000] = 55,
    [0b0011100] = 56,
    [0b0010100] = 57,
    [0b0011010] = 58,
    [0b0010101] = 59,
    [0b0011111] = 60,
    [0b0011110] = 60,
    [0b0011101] = 60,
    [0b0011011] = 60,
    [0b0010111] = 60
};
    
static const uint16_t mi_chords_lat[] PROGMEM =
{
    [1] =  CHORD_NONE,
    [2] =  CHORD_E,
    [3] =  CHORD_P,
    [4] =  CHORD_T,
    [5] =  CHORD_A,
    [6] =  CHORD_G,
    [7] =  CHORD_O,
    [8] =  CHORD_Y,
    [9] =  CHORD_B,
    [11] = CHORD_BSPACE,
    [12] = CHORD_H,
    [13] = CHORD_TE,
    [14] = CHORD_L,
    [15] = CHORD_V,
    [16] = CHORD_K,
    [17] = CHORD_I,
    [18] = CHORD_X,
    [19] = CHORD_J,
    [21] = CHORD_Q,
    [22] = CHORD_OR,
    [23] = CHORD_EXCL,
    [24] = CHORD_TI,
    [25] = CHORD_Z,
    [26] = CHORD_DOT,
    [27] = CHORD_TH,
    [28] = CHORD_COMMA,
    [29] = CHORD_QUOTE,
    [31] = CHORD_SPACE,
    [32] = CHORD_D,
    [33] = CHORD_ES,
    [34] = CHORD_C,
    [35] = CHORD_N,
    [36] = CHORD_AN,
    [37] = CHORD_AT,
    [38] = CHORD_EN,
    [39] = CHORD_ER,
    [41] = CHORD_RE,
    [42] = CHORD_OF,
    [43] = CHORD_QUEST,
    [44] = CHORD_ED,
    [45] = CHORD_HE,
    [46] = CHORD_DQUOTE,
    [47] = CHORD_IN,
    [48] = CHORD_UNDERS,
    [49] = CHORD_MINUS,
    [51] = CHORD_S,
    [52] = CHORD_U,
    [53] = CHORD_IS,
    [54] = CHORD_M,
    [55] = CHORD_F,
    [56] = CHORD_ND,
    [57] = CHORD_R,
    [58] = CHORD_IT,
    [59] = CHORD_ON
};

static const uint16_t mi_chords_lat_caps[] PROGMEM =
{
    [1] =  CHORD_NONE,
    [2] =  CHORD_C_E,
    [3] =  CHORD_C_P,
    [4] =  CHORD_C_T,
    [5] =  CHORD_C_A,
    [6] =  CHORD_C_G,
    [7] =  CHORD_C_O,
    [8] =  CHORD_C_Y,
    [9] =  CHORD_C_B,
    [11] = CHORD_BSPACE,
    [12] = CHORD_C_H,
    [13] = CHORD_C_TE,
    [14] = CHORD_C_L,
    [15] = CHORD_C_V,
    [16] = CHORD_C_K,
    [17] = CHORD_C_I,
    [18] = CHORD_C_X,
    [19] = CHORD_C_J,
    [21] = CHORD_C_Q,
    [22] = CHORD_C_OR,
    [23] = CHORD_EXCL,
    [24] = CHORD_C_TI,
    [25] = CHORD_C_Z,
    [26] = CHORD_DOT,
    [27] = CHORD_C_TH,
    [28] = CHORD_COMMA,
    [29] = CHORD_QUOTE,
    [31] = CHORD_SPACE,
    [32] = CHORD_C_D,
    [33] = CHORD_C_ES,
    [34] = CHORD_C_C,
    [35] = CHORD_C_N,
    [36] = CHORD_C_AN,
    [37] = CHORD_C_AT,
    [38] = CHORD_C_EN,
    [39] = CHORD_C_ER,
    [41] = CHORD_C_RE,
    [42] = CHORD_C_OF,
    [43] = CHORD_QUEST,
    [44] = CHORD_C_ED,
    [45] = CHORD_C_HE,
    [46] = CHORD_DQUOTE,
    [47] = CHORD_C_IN,
    [48] = CHORD_UNDERS,
    [49] = CHORD_MINUS,
    [51] = CHORD_C_S,
    [52] = CHORD_C_U,
    [53] = CHORD_C_IS,
    [54] = CHORD_C_M,
    [55] = CHORD_C_F,
    [56] = CHORD_C_ND,
    [57] = CHORD_C_R,
    [58] = CHORD_C_IT,
    [59] = CHORD_C_ON
};

static const uint16_t mi_chords_cyr[] PROGMEM =
{
    [1] =  CHORD_NONE,
    [2] =  CHORD_CYR_YE,
    [3] =  CHORD_CYR_P,
    [4] =  CHORD_CYR_T,
    [5] =  CHORD_CYR_A,
    [6] =  CHORD_CYR_G,
    [7] =  CHORD_CYR_O,
    [8] =  CHORD_CYR_ISHORT,
    [9] =  CHORD_CYR_B,
    [11] = CHORD_BSPACE,
    [12] = CHORD_CYR_KHA,
    [13] = CHORD_CYR_NO,
    [14] = CHORD_CYR_L,
    [15] = CHORD_CYR_V,
    [16] = CHORD_CYR_K,
    [17] = CHORD_CYR_I,
    [18] = CHORD_CYR_CHE,
    [19] = CHORD_CYR_ZHE,
    [21] = CHORD_CYR_YO,
    [22] = CHORD_CYR_NA,
    [23] = CHORD_EXCL,
    [24] = CHORD_CYR_EN,
    [25] = CHORD_CYR_Z,
    [26] = CHORD_DOT,
    [27] = CHORD_CYR_SHA,
    [28] = CHORD_COMMA,
    [29] = CHORD_QUOTE,
    [31] = CHORD_SPACE,
    [32] = CHORD_CYR_D,
    [33] = CHORD_CYR_PO,
    [34] = CHORD_CYR_TSE,
    [35] = CHORD_CYR_N,
    [36] = CHORD_CYR_SCHA,
    [37] = CHORD_CYR_HARD,
    [38] = CHORD_CYR_YI,
    [39] = CHORD_CYR_SOFT,
    [41] = CHORD_CYR_E,
    [42] = CHORD_CYR_OV,
    [43] = CHORD_QUEST,
    [44] = CHORD_CYR_NI,
    [45] = CHORD_CYR_YU,
    [46] = CHORD_DQUOTE,
    [47] = CHORD_CYR_YA,
    [48] = CHORD_UNDERS,
    [49] = CHORD_MINUS,
    [51] = CHORD_CYR_S,
    [52] = CHORD_CYR_U,
    [53] = CHORD_CYR_KO,
    [54] = CHORD_CYR_M,
    [55] = CHORD_CYR_F,
    [56] = CHORD_CYR_ST,
    [57] = CHORD_CYR_R,
    [58] = CHORD_CYR_RA,
    [59] = CHORD_CYR_TO
};

static const uint16_t mi_chords_cyr_caps[] PROGMEM =
{
    [1] =  CHORD_NONE,
    [2] =  CHORD_C_CYR_YE,
    [3] =  CHORD_C_CYR_P,
    [4] =  CHORD_C_CYR_T,
    [5] =  CHORD_C_CYR_A,
    [6] =  CHORD_C_CYR_G,
    [7] =  CHORD_C_CYR_O,
    [8] =  CHORD_C_CYR_ISHORT,
    [9] =  CHORD_C_CYR_B,
    [11] = CHORD_BSPACE,
    [12] = CHORD_C_CYR_KHA,
    [13] = CHORD_C_CYR_NO,
    [14] = CHORD_C_CYR_L,
    [15] = CHORD_C_CYR_V,
    [16] = CHORD_C_CYR_K,
    [17] = CHORD_C_CYR_I,
    [18] = CHORD_C_CYR_CHE,
    [19] = CHORD_C_CYR_ZHE,
    [21] = CHORD_C_CYR_YO,
    [22] = CHORD_C_CYR_NA,
    [23] = CHORD_EXCL,
    [24] = CHORD_C_CYR_EN,
    [25] = CHORD_C_CYR_Z,
    [26] = CHORD_DOT,
    [27] = CHORD_C_CYR_SHA,
    [28] = CHORD_COMMA,
    [29] = CHORD_QUOTE,
    [31] = CHORD_SPACE,
    [32] = CHORD_C_CYR_D,
    [33] = CHORD_C_CYR_PO,
    [34] = CHORD_C_CYR_TSE,
    [35] = CHORD_C_CYR_N,
    [36] = CHORD_C_CYR_SCHA,
    [37] = CHORD_C_CYR_HARD,
    [38] = CHORD_C_CYR_YI,
    [39] = CHORD_C_CYR_SOFT,
    [41] = CHORD_C_CYR_E,
    [42] = CHORD_C_CYR_OV,
    [43] = CHORD_QUEST,
    [44] = CHORD_C_CYR_NI,
    [45] = CHORD_C_CYR_YU,
    [46] = CHORD_DQUOTE,
    [47] = CHORD_C_CYR_YA,
    [48] = CHORD_UNDERS,
    [49] = CHORD_MINUS,
    [51] = CHORD_C_CYR_S,
    [52] = CHORD_C_CYR_U,
    [53] = CHORD_C_CYR_KO,
    [54] = CHORD_C_CYR_M,
    [55] = CHORD_C_CYR_F,
    [56] = CHORD_C_CYR_ST,
    [57] = CHORD_C_CYR_R,
    [58] = CHORD_C_CYR_RA,
    [59] = CHORD_C_CYR_TO
};

static const uint16_t mi_chords_symb[] PROGMEM =
{
    [1] =  CHORD_NONE,
    [2] =  CHORD_1,
    [3] =  CHORD_BACKSLASH,
    [4] =  CHORD_2,
    [5] =  CHORD_3,
    [6] =  CHORD_GRAVE,
    [7] =  CHORD_4,
    [8] =  CHORD_TILDA,
    [9] =  CHORD_AAT,
    [11] = CHORD_5,
    [12] = CHORD_SPACE,
    [14] = CHORD_BSPACE,
    [15] = CHORD_HASH,
    [16] = CHORD_DOLLAR,
    [17] = CHORD_6,
    [18] = CHORD_PERCENT,
    [19] = CHORD_HAT,
    [21] = CHORD_AMP,
    [23] = CHORD_EXCL,
    [25] = CHORD_LPAREN,
    [26] = CHORD_DOT,
    [27] = CHORD_RPAREN,
    [28] = CHORD_COMMA,
    [29] = CHORD_QUOTE,
    [31] = CHORD_7,
    [32] = CHORD_TAB,
    [34] = CHORD_PLUS,
    [35] = CHORD_8,
    [36] = CHORD_LBRACE,
    [37] = CHORD_RBRACE,
    [38] = CHORD_LCURL,
    [39] = CHORD_RCURL,
    [41] = CHORD_LESS,
    [43] = CHORD_QUEST,
    [45] = CHORD_GREAT,
    [46] = CHORD_DQUOTE,
    [47] = CHORD_PIPE,
    [48] = CHORD_UNDERS,
    [49] = CHORD_MINUS,
    [51] = CHORD_9,
    [52] = CHORD_MINUS,
    [54] = CHORD_ASTERISK,
    [55] = CHORD_SLASH,
    [57] = CHORD_0
};

static const uint16_t mi_chords_nav[] PROGMEM =
{
    [1] =  CHORD_NONE,
    [2] =  CHORD_UP,
    [3] =  CHORD_F8,
    [4] =  CHORD_DOWN,
    [5] =  CHORD_RIGHT,
    [6] =  CHORD_F9,
    [7] =  CHORD_LEFT,
    [8] =  CHORD_F10,
    [9] =  CHORD_F11,
    [11] = CHORD_PGUP,
    [12] = CHORD_F1,
    [14] = CHORD_F2,
    [15] = CHORD_F12,
    [17] = CHORD_PGDOWN,
    [31] = CHORD_HOME,
    [32] = CHORD_F3,
    [34] = CHORD_F4,
    [35] = CHORD_END,
    [51] = CHORD_INSERT,
    [52] = CHORD_F5,
    [54] = CHORD_F6,
    [55] = CHORD_F7,
    [57] = CHORD_DELETE
};

/*
  13
 024

  --   -x     --       -x     --     x-     --   --   --
 ---  --x    --x      -xx    -xx    -x-    -x-  xx-  x--
  1    2      3        4      5      6      7    8    9
     CAP_PR CAP_MI CAP_PRMI SYMB SYMB_MODS MODS      NAV
*/
static const uint8_t left_thumb_chord_to_id[32] PROGMEM =
{
    [0b00000] = 1,
    [0b11000] = 2,
    [0b10000] = 3,
    [0b11100] = 4,
    [0b10100] = 5,
    [0b00110] = 6,
    [0b00100] = 7,
    [0b00101] = 8,
    [0b00001] = 9
};

/*
 13
 024

 --   x-     --       x-     --     -x     --   --   --
 ---  x--    x--      xx-    xx-    -x-    -x-  -xx  --x
 1     2      3        4      5      6      7    8    9
     CAP_PR CAP_MI CAP_PRMI SYMB SYMB_MODS MODS      NAV
*/
static const uint8_t right_thumb_chord_to_id[32] PROGMEM =
{
    [0b00000] = 1,
    [0b00011] = 2,
    [0b00001] = 3,
    [0b00111] = 4,
    [0b00101] = 5,
    [0b01100] = 6,
    [0b00100] = 7,
    [0b10100] = 8,
    [0b10000] = 9
};

static const uint16_t thumb_chords[] PROGMEM =
{
    [1] = CHORD_NONE,
    [2] = CHORD_THUMB_CAP1,
    [3] = CHORD_THUMB_CAP2,
    [4] = CHORD_THUMB_CAP12,
    [5] = CHORD_THUMB_SYMB,
    [6] = CHORD_THUMB_SYMB_MODS,
    [7] = CHORD_THUMB_MODS,
    [9] = CHORD_THUMB_NAV
};

static const uint16_t *pr_map[] =
{
    [MAP_LAT] =      pr_chords_lat,
    [MAP_LAT_CAPS] = pr_chords_lat_caps,
    [MAP_SYMB] =     pr_chords_symb,
    [MAP_MODS] =     pr_chords_mods,
    [MAP_CYR] =      pr_chords_cyr,
    [MAP_CYR_CAPS] = pr_chords_cyr_caps
};

static const uint16_t *mi_map[] =
{
    [MAP_LAT] =      mi_chords_lat,
    [MAP_LAT_CAPS] = mi_chords_lat_caps,
    [MAP_SYMB] =     mi_chords_symb,
    [MAP_NAV] =      mi_chords_nav,
    [MAP_CYR] =      mi_chords_cyr,
    [MAP_CYR_CAPS] = mi_chords_cyr_caps
};

static const char* chords[] =
{
    "", "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n",
    "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z",
    "th", "an", "at", "en", "er", "re", "he", "in", "nd", "on", "te", "or", "ti",
    "es", "of", "ed", "is", "it",
    "-", "!", "\"", ",", ".", "?", "'", "_", " ",
    "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N",
    "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z",
    "Th", "An", "At", "En", "Er", "Re", "He", "In", "Nd", "On", "Te", "Or", "Ti",
    "Es", "Of", "Ed", "Is", "It",
    "1", "2", "3", "4", "5", "6", "7", "8", "9", "0",
    "@", "#", "$", "%", "^", "&", "*", "(", ")", "=", "+",
    "[", "]", "{", "}", ";", ":", "\\", "|", "<", ">", "/", "`", "~",
    SS_TAP(X_F1), SS_TAP(X_F2), SS_TAP(X_F3), SS_TAP(X_F4), SS_TAP(X_F5),
    SS_TAP(X_F6), SS_TAP(X_F7), SS_TAP(X_F8), SS_TAP(X_F9), SS_TAP(X_F10),
    SS_TAP(X_F11), SS_TAP(X_F12),
    SS_TAP(X_HOME), SS_TAP(X_END), SS_TAP(X_UP),
    SS_TAP(X_DOWN), SS_TAP(X_LEFT), SS_TAP(X_RIGHT), SS_TAP(X_BSPACE),
    SS_TAP(X_DELETE), SS_TAP(X_INSERT), SS_TAP(X_PGUP), SS_TAP(X_PGDOWN),
    SS_TAP(X_ESCAPE), SS_LSFT(SS_TAP(X_CAPSLOCK)), SS_TAP(X_TAB),
    
    SS_TAP(X_APPLICATION)"cyra", SS_TAP(X_APPLICATION)"cyrb",
    SS_TAP(X_APPLICATION)"cyrv", SS_TAP(X_APPLICATION)"cyrg",
    SS_TAP(X_APPLICATION)"cyrd", SS_TAP(X_APPLICATION)"cyre",
    SS_TAP(X_APPLICATION)"cyryo", SS_TAP(X_APPLICATION)"cyrj",
    SS_TAP(X_APPLICATION)"cyrz", SS_TAP(X_APPLICATION)"cyri",
    SS_TAP(X_APPLICATION)"cyryy", SS_TAP(X_APPLICATION)"cyrk",
    SS_TAP(X_APPLICATION)"cyrl", SS_TAP(X_APPLICATION)"cyrm",
    SS_TAP(X_APPLICATION)"cyrn", SS_TAP(X_APPLICATION)"cyro",
    SS_TAP(X_APPLICATION)"cyrp", SS_TAP(X_APPLICATION)"cyrr",
    SS_TAP(X_APPLICATION)"cyrs", SS_TAP(X_APPLICATION)"cyrt",
    SS_TAP(X_APPLICATION)"cyru", SS_TAP(X_APPLICATION)"cyrf",
    SS_TAP(X_APPLICATION)"cyrh", SS_TAP(X_APPLICATION)"cyrc",
    SS_TAP(X_APPLICATION)"cyrq", SS_TAP(X_APPLICATION)"cyrw",
    SS_TAP(X_APPLICATION)"cyrx", SS_TAP(X_APPLICATION)"cyryx",
    SS_TAP(X_APPLICATION)"cyryq", SS_TAP(X_APPLICATION)"cyryw",
    SS_TAP(X_APPLICATION)"cyrye", SS_TAP(X_APPLICATION)"cyryu",
    SS_TAP(X_APPLICATION)"cyrya",
    SS_TAP(X_APPLICATION)"cyrn"SS_TAP(X_APPLICATION)"cyro",
    SS_TAP(X_APPLICATION)"cyrn"SS_TAP(X_APPLICATION)"cyra",
    SS_TAP(X_APPLICATION)"cyre"SS_TAP(X_APPLICATION)"cyrn",
    SS_TAP(X_APPLICATION)"cyrp"SS_TAP(X_APPLICATION)"cyro",
    SS_TAP(X_APPLICATION)"cyro"SS_TAP(X_APPLICATION)"cyrv",
    SS_TAP(X_APPLICATION)"cyrn"SS_TAP(X_APPLICATION)"cyri",
    SS_TAP(X_APPLICATION)"cyrk"SS_TAP(X_APPLICATION)"cyro",
    SS_TAP(X_APPLICATION)"cyrr"SS_TAP(X_APPLICATION)"cyra",
    SS_TAP(X_APPLICATION)"cyrs"SS_TAP(X_APPLICATION)"cyrt",
    SS_TAP(X_APPLICATION)"cyrt"SS_TAP(X_APPLICATION)"cyro",

    SS_TAP(X_APPLICATION)"CYRA", SS_TAP(X_APPLICATION)"CYRB",
    SS_TAP(X_APPLICATION)"CYRV", SS_TAP(X_APPLICATION)"CYRG",
    SS_TAP(X_APPLICATION)"CYRD", SS_TAP(X_APPLICATION)"CYRE",
    SS_TAP(X_APPLICATION)"CYRYO", SS_TAP(X_APPLICATION)"CYRJ",
    SS_TAP(X_APPLICATION)"CYRZ", SS_TAP(X_APPLICATION)"CYRI",
    SS_TAP(X_APPLICATION)"CYRYY", SS_TAP(X_APPLICATION)"CYRK",
    SS_TAP(X_APPLICATION)"CYRL", SS_TAP(X_APPLICATION)"CYRM",
    SS_TAP(X_APPLICATION)"CYRN", SS_TAP(X_APPLICATION)"CYRO",
    SS_TAP(X_APPLICATION)"CYRP", SS_TAP(X_APPLICATION)"CYRR",
    SS_TAP(X_APPLICATION)"CYRS", SS_TAP(X_APPLICATION)"CYRT",
    SS_TAP(X_APPLICATION)"CYRU", SS_TAP(X_APPLICATION)"CYRF",
    SS_TAP(X_APPLICATION)"CYRH", SS_TAP(X_APPLICATION)"CYRC",
    SS_TAP(X_APPLICATION)"CYRQ", SS_TAP(X_APPLICATION)"CYRW",
    SS_TAP(X_APPLICATION)"CYRX", SS_TAP(X_APPLICATION)"CYRYX",
    SS_TAP(X_APPLICATION)"CYRYQ", SS_TAP(X_APPLICATION)"CYRYW",
    SS_TAP(X_APPLICATION)"CYRYE", SS_TAP(X_APPLICATION)"CYRYU",
    SS_TAP(X_APPLICATION)"CYRYA",
    SS_TAP(X_APPLICATION)"CYRN"SS_TAP(X_APPLICATION)"cyro",
    SS_TAP(X_APPLICATION)"CYRN"SS_TAP(X_APPLICATION)"cyra",
    SS_TAP(X_APPLICATION)"CYRE"SS_TAP(X_APPLICATION)"cyrn",
    SS_TAP(X_APPLICATION)"CYRP"SS_TAP(X_APPLICATION)"cyro",
    SS_TAP(X_APPLICATION)"CYRO"SS_TAP(X_APPLICATION)"cyrv",
    SS_TAP(X_APPLICATION)"CYRN"SS_TAP(X_APPLICATION)"cyri",
    SS_TAP(X_APPLICATION)"CYRK"SS_TAP(X_APPLICATION)"cyro",
    SS_TAP(X_APPLICATION)"CYRR"SS_TAP(X_APPLICATION)"cyra",
    SS_TAP(X_APPLICATION)"CYRS"SS_TAP(X_APPLICATION)"cyrt",
    SS_TAP(X_APPLICATION)"CYRT"SS_TAP(X_APPLICATION)"cyro"
};

#endif//_CHORDS_H_
