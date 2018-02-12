#ifndef _CHORDS_H_
#define _CHORDS_H_

#define CHORD_NONE       0
#define CHORD_LAT_A      1
#define CHORD_LAT_B      2
#define CHORD_LAT_C      3
#define CHORD_LAT_D      4
#define CHORD_LAT_E      5
#define CHORD_LAT_F      6
#define CHORD_LAT_G      7
#define CHORD_LAT_H      8
#define CHORD_LAT_I      9
#define CHORD_LAT_J      10
#define CHORD_LAT_K      11
#define CHORD_LAT_L      12
#define CHORD_LAT_M      13
#define CHORD_LAT_N      14
#define CHORD_LAT_O      15
#define CHORD_LAT_P      16
#define CHORD_LAT_Q      17
#define CHORD_LAT_R      18
#define CHORD_LAT_S      19
#define CHORD_LAT_T      20
#define CHORD_LAT_U      21
#define CHORD_LAT_V      22
#define CHORD_LAT_W      23
#define CHORD_LAT_X      24
#define CHORD_LAT_Y      25
#define CHORD_LAT_Z      26
#define CHORD_LAT_AN     27
#define CHORD_LAT_AT     28
#define CHORD_LAT_EN     29
#define CHORD_LAT_ER     30
#define CHORD_LAT_HE     31
#define CHORD_LAT_IN     32
#define CHORD_LAT_ND     33
#define CHORD_LAT_ON     34
#define CHORD_LAT_OR     35
#define CHORD_LAT_RE     36
#define CHORD_LAT_TE     37
#define CHORD_LAT_TH     38
#define CHORD_LAT_TI     39
#define CHORD_LAT_MINUS  40
#define CHORD_LAT_EXCL   41
#define CHORD_LAT_DQUOT  42
#define CHORD_LAT_COMMA  43
#define CHORD_LAT_DOT    44
#define CHORD_LAT_QUEST  45
#define CHORD_LAT_QUOT   46
#define CHORD_LAT_SPC    47

#define CHORD_LAT_CAPS_A      48
#define CHORD_LAT_CAPS_B      49
#define CHORD_LAT_CAPS_C      50
#define CHORD_LAT_CAPS_D      51
#define CHORD_LAT_CAPS_E      52
#define CHORD_LAT_CAPS_F      53
#define CHORD_LAT_CAPS_G      54
#define CHORD_LAT_CAPS_H      55
#define CHORD_LAT_CAPS_I      56
#define CHORD_LAT_CAPS_J      57
#define CHORD_LAT_CAPS_K      58
#define CHORD_LAT_CAPS_L      59
#define CHORD_LAT_CAPS_M      60
#define CHORD_LAT_CAPS_N      61
#define CHORD_LAT_CAPS_O      62
#define CHORD_LAT_CAPS_P      63
#define CHORD_LAT_CAPS_Q      64
#define CHORD_LAT_CAPS_R      65
#define CHORD_LAT_CAPS_S      66
#define CHORD_LAT_CAPS_T      67
#define CHORD_LAT_CAPS_U      68
#define CHORD_LAT_CAPS_V      69
#define CHORD_LAT_CAPS_W      70
#define CHORD_LAT_CAPS_X      71
#define CHORD_LAT_CAPS_Y      72
#define CHORD_LAT_CAPS_Z      73
#define CHORD_LAT_CAPS_AN     74
#define CHORD_LAT_CAPS_AT     75
#define CHORD_LAT_CAPS_EN     76
#define CHORD_LAT_CAPS_ER     77
#define CHORD_LAT_CAPS_HE     78
#define CHORD_LAT_CAPS_IN     79
#define CHORD_LAT_CAPS_ND     80
#define CHORD_LAT_CAPS_ON     81
#define CHORD_LAT_CAPS_OR     82
#define CHORD_LAT_CAPS_RE     83
#define CHORD_LAT_CAPS_TE     84
#define CHORD_LAT_CAPS_TH     85
#define CHORD_LAT_CAPS_TI     86
#define CHORD_LAT_CAPS_MINUS  40
#define CHORD_LAT_CAPS_EXCL   41
#define CHORD_LAT_CAPS_DQUOT  42
#define CHORD_LAT_CAPS_COMMA  43
#define CHORD_LAT_CAPS_DOT    44
#define CHORD_LAT_CAPS_QUEST  45
#define CHORD_LAT_CAPS_QUOT   46
#define CHORD_LAT_CAPS_SPC    47

#define CHORD_SPECIAL         1024
#define CHORD_THUMB_CAP1      1025
#define CHORD_THUMB_CAP2      1026
#define CHORD_THUMB_CAP12     1027
#define CHORD_THUMB_SYMB      1028
#define CHORD_THUMB_MODS      1029
#define CHORD_THUMB_SYMB_MODS 1030

#define CHORD_MODS_GUI               1031
#define CHORD_MODS_CTL               1032
#define CHORD_MODS_CTL_GUI           1033
#define CHORD_MODS_SFT               1034
#define CHORD_MODS_SFT_GUI           1035
#define CHORD_MODS_SFT_CTL           1036
#define CHORD_MODS_SFT_CTL_GUI       1037
#define CHORD_MODS_ALT               1038
#define CHORD_MODS_ALT_GUI           1039
#define CHORD_MODS_ALT_CTL           1040
#define CHORD_MODS_ALT_CTL_GUI       1041
#define CHORD_MODS_ALT_SFT           1042
#define CHORD_MODS_ALT_SFT_GUI       1043
#define CHORD_MODS_ALT_SFT_CTL       1044
#define CHORD_MODS_ALT_SFT_CTL_GUI   1045

#define MAP_LAT         0
#define MAP_LAT_CAPS    1
#define MAP_CYR         2
#define MAP_CYR_CAPS    3
#define MAP_SYMB        4
#define MAP_MODS        5

#define LEFT_PR_1    0b0000000
#define LEFT_PR_2    0b0000100
#define LEFT_PR_3    0b0001100
#define LEFT_PR_4    0b0001000
#define LEFT_PR_5    0b0000001
#define LEFT_PR_6    0b0000011
#define LEFT_PR_7    0b0000010
#define LEFT_PR_8    0b0000101
#define LEFT_PR_9    0b0001010
#define LEFT_PR_10   0b0001111
#define LEFT_PR_10_1 0b0001110
#define LEFT_PR_10_2 0b0001101
#define LEFT_PR_10_3 0b0001011
#define LEFT_PR_10_4 0b0000111
#define LEFT_PR_11   0b0010000
#define LEFT_PR_12   0b0010100
#define LEFT_PR_13   0b0011100
#define LEFT_PR_14   0b0011000
#define LEFT_PR_15   0b0010001
#define LEFT_PR_16   0b0010011
#define LEFT_PR_17   0b0010010
#define LEFT_PR_18   0b0010101
#define LEFT_PR_19   0b0011010
#define LEFT_PR_20   0b0011111
#define LEFT_PR_20_1 0b0011110
#define LEFT_PR_20_2 0b0011101
#define LEFT_PR_20_3 0b0011011
#define LEFT_PR_20_4 0b0010111
#define LEFT_PR_21   0b0110000
#define LEFT_PR_22   0b0110100
#define LEFT_PR_23   0b0111100
#define LEFT_PR_24   0b0111000
#define LEFT_PR_25   0b0110001
#define LEFT_PR_26   0b0110011
#define LEFT_PR_27   0b0110010
#define LEFT_PR_28   0b0110101
#define LEFT_PR_29   0b0111010
#define LEFT_PR_30   0b0111111
#define LEFT_PR_30_1 0b0111110
#define LEFT_PR_30_2 0b0111101
#define LEFT_PR_30_3 0b0111011
#define LEFT_PR_30_4 0b0110111
#define LEFT_PR_31   0b0100000
#define LEFT_PR_32   0b0100100
#define LEFT_PR_33   0b0101100
#define LEFT_PR_34   0b0101000
#define LEFT_PR_35   0b0100001
#define LEFT_PR_36   0b0100011
#define LEFT_PR_37   0b0100010
#define LEFT_PR_38   0b0100101
#define LEFT_PR_39   0b0101010
#define LEFT_PR_40   0b0101111
#define LEFT_PR_40_1 0b0101110
#define LEFT_PR_40_2 0b0101101
#define LEFT_PR_40_3 0b0101011
#define LEFT_PR_40_4 0b0100111
#define LEFT_PR_41   0b1100000
#define LEFT_PR_42   0b1100100
#define LEFT_PR_43   0b1101100
#define LEFT_PR_44   0b1101000
#define LEFT_PR_45   0b1100001
#define LEFT_PR_46   0b1100011
#define LEFT_PR_47   0b1100010
#define LEFT_PR_48   0b1100101
#define LEFT_PR_49   0b1101010
#define LEFT_PR_50   0b1101111
#define LEFT_PR_50_1 0b1101110
#define LEFT_PR_50_2 0b1101101
#define LEFT_PR_50_3 0b1101011
#define LEFT_PR_50_4 0b1100111
#define LEFT_PR_51   0b1000000
#define LEFT_PR_52   0b1000100
#define LEFT_PR_53   0b1001100
#define LEFT_PR_54   0b1001000
#define LEFT_PR_55   0b1000001
#define LEFT_PR_56   0b1000011
#define LEFT_PR_57   0b1000010
#define LEFT_PR_58   0b1000101
#define LEFT_PR_59   0b1001010
#define LEFT_PR_60   0b1001111
#define LEFT_PR_60_1 0b1001110
#define LEFT_PR_60_2 0b1001101
#define LEFT_PR_60_3 0b1001011
#define LEFT_PR_60_4 0b1000111
/*
 Diff       relative difficulty
   4
 025        Bit numbers
 136
  Id        Chord Id
 Lat Cap    Latin map    Capital latin
 Sym Mod    Symbol Map   Modifier Map
 Cyr Cap    Cyrillic Map Capical cyrillic

 2 4 5 7  11 12 31 34 51 52
 e t a o [ ]  i bks n  s  r
 е т а о [ ]  и bks н  с  р
 1 2 3 4   5  6  7  8  9 10
 14  15  17  35 37 55 57
  h   l   d   c  u  m  f
  х   л   д   ц  у  м  ф
 [ ] bks tab  +  -  *  /
 3 6 8 9 13 18 21 22 24 32 33 38 39 41 42 44 53 54 58 59
 p g y b  v  k  x  j  q  z th an at en er re he in nd on
 п г й б  в  к  ч  ж  ё  з  ш  щ  ъ  ы  ь  э  ю  я ст то
 \ ` ~ @  #  $  %  ^  &  (  )  [  ]  {  }  <  >  | F1 F2
 16 19 25 27 36 45 47 56
 te or ti es of en is it
 но на ен по ов ни ко ра
 F3 F4 F5 F6 F7 F8 F9 F10
 23  28  43  48  49
  .   ,   '   "   -
 F11 F12 INS DEL PGUP
 26   29   46
  !    ?    _
 PGDN HOME END
 10 40 60
 
 20
 
 50
  
 30

  0      10     20     10     10     20     10     20     20     40
   -      -      -      -      -      -      -      -      -      -
 ---    -x-    -x-    ---    x--    x--    ---    xx-    ---    xx-
 ---    ---    -x-    -x-    ---    x--    x--    ---    xx-    xx-
  1      2      3      4      5      6      7      8      9      10

  10     10     20     15     15     25     15     20     25     45
   x      x      x      x      x      x      x      x      x      x
 ---    -x-    -x-    ---    x--    x--    ---    xx-    ---    xx-
 ---    ---    -x-    -x-    ---    x--    x--    ---    xx-    xx-
  11     12     13     14     15     16     17     18     19     20

  20     20     30     20     25     35     25     30     35     55
   x      x      x      x      x      x      x      x      x      x
 --x    -xx    -xx    --x    x-x    x-x    --x    xxx    --x    xxx
 ---    ---    -x-    -x-    ---    x--    x--    ---    xx-    xx-
  21     22     23     24     25     26     27     28     29     30

  10     20     20     10     15     25     15     20     20     40
   -      -      -      -      -      -      -      -      -      -
 --x    -xx    -xx    --x    x-x    x-x    --x    xxx    --x    xxx
 ---    ---    -x-    -x-    ---    x--    x--    ---    xx-    xx-
  31     32     33     34     35     36     37     38     39     40

  20     20     30     20     25     35     25     30     30     50
   -      -      -      -      -      -      -      -      -      -
 --x    -xx    -xx    --x    x-x    x-x    --x    xxx    --x    xxx
 --x    --x    -xx    -xx    --x    x-x    x-x    --x    xxx    xxx
  41     42     43     44     45     46     47     48     49     50

  10     10     20     20     15     25     15     20     20     40
   -      -      -      -      -      -      -      -      -      -
 ---    -x-    -x-    ---    x--    x--    ---    xx-    ---    xx-
 --x    --x    -xx    -xx    --x    x-x    x-x    --x    xxx    xxx
  51     52     53     54     55     56     57     58     59     60
*/
static const uint16_t left_pr_chords_lat[128] PROGMEM =
{
    [LEFT_PR_1] =  CHORD_NONE,
    [LEFT_PR_2] =  CHORD_LAT_A,
    [LEFT_PR_3] =  CHORD_LAT_B,
    [LEFT_PR_4] =  CHORD_LAT_C,
    [LEFT_PR_5] =  CHORD_LAT_D,
    [LEFT_PR_6] =  CHORD_LAT_E,
    [LEFT_PR_7] =  CHORD_LAT_F,
    [LEFT_PR_8] =  CHORD_LAT_G,
    [LEFT_PR_9] =  CHORD_LAT_H,
    [LEFT_PR_10] = CHORD_LAT_I,
    [LEFT_PR_11] = CHORD_LAT_J,
    [LEFT_PR_12] = CHORD_LAT_K,
    [LEFT_PR_13] = CHORD_LAT_L,
    [LEFT_PR_14] = CHORD_LAT_M,
    [LEFT_PR_15] = CHORD_LAT_N,
    [LEFT_PR_16] = CHORD_LAT_O,
    [LEFT_PR_17] = CHORD_LAT_P,
    [LEFT_PR_18] = CHORD_LAT_Q,
    [LEFT_PR_19] = CHORD_LAT_R,
    [LEFT_PR_20] = CHORD_LAT_S,
    [LEFT_PR_21] = CHORD_LAT_T,
    [LEFT_PR_22] = CHORD_LAT_U,
    [LEFT_PR_23] = CHORD_LAT_V,
    [LEFT_PR_24] = CHORD_LAT_W,
    [LEFT_PR_25] = CHORD_LAT_X,
    [LEFT_PR_26] = CHORD_LAT_Y,
    [LEFT_PR_27] = CHORD_LAT_Z,
    [LEFT_PR_28] = CHORD_LAT_AN,
    [LEFT_PR_29] = CHORD_LAT_AT,
    [LEFT_PR_30] = CHORD_LAT_EN,
    [LEFT_PR_31] = CHORD_LAT_ER,
    [LEFT_PR_32] = CHORD_LAT_HE,
    [LEFT_PR_33] = CHORD_LAT_IN,
    [LEFT_PR_34] = CHORD_LAT_ND,
    [LEFT_PR_35] = CHORD_LAT_ON,
    [LEFT_PR_36] = CHORD_LAT_OR,
    [LEFT_PR_37] = CHORD_LAT_RE,
    [LEFT_PR_38] = CHORD_LAT_TE,
    [LEFT_PR_39] = CHORD_LAT_TH,
    [LEFT_PR_40] = CHORD_LAT_TI,
    [LEFT_PR_41] = CHORD_LAT_MINUS,
    [LEFT_PR_42] = CHORD_LAT_EXCL,
    [LEFT_PR_43] = CHORD_LAT_DQUOT,
    [LEFT_PR_44] = CHORD_LAT_COMMA,
    [LEFT_PR_45] = CHORD_LAT_DOT,
    [LEFT_PR_46] = CHORD_LAT_QUEST,
    [LEFT_PR_47] = CHORD_LAT_QUOT,
    [LEFT_PR_48] = CHORD_LAT_SPC
};

static const uint16_t left_pr_chords_lat_caps[128] PROGMEM =
{
    [LEFT_PR_1] =  CHORD_NONE,
    [LEFT_PR_2] =  CHORD_LAT_CAPS_A,
    [LEFT_PR_3] =  CHORD_LAT_CAPS_B,
    [LEFT_PR_4] =  CHORD_LAT_CAPS_C,
    [LEFT_PR_5] =  CHORD_LAT_CAPS_D,
    [LEFT_PR_6] =  CHORD_LAT_CAPS_E,
    [LEFT_PR_7] =  CHORD_LAT_CAPS_F,
    [LEFT_PR_8] =  CHORD_LAT_CAPS_G,
    [LEFT_PR_9] =  CHORD_LAT_CAPS_H,
    [LEFT_PR_10] = CHORD_LAT_CAPS_I,
    [LEFT_PR_11] = CHORD_LAT_CAPS_J,
    [LEFT_PR_12] = CHORD_LAT_CAPS_K,
    [LEFT_PR_13] = CHORD_LAT_CAPS_L,
    [LEFT_PR_14] = CHORD_LAT_CAPS_M,
    [LEFT_PR_15] = CHORD_LAT_CAPS_N,
    [LEFT_PR_16] = CHORD_LAT_CAPS_O,
    [LEFT_PR_17] = CHORD_LAT_CAPS_P,
    [LEFT_PR_18] = CHORD_LAT_CAPS_Q,
    [LEFT_PR_19] = CHORD_LAT_CAPS_R,
    [LEFT_PR_20] = CHORD_LAT_CAPS_S,
    [LEFT_PR_21] = CHORD_LAT_CAPS_T,
    [LEFT_PR_22] = CHORD_LAT_CAPS_U,
    [LEFT_PR_23] = CHORD_LAT_CAPS_V,
    [LEFT_PR_24] = CHORD_LAT_CAPS_W,
    [LEFT_PR_25] = CHORD_LAT_CAPS_X,
    [LEFT_PR_26] = CHORD_LAT_CAPS_Y,
    [LEFT_PR_27] = CHORD_LAT_CAPS_Z,
    [LEFT_PR_28] = CHORD_LAT_CAPS_AN,
    [LEFT_PR_29] = CHORD_LAT_CAPS_AT,
    [LEFT_PR_30] = CHORD_LAT_CAPS_EN,
    [LEFT_PR_31] = CHORD_LAT_CAPS_ER,
    [LEFT_PR_32] = CHORD_LAT_CAPS_HE,
    [LEFT_PR_33] = CHORD_LAT_CAPS_IN,
    [LEFT_PR_34] = CHORD_LAT_CAPS_ND,
    [LEFT_PR_35] = CHORD_LAT_CAPS_ON,
    [LEFT_PR_36] = CHORD_LAT_CAPS_OR,
    [LEFT_PR_37] = CHORD_LAT_CAPS_RE,
    [LEFT_PR_38] = CHORD_LAT_CAPS_TE,
    [LEFT_PR_39] = CHORD_LAT_CAPS_TH,
    [LEFT_PR_40] = CHORD_LAT_CAPS_TI,
    [LEFT_PR_41] = CHORD_LAT_CAPS_MINUS,
    [LEFT_PR_42] = CHORD_LAT_CAPS_EXCL,
    [LEFT_PR_43] = CHORD_LAT_CAPS_DQUOT,
    [LEFT_PR_44] = CHORD_LAT_CAPS_COMMA,
    [LEFT_PR_45] = CHORD_LAT_CAPS_DOT,
    [LEFT_PR_46] = CHORD_LAT_CAPS_QUEST,
    [LEFT_PR_47] = CHORD_LAT_CAPS_QUOT,
    [LEFT_PR_48] = CHORD_LAT_CAPS_SPC
};

static const uint16_t left_pr_chords_symb[128] PROGMEM =
{
    [LEFT_PR_1] =  CHORD_NONE,
    [LEFT_PR_2] =  CHORD_LAT_A,
    [LEFT_PR_3] =  CHORD_LAT_B,
    [LEFT_PR_4] =  CHORD_LAT_C,
    [LEFT_PR_5] =  CHORD_LAT_D,
    [LEFT_PR_6] =  CHORD_LAT_E,
    [LEFT_PR_7] =  CHORD_LAT_F,
    [LEFT_PR_8] =  CHORD_LAT_G,
    [LEFT_PR_9] =  CHORD_LAT_H,
    [LEFT_PR_10] = CHORD_LAT_I,
    [LEFT_PR_11] = CHORD_LAT_J,
    [LEFT_PR_12] = CHORD_LAT_K,
    [LEFT_PR_13] = CHORD_LAT_L,
    [LEFT_PR_14] = CHORD_LAT_M,
    [LEFT_PR_15] = CHORD_LAT_N,
    [LEFT_PR_16] = CHORD_LAT_O,
    [LEFT_PR_17] = CHORD_LAT_P,
    [LEFT_PR_18] = CHORD_LAT_Q,
    [LEFT_PR_19] = CHORD_LAT_R,
    [LEFT_PR_20] = CHORD_LAT_S,
    [LEFT_PR_21] = CHORD_LAT_T,
    [LEFT_PR_22] = CHORD_LAT_U,
    [LEFT_PR_23] = CHORD_LAT_V,
    [LEFT_PR_24] = CHORD_LAT_W,
    [LEFT_PR_25] = CHORD_LAT_X,
    [LEFT_PR_26] = CHORD_LAT_Y,
    [LEFT_PR_27] = CHORD_LAT_Z,
    [LEFT_PR_28] = CHORD_LAT_AN,
    [LEFT_PR_29] = CHORD_LAT_AT,
    [LEFT_PR_30] = CHORD_LAT_EN,
    [LEFT_PR_31] = CHORD_LAT_ER,
    [LEFT_PR_32] = CHORD_LAT_HE,
    [LEFT_PR_33] = CHORD_LAT_IN,
    [LEFT_PR_34] = CHORD_LAT_ND,
    [LEFT_PR_35] = CHORD_LAT_ON,
    [LEFT_PR_36] = CHORD_LAT_OR,
    [LEFT_PR_37] = CHORD_LAT_RE,
    [LEFT_PR_38] = CHORD_LAT_TE,
    [LEFT_PR_39] = CHORD_LAT_TH,
    [LEFT_PR_40] = CHORD_LAT_TI,
    [LEFT_PR_41] = CHORD_LAT_MINUS,
    [LEFT_PR_42] = CHORD_LAT_EXCL,
    [LEFT_PR_43] = CHORD_LAT_DQUOT,
    [LEFT_PR_44] = CHORD_LAT_COMMA,
    [LEFT_PR_45] = CHORD_LAT_DOT,
    [LEFT_PR_46] = CHORD_LAT_QUEST,
    [LEFT_PR_47] = CHORD_LAT_QUOT,
    [LEFT_PR_48] = CHORD_LAT_SPC
};

static const uint16_t left_pr_chords_mods[128] PROGMEM =
{
    [LEFT_PR_1] = CHORD_NONE,
    [LEFT_PR_2] = CHORD_MODS_GUI,
    [LEFT_PR_4] = CHORD_MODS_CTL,
    [LEFT_PR_3] = CHORD_MODS_CTL_GUI,
    [LEFT_PR_31] = CHORD_MODS_SFT,
    [LEFT_PR_32] = CHORD_MODS_SFT_GUI,
    [LEFT_PR_34] = CHORD_MODS_SFT_CTL,
    [LEFT_PR_33] = CHORD_MODS_SFT_CTL_GUI,
    [LEFT_PR_51] = CHORD_MODS_ALT,
    [LEFT_PR_52] = CHORD_MODS_ALT_GUI,
    [LEFT_PR_54] = CHORD_MODS_ALT_CTL,
    [LEFT_PR_53] = CHORD_MODS_ALT_CTL_GUI,
    [LEFT_PR_41] = CHORD_MODS_ALT_SFT,
    [LEFT_PR_42] = CHORD_MODS_ALT_SFT_GUI,
    [LEFT_PR_44] = CHORD_MODS_ALT_SFT_CTL,
    [LEFT_PR_43] = CHORD_MODS_ALT_SFT_CTL_GUI
};

#define LEFT_MI_1    0b0000000
#define LEFT_MI_2    0b0100000
#define LEFT_MI_3    0b1100000
#define LEFT_MI_4    0b1000000
#define LEFT_MI_5    0b0001000
#define LEFT_MI_6    0b0011000
#define LEFT_MI_7    0b0010000
#define LEFT_MI_8    0b0101000
#define LEFT_MI_9    0b1010000
#define LEFT_MI_10   0b1111000
#define LEFT_MI_10_1 0b1110000
#define LEFT_MI_10_2 0b1101000
#define LEFT_MI_10_3 0b1011000
#define LEFT_MI_10_4 0b0111000
#define LEFT_MI_11   0b0000001
#define LEFT_MI_12   0b0100001
#define LEFT_MI_13   0b1100001
#define LEFT_MI_14   0b1000001
#define LEFT_MI_15   0b0001001
#define LEFT_MI_16   0b0011001
#define LEFT_MI_17   0b0010001
#define LEFT_MI_18   0b0101001
#define LEFT_MI_19   0b1010001
#define LEFT_MI_20   0b1111001
#define LEFT_MI_20_1 0b1110001
#define LEFT_MI_20_2 0b1101001
#define LEFT_MI_20_3 0b1011001
#define LEFT_MI_20_4 0b0111001
#define LEFT_MI_21   0b0000011
#define LEFT_MI_22   0b0100011
#define LEFT_MI_23   0b1100011
#define LEFT_MI_24   0b1000011
#define LEFT_MI_25   0b0001011
#define LEFT_MI_26   0b0011011
#define LEFT_MI_27   0b0010011
#define LEFT_MI_28   0b0101011
#define LEFT_MI_29   0b1010011
#define LEFT_MI_30   0b1111011
#define LEFT_MI_30_1 0b1110011
#define LEFT_MI_30_2 0b1101011
#define LEFT_MI_30_3 0b1011011
#define LEFT_MI_30_4 0b0111011
#define LEFT_MI_31   0b0000010
#define LEFT_MI_32   0b0100010
#define LEFT_MI_33   0b1100010
#define LEFT_MI_34   0b1000010
#define LEFT_MI_35   0b0001010
#define LEFT_MI_36   0b0011010
#define LEFT_MI_37   0b0010010
#define LEFT_MI_38   0b0101010
#define LEFT_MI_39   0b1010010
#define LEFT_MI_40   0b1111010
#define LEFT_MI_40_1 0b1110010
#define LEFT_MI_40_2 0b1101010
#define LEFT_MI_40_3 0b1011010
#define LEFT_MI_40_4 0b0111010
#define LEFT_MI_41   0b0000110
#define LEFT_MI_42   0b0100110
#define LEFT_MI_43   0b1100110
#define LEFT_MI_44   0b1000110
#define LEFT_MI_45   0b0001110
#define LEFT_MI_46   0b0011110
#define LEFT_MI_47   0b0010110
#define LEFT_MI_48   0b0101110
#define LEFT_MI_49   0b1010110
#define LEFT_MI_50   0b1111110
#define LEFT_MI_50_1 0b1110110
#define LEFT_MI_50_2 0b1101110
#define LEFT_MI_50_3 0b1011110
#define LEFT_MI_50_4 0b0111110
#define LEFT_MI_51   0b0000100
#define LEFT_MI_52   0b0100100
#define LEFT_MI_53   0b1100100
#define LEFT_MI_54   0b1000100
#define LEFT_MI_55   0b0001100
#define LEFT_MI_56   0b0011100
#define LEFT_MI_57   0b0010100
#define LEFT_MI_58   0b0101100
#define LEFT_MI_59   0b1010100
#define LEFT_MI_60   0b1111100
#define LEFT_MI_60_1 0b1110100
#define LEFT_MI_60_2 0b1101100
#define LEFT_MI_60_3 0b1011100
#define LEFT_MI_60_4 0b0111100
/*
 Diff       relative difficulty
 035 
 146        Bit numbers
 2    
  Id        Chord Id
 Lat Cap    Latin map    Capital latin
 Sym Mod    Symbol Map   Modifier Map
 Cyr Cap    Cyrillic Map Capical cyrillic

 2 4 5 7 11 17 31 35 51 57

 12 14 32 34 53 54 55

 3 6 8 9 15 16 18 19 21 25 27 36 37 38 39 41 45 47 56 59

 13 22 24 33 42 44 53 58

 26 28 29 46 49

 23 43 48

 10 20 40

 60

 50
 
  0      10     20     10     10     20     10     20     20     40
 ---    --x    --x    ---    -x-    -x-    ---    -xx    ---    -xx
 ---    ---    --x    --x    ---    -x-    -x-    ---    -xx    -xx
 -      -      -      -      -      -      -      -      -      -
  1      2      3      4      5      6      7      8      9      10

  10     15     25     15     20     20     10     20     20     40
 x--    x-x    x-x    x--    xx-    xx-    x--    xxx    x--    xxx
 ---    ---    --x    --x    ---    -x-    -x-    ---    -xx    -xx
 -      -      -      -      -      -      -      -      -      -
  11     12     13     14     15     16     17     18     19     20

  20     25     35     25     20     30     20     30     30     50
 x--    x-x    x-x    x--    xx-    xx-    x--    xxx    x--    xxx
 x--    x--    x-x    x-x    x--    xx-    xx-    x--    xxx    xxx
 -      -      -      -      -      -      -      -      -      -
  21     22     23     24     25     26     27     28     29     30

  10     15     25     15     10     20     20     20     20     40
 ---    --x    --x    ---    -x-    -x-    ---    -xx    ---    -xx
 x--    x--    x-x    x-x    x--    xx-    xx-    x--    xxx    xxx
 -      -      -      -      -      -      -      -      -      -
  31     32     33     34     35     36     37     38     39     40

  20     25     35     25     20     30     20     35     30     55
 ---    --x    --x    ---    -x-    -x-    ---    -xx    ---    -xx
 x--    x--    x-x    x-x    x--    xx-    xx-    x--    xxx    xxx
 x      x      x      x      x      x      x      x      x      x
  41     42     43     44     45     46     47     48     49     50

  10     15     25     15     15     20     10     25     20     45
 ---    --x    --x    ---    -x-    -x-    ---    -xx    ---    -xx
 ---    ---    --x    --x    ---    -x-    -x-    ---    -xx    -xx
 x      x      x      x      x      x      x      x      x      x
  51     52     53     54     55     56     57     58     59     60
*/
static const uint16_t left_mi_chords_lat[128] PROGMEM =
{
    [LEFT_MI_1] =  CHORD_NONE,
    [LEFT_MI_2] =  CHORD_LAT_A,
    [LEFT_MI_3] =  CHORD_LAT_B,
    [LEFT_MI_4] =  CHORD_LAT_C,
    [LEFT_MI_5] =  CHORD_LAT_D,
    [LEFT_MI_6] =  CHORD_LAT_E,
    [LEFT_MI_7] =  CHORD_LAT_F,
    [LEFT_MI_8] =  CHORD_LAT_G,
    [LEFT_MI_9] =  CHORD_LAT_H,
    [LEFT_MI_10] = CHORD_LAT_I,
    [LEFT_MI_11] = CHORD_LAT_J,
    [LEFT_MI_12] = CHORD_LAT_K,
    [LEFT_MI_13] = CHORD_LAT_L,
    [LEFT_MI_14] = CHORD_LAT_M,
    [LEFT_MI_15] = CHORD_LAT_N,
    [LEFT_MI_16] = CHORD_LAT_O,
    [LEFT_MI_17] = CHORD_LAT_P,
    [LEFT_MI_18] = CHORD_LAT_Q,
    [LEFT_MI_19] = CHORD_LAT_R,
    [LEFT_MI_20] = CHORD_LAT_S,
    [LEFT_MI_21] = CHORD_LAT_T,
    [LEFT_MI_22] = CHORD_LAT_U,
    [LEFT_MI_23] = CHORD_LAT_V,
    [LEFT_MI_24] = CHORD_LAT_W,
    [LEFT_MI_25] = CHORD_LAT_X,
    [LEFT_MI_26] = CHORD_LAT_Y,
    [LEFT_MI_27] = CHORD_LAT_Z,
    [LEFT_MI_28] = CHORD_LAT_AN,
    [LEFT_MI_29] = CHORD_LAT_AT,
    [LEFT_MI_30] = CHORD_LAT_EN,
    [LEFT_MI_31] = CHORD_LAT_ER,
    [LEFT_MI_32] = CHORD_LAT_HE,
    [LEFT_MI_33] = CHORD_LAT_IN,
    [LEFT_MI_34] = CHORD_LAT_ND,
    [LEFT_MI_35] = CHORD_LAT_ON,
    [LEFT_MI_36] = CHORD_LAT_OR,
    [LEFT_MI_37] = CHORD_LAT_RE,
    [LEFT_MI_38] = CHORD_LAT_TE,
    [LEFT_MI_39] = CHORD_LAT_TH,
    [LEFT_MI_40] = CHORD_LAT_TI,
    [LEFT_MI_41] = CHORD_LAT_MINUS,
    [LEFT_MI_42] = CHORD_LAT_EXCL,
    [LEFT_MI_43] = CHORD_LAT_DQUOT,
    [LEFT_MI_44] = CHORD_LAT_COMMA,
    [LEFT_MI_45] = CHORD_LAT_DOT,
    [LEFT_MI_46] = CHORD_LAT_QUEST,
    [LEFT_MI_47] = CHORD_LAT_QUOT,
    [LEFT_MI_48] = CHORD_LAT_SPC
};

static const uint16_t left_mi_chords_lat_caps[128] PROGMEM =
{
    [LEFT_MI_1] =  CHORD_NONE,
    [LEFT_MI_2] =  CHORD_LAT_CAPS_A,
    [LEFT_MI_3] =  CHORD_LAT_CAPS_B,
    [LEFT_MI_4] =  CHORD_LAT_CAPS_C,
    [LEFT_MI_5] =  CHORD_LAT_CAPS_D,
    [LEFT_MI_6] =  CHORD_LAT_CAPS_E,
    [LEFT_MI_7] =  CHORD_LAT_CAPS_F,
    [LEFT_MI_8] =  CHORD_LAT_CAPS_G,
    [LEFT_MI_9] =  CHORD_LAT_CAPS_H,
    [LEFT_MI_10] = CHORD_LAT_CAPS_I,
    [LEFT_MI_11] = CHORD_LAT_CAPS_J,
    [LEFT_MI_12] = CHORD_LAT_CAPS_K,
    [LEFT_MI_13] = CHORD_LAT_CAPS_L,
    [LEFT_MI_14] = CHORD_LAT_CAPS_M,
    [LEFT_MI_15] = CHORD_LAT_CAPS_N,
    [LEFT_MI_16] = CHORD_LAT_CAPS_O,
    [LEFT_MI_17] = CHORD_LAT_CAPS_P,
    [LEFT_MI_18] = CHORD_LAT_CAPS_Q,
    [LEFT_MI_19] = CHORD_LAT_CAPS_R,
    [LEFT_MI_20] = CHORD_LAT_CAPS_S,
    [LEFT_MI_21] = CHORD_LAT_CAPS_T,
    [LEFT_MI_22] = CHORD_LAT_CAPS_U,
    [LEFT_MI_23] = CHORD_LAT_CAPS_V,
    [LEFT_MI_24] = CHORD_LAT_CAPS_W,
    [LEFT_MI_25] = CHORD_LAT_CAPS_X,
    [LEFT_MI_26] = CHORD_LAT_CAPS_Y,
    [LEFT_MI_27] = CHORD_LAT_CAPS_Z,
    [LEFT_MI_28] = CHORD_LAT_CAPS_AN,
    [LEFT_MI_29] = CHORD_LAT_CAPS_AT,
    [LEFT_MI_30] = CHORD_LAT_CAPS_EN,
    [LEFT_MI_31] = CHORD_LAT_CAPS_ER,
    [LEFT_MI_32] = CHORD_LAT_CAPS_HE,
    [LEFT_MI_33] = CHORD_LAT_CAPS_IN,
    [LEFT_MI_34] = CHORD_LAT_CAPS_ND,
    [LEFT_MI_35] = CHORD_LAT_CAPS_ON,
    [LEFT_MI_36] = CHORD_LAT_CAPS_OR,
    [LEFT_MI_37] = CHORD_LAT_CAPS_RE,
    [LEFT_MI_38] = CHORD_LAT_CAPS_TE,
    [LEFT_MI_39] = CHORD_LAT_CAPS_TH,
    [LEFT_MI_40] = CHORD_LAT_CAPS_TI,
    [LEFT_MI_41] = CHORD_LAT_CAPS_MINUS,
    [LEFT_MI_42] = CHORD_LAT_CAPS_EXCL,
    [LEFT_MI_43] = CHORD_LAT_CAPS_DQUOT,
    [LEFT_MI_44] = CHORD_LAT_CAPS_COMMA,
    [LEFT_MI_45] = CHORD_LAT_CAPS_DOT,
    [LEFT_MI_46] = CHORD_LAT_CAPS_QUEST,
    [LEFT_MI_47] = CHORD_LAT_CAPS_QUOT,
    [LEFT_MI_48] = CHORD_LAT_CAPS_SPC
};

#define LEFT_THUMB_1  0b00000
#define LEFT_THUMB_2  0b11000
#define LEFT_THUMB_3  0b10000
#define LEFT_THUMB_4  0b11100
#define LEFT_THUMB_5  0b10100
#define LEFT_THUMB_6  0b00110
#define LEFT_THUMB_7  0b00100
#define LEFT_THUMB_8  0b00101
#define LEFT_THUMB_9  0b00001
/*
  13
 024

  --  -x  --  -x  --  x-  --  --  --
 --- --x --x -xx -xx -x- -x- xx- x--
  1   2   3   4   5   6   7   8   9
*/
static const uint16_t left_thumb_chords[32] PROGMEM =
{
    [LEFT_THUMB_1] = CHORD_NONE,
    [LEFT_THUMB_2] = CHORD_THUMB_CAP1,
    [LEFT_THUMB_3] = CHORD_THUMB_CAP2,
    [LEFT_THUMB_4] = CHORD_THUMB_CAP12,
    [LEFT_THUMB_5] = CHORD_THUMB_SYMB,
    [LEFT_THUMB_6] = CHORD_THUMB_SYMB_MODS,
    [LEFT_THUMB_7] = CHORD_THUMB_MODS
};

#define RIGHT_THUMB_1  0b00000
#define RIGHT_THUMB_2  0b00011
#define RIGHT_THUMB_3  0b00001
#define RIGHT_THUMB_4  0b00111
#define RIGHT_THUMB_5  0b00101
#define RIGHT_THUMB_6  0b01100
#define RIGHT_THUMB_7  0b00100
#define RIGHT_THUMB_8  0b10100
#define RIGHT_THUMB_9  0b10000
/*
 13
 024

 --  x-  --  x-  --  -x  --  --  --
 --- x-- x-- xx- xx- -x- -x- -xx --x
 1    2   3   4   5   6   7   8   9
*/
static const uint16_t right_thumb_chords[32] PROGMEM =
{
    [RIGHT_THUMB_1] = CHORD_NONE,
    [RIGHT_THUMB_2] = CHORD_THUMB_CAP1,
    [RIGHT_THUMB_3] = CHORD_THUMB_CAP2,
    [RIGHT_THUMB_4] = CHORD_THUMB_CAP12,
    [RIGHT_THUMB_5] = CHORD_THUMB_SYMB,
    [RIGHT_THUMB_6] = CHORD_THUMB_SYMB_MODS,
    [RIGHT_THUMB_7] = CHORD_THUMB_MODS
};

#define RIGHT_MI_1    0b0000000
#define RIGHT_MI_2    0b0000010
#define RIGHT_MI_3    0b0000011
#define RIGHT_MI_4    0b0000001
#define RIGHT_MI_5    0b0001000
#define RIGHT_MI_6    0b0001100
#define RIGHT_MI_7    0b0000100
#define RIGHT_MI_8    0b0001010
#define RIGHT_MI_9    0b0000101
#define RIGHT_MI_10   0b0001111
#define RIGHT_MI_10_1 0b0001110
#define RIGHT_MI_10_2 0b0001101
#define RIGHT_MI_10_3 0b0001011
#define RIGHT_MI_10_4 0b0000111
#define RIGHT_MI_11   0b1000000
#define RIGHT_MI_12   0b1000010
#define RIGHT_MI_13   0b1000011
#define RIGHT_MI_14   0b1000001
#define RIGHT_MI_15   0b1001000
#define RIGHT_MI_16   0b1001100
#define RIGHT_MI_17   0b1000100
#define RIGHT_MI_18   0b1001010
#define RIGHT_MI_19   0b1000101
#define RIGHT_MI_20   0b1001111
#define RIGHT_MI_20_1 0b1001110
#define RIGHT_MI_20_2 0b1001101
#define RIGHT_MI_20_3 0b1001011
#define RIGHT_MI_20_4 0b1000111
#define RIGHT_MI_21   0b1100000
#define RIGHT_MI_22   0b1100010
#define RIGHT_MI_23   0b1100011
#define RIGHT_MI_24   0b1100001
#define RIGHT_MI_25   0b1101000
#define RIGHT_MI_26   0b1101100
#define RIGHT_MI_27   0b1100100
#define RIGHT_MI_28   0b1101010
#define RIGHT_MI_29   0b1100101
#define RIGHT_MI_30   0b1101111
#define RIGHT_MI_30_1 0b1101110
#define RIGHT_MI_30_2 0b1101101
#define RIGHT_MI_30_3 0b1101011
#define RIGHT_MI_30_4 0b1100111
#define RIGHT_MI_31   0b0100000
#define RIGHT_MI_32   0b0100010
#define RIGHT_MI_33   0b0100011
#define RIGHT_MI_34   0b0100001
#define RIGHT_MI_35   0b0101000
#define RIGHT_MI_36   0b0101100
#define RIGHT_MI_37   0b0100100
#define RIGHT_MI_38   0b0101010
#define RIGHT_MI_39   0b0100101
#define RIGHT_MI_40   0b0101111
#define RIGHT_MI_40_1 0b0101110
#define RIGHT_MI_40_2 0b0101101
#define RIGHT_MI_40_3 0b0101011
#define RIGHT_MI_40_4 0b0100111
#define RIGHT_MI_41   0b0110000
#define RIGHT_MI_42   0b0110010
#define RIGHT_MI_43   0b0110011
#define RIGHT_MI_44   0b0110001
#define RIGHT_MI_45   0b0111000
#define RIGHT_MI_46   0b0111100
#define RIGHT_MI_47   0b0110100
#define RIGHT_MI_48   0b0111010
#define RIGHT_MI_49   0b0110101
#define RIGHT_MI_50   0b0111111
#define RIGHT_MI_50_1 0b0111110
#define RIGHT_MI_50_2 0b0111101
#define RIGHT_MI_50_3 0b0111011
#define RIGHT_MI_50_4 0b0110111
#define RIGHT_MI_51   0b0010000
#define RIGHT_MI_52   0b0010010
#define RIGHT_MI_53   0b0010011
#define RIGHT_MI_54   0b0010001
#define RIGHT_MI_55   0b0011000
#define RIGHT_MI_56   0b0011100
#define RIGHT_MI_57   0b0010100
#define RIGHT_MI_58   0b0011010
#define RIGHT_MI_59   0b0010101
#define RIGHT_MI_60   0b0011111
#define RIGHT_MI_60_1 0b0011110
#define RIGHT_MI_60_2 0b0011101
#define RIGHT_MI_60_3 0b0011011
#define RIGHT_MI_60_4 0b0010111
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

  10     15     25     15     20     20     10     20     20     40
 --x    x-x    x-x    --x    -xx    -xx    --x    xxx    --x    xxx
 ---    ---    x--    x--    ---    -x-    -x-    ---    xx-    xx-
   -      -      -      -      -      -      -      -      -      -
  11     12     13     14     15     16     17     18     19     20

  20     25     35     25     20     30     20     30     30     50
 --x    x-x    x-x    --x    -xx    -xx    --x    xxx    --x    xxx
 --x    --x    x-x    x-x    --x    -xx    -xx    --x    xxx    xxx
   -      -      -      -      -      -      -      -      -      -
  21     22     23     24     25     26     27     28     29     30

  10     15     25     15     10     20     20     20     20     40
 ---    x--    x--    ---    -x-    -x-    ---    xx-    ---    xx-
 --x    --x    x-x    x-x    --x    -xx    -xx    --x    xxx    xxx
   -      -      -      -      -      -      -      -      -      -
  31     32     33     34     35     36     37     38     39     40

  20     25     35     25     20     30     20     35     35     55
 ---    x--    x--    ---    -x-    -x-    ---    xx-    ---    xx-
 --x    --x    x-x    x-x    --x    -xx    -xx    --x    xxx    xxx
   x      x      x      x      x      x      x      x      x      x
  41     42     43     44     45     46     47     48     49     50

  10     15     25     15     15     20     10     25     20     45
 ---    x--    x--    ---    -x-    -x-    ---    xx-    ---    xx-
 ---    ---    x--    x--    ---    -x-    -x-    ---    xx-    xx-
   x      x      x      x      x      x      x      x      x      x
  51     52     53     54     55     56     57     58     59     60
*/
static const uint16_t right_mi_chords_lat[128] PROGMEM =
{
    [RIGHT_MI_1] =  CHORD_NONE,
    [RIGHT_MI_2] =  CHORD_LAT_A,
    [RIGHT_MI_3] =  CHORD_LAT_B,
    [RIGHT_MI_4] =  CHORD_LAT_C,
    [RIGHT_MI_5] =  CHORD_LAT_D,
    [RIGHT_MI_6] =  CHORD_LAT_E,
    [RIGHT_MI_7] =  CHORD_LAT_F,
    [RIGHT_MI_8] =  CHORD_LAT_G,
    [RIGHT_MI_9] =  CHORD_LAT_H,
    [RIGHT_MI_10] = CHORD_LAT_I,
    [RIGHT_MI_11] = CHORD_LAT_J,
    [RIGHT_MI_12] = CHORD_LAT_K,
    [RIGHT_MI_13] = CHORD_LAT_L,
    [RIGHT_MI_14] = CHORD_LAT_M,
    [RIGHT_MI_15] = CHORD_LAT_N,
    [RIGHT_MI_16] = CHORD_LAT_O,
    [RIGHT_MI_17] = CHORD_LAT_P,
    [RIGHT_MI_18] = CHORD_LAT_Q,
    [RIGHT_MI_19] = CHORD_LAT_R,
    [RIGHT_MI_20] = CHORD_LAT_S,
    [RIGHT_MI_21] = CHORD_LAT_T,
    [RIGHT_MI_22] = CHORD_LAT_U,
    [RIGHT_MI_23] = CHORD_LAT_V,
    [RIGHT_MI_24] = CHORD_LAT_W,
    [RIGHT_MI_25] = CHORD_LAT_X,
    [RIGHT_MI_26] = CHORD_LAT_Y,
    [RIGHT_MI_27] = CHORD_LAT_Z,
    [RIGHT_MI_28] = CHORD_LAT_AN,
    [RIGHT_MI_29] = CHORD_LAT_AT,
    [RIGHT_MI_30] = CHORD_LAT_EN,
    [RIGHT_MI_31] = CHORD_LAT_ER,
    [RIGHT_MI_32] = CHORD_LAT_HE,
    [RIGHT_MI_33] = CHORD_LAT_IN,
    [RIGHT_MI_34] = CHORD_LAT_ND,
    [RIGHT_MI_35] = CHORD_LAT_ON,
    [RIGHT_MI_36] = CHORD_LAT_OR,
    [RIGHT_MI_37] = CHORD_LAT_RE,
    [RIGHT_MI_38] = CHORD_LAT_TE,
    [RIGHT_MI_39] = CHORD_LAT_TH,
    [RIGHT_MI_40] = CHORD_LAT_TI,
    [RIGHT_MI_41] = CHORD_LAT_MINUS,
    [RIGHT_MI_42] = CHORD_LAT_EXCL,
    [RIGHT_MI_43] = CHORD_LAT_DQUOT,
    [RIGHT_MI_44] = CHORD_LAT_COMMA,
    [RIGHT_MI_45] = CHORD_LAT_DOT,
    [RIGHT_MI_46] = CHORD_LAT_QUEST,
    [RIGHT_MI_47] = CHORD_LAT_QUOT,
    [RIGHT_MI_48] = CHORD_LAT_SPC
};

static const uint16_t right_mi_chords_lat_caps[128] PROGMEM =
{
    [RIGHT_MI_1] =  CHORD_NONE,
    [RIGHT_MI_2] =  CHORD_LAT_CAPS_A,
    [RIGHT_MI_3] =  CHORD_LAT_CAPS_B,
    [RIGHT_MI_4] =  CHORD_LAT_CAPS_C,
    [RIGHT_MI_5] =  CHORD_LAT_CAPS_D,
    [RIGHT_MI_6] =  CHORD_LAT_CAPS_E,
    [RIGHT_MI_7] =  CHORD_LAT_CAPS_F,
    [RIGHT_MI_8] =  CHORD_LAT_CAPS_G,
    [RIGHT_MI_9] =  CHORD_LAT_CAPS_H,
    [RIGHT_MI_10] = CHORD_LAT_CAPS_I,
    [RIGHT_MI_11] = CHORD_LAT_CAPS_J,
    [RIGHT_MI_12] = CHORD_LAT_CAPS_K,
    [RIGHT_MI_13] = CHORD_LAT_CAPS_L,
    [RIGHT_MI_14] = CHORD_LAT_CAPS_M,
    [RIGHT_MI_15] = CHORD_LAT_CAPS_N,
    [RIGHT_MI_16] = CHORD_LAT_CAPS_O,
    [RIGHT_MI_17] = CHORD_LAT_CAPS_P,
    [RIGHT_MI_18] = CHORD_LAT_CAPS_Q,
    [RIGHT_MI_19] = CHORD_LAT_CAPS_R,
    [RIGHT_MI_20] = CHORD_LAT_CAPS_S,
    [RIGHT_MI_21] = CHORD_LAT_CAPS_T,
    [RIGHT_MI_22] = CHORD_LAT_CAPS_U,
    [RIGHT_MI_23] = CHORD_LAT_CAPS_V,
    [RIGHT_MI_24] = CHORD_LAT_CAPS_W,
    [RIGHT_MI_25] = CHORD_LAT_CAPS_X,
    [RIGHT_MI_26] = CHORD_LAT_CAPS_Y,
    [RIGHT_MI_27] = CHORD_LAT_CAPS_Z,
    [RIGHT_MI_28] = CHORD_LAT_CAPS_AN,
    [RIGHT_MI_29] = CHORD_LAT_CAPS_AT,
    [RIGHT_MI_30] = CHORD_LAT_CAPS_EN,
    [RIGHT_MI_31] = CHORD_LAT_CAPS_ER,
    [RIGHT_MI_32] = CHORD_LAT_CAPS_HE,
    [RIGHT_MI_33] = CHORD_LAT_CAPS_IN,
    [RIGHT_MI_34] = CHORD_LAT_CAPS_ND,
    [RIGHT_MI_35] = CHORD_LAT_CAPS_ON,
    [RIGHT_MI_36] = CHORD_LAT_CAPS_OR,
    [RIGHT_MI_37] = CHORD_LAT_CAPS_RE,
    [RIGHT_MI_38] = CHORD_LAT_CAPS_TE,
    [RIGHT_MI_39] = CHORD_LAT_CAPS_TH,
    [RIGHT_MI_40] = CHORD_LAT_CAPS_TI,
    [RIGHT_MI_41] = CHORD_LAT_CAPS_MINUS,
    [RIGHT_MI_42] = CHORD_LAT_CAPS_EXCL,
    [RIGHT_MI_43] = CHORD_LAT_CAPS_DQUOT,
    [RIGHT_MI_44] = CHORD_LAT_CAPS_COMMA,
    [RIGHT_MI_45] = CHORD_LAT_CAPS_DOT,
    [RIGHT_MI_46] = CHORD_LAT_CAPS_QUEST,
    [RIGHT_MI_47] = CHORD_LAT_CAPS_QUOT,
    [RIGHT_MI_48] = CHORD_LAT_CAPS_SPC
};

#define RIGHT_PR_1    0b0000000
#define RIGHT_PR_2    0b0010000
#define RIGHT_PR_3    0b0011000
#define RIGHT_PR_4    0b0001000
#define RIGHT_PR_5    0b1000000
#define RIGHT_PR_6    0b1100000
#define RIGHT_PR_7    0b0100000
#define RIGHT_PR_8    0b1010000
#define RIGHT_PR_9    0b0101000
#define RIGHT_PR_10   0b1111000
#define RIGHT_PR_10_1 0b1110000
#define RIGHT_PR_10_2 0b1101000
#define RIGHT_PR_10_3 0b1011000
#define RIGHT_PR_10_4 0b0111000
#define RIGHT_PR_11   0b0000100
#define RIGHT_PR_12   0b0010100
#define RIGHT_PR_13   0b0011100
#define RIGHT_PR_14   0b0001100
#define RIGHT_PR_15   0b1000100
#define RIGHT_PR_16   0b1100100
#define RIGHT_PR_17   0b0100100
#define RIGHT_PR_18   0b1010100
#define RIGHT_PR_19   0b0101100
#define RIGHT_PR_20   0b1111100
#define RIGHT_PR_20_1 0b1110100
#define RIGHT_PR_20_2 0b1101100
#define RIGHT_PR_20_3 0b1011100
#define RIGHT_PR_20_4 0b0111100
#define RIGHT_PR_21   0b0000110
#define RIGHT_PR_22   0b0010110
#define RIGHT_PR_23   0b0011110
#define RIGHT_PR_24   0b0001110
#define RIGHT_PR_25   0b1000110
#define RIGHT_PR_26   0b1100110
#define RIGHT_PR_27   0b0100110
#define RIGHT_PR_28   0b1010110
#define RIGHT_PR_29   0b0101110
#define RIGHT_PR_30   0b1111110
#define RIGHT_PR_30_1 0b1110110
#define RIGHT_PR_30_2 0b1101110
#define RIGHT_PR_30_3 0b1011110
#define RIGHT_PR_30_4 0b0111110
#define RIGHT_PR_31   0b0000010
#define RIGHT_PR_32   0b0010010
#define RIGHT_PR_33   0b0011010
#define RIGHT_PR_34   0b0001010
#define RIGHT_PR_35   0b1000010
#define RIGHT_PR_36   0b1100010
#define RIGHT_PR_37   0b0100010
#define RIGHT_PR_38   0b1010010
#define RIGHT_PR_39   0b0101010
#define RIGHT_PR_40   0b1111010
#define RIGHT_PR_40_1 0b1110010
#define RIGHT_PR_40_2 0b1101010
#define RIGHT_PR_40_3 0b1011010
#define RIGHT_PR_40_4 0b0111010
#define RIGHT_PR_41   0b0000011
#define RIGHT_PR_42   0b0010011
#define RIGHT_PR_43   0b0011011
#define RIGHT_PR_44   0b0001011
#define RIGHT_PR_45   0b1000011
#define RIGHT_PR_46   0b1100011
#define RIGHT_PR_47   0b0100011
#define RIGHT_PR_48   0b1010011
#define RIGHT_PR_49   0b0101011
#define RIGHT_PR_50   0b1111011
#define RIGHT_PR_50_1 0b1110011
#define RIGHT_PR_50_2 0b1101011
#define RIGHT_PR_50_3 0b1011011
#define RIGHT_PR_50_4 0b0111011
#define RIGHT_PR_51   0b0000001
#define RIGHT_PR_52   0b0010001
#define RIGHT_PR_53   0b0011001
#define RIGHT_PR_54   0b0001001
#define RIGHT_PR_55   0b1000001
#define RIGHT_PR_56   0b1100001
#define RIGHT_PR_57   0b0100001
#define RIGHT_PR_58   0b1010001
#define RIGHT_PR_59   0b0101001
#define RIGHT_PR_60   0b1111001
#define RIGHT_PR_60_1 0b1110001
#define RIGHT_PR_60_2 0b1101001
#define RIGHT_PR_60_3 0b1011001
#define RIGHT_PR_60_4 0b0111001
/*
 Diff       relative difficulty
 2
 146        Bit numbers
 035
  Id        Chord Id
 Lat Cap    Latin map    Capital latin
 Sym Mod    Symbol Map   Modifier Map
 Cyr Cap    Cyrillic Map Capical cyrillic

 2 4 5 7 11 12 31 34 51 52

 14 15 17 35 37 55 57

 3 6 8 9 13 18 21 22 24 32 33 38 39 41 42 44 53 54 58 59

 16 19 25 27 36 45 47 56

 23 28 43 48 49

 26 29 46

 10 40 60

 20

 50

 30
 
  0      10     20     10     10     20     10     20     20     40
 -      -      -      -      -      -      -      -      -      -
 ---    -x-    -x-    ---    --x    --x    ---    -xx    ---    -xx
 ---    ---    -x-    -x-    ---    --x    --x    ---    -xx    -xx
  1      2      3      4      5      6      7      8      9      10

  10     10     20     15     15     25     15     20     25     45
 x      x      x      x      x      x      x      x      x      x
 ---    -x-    -x-    ---    --x    --x    ---    -xx    ---    -xx
 ---    ---    -x-    -x-    ---    --x    --x    ---    -xx    -xx
  11     12     13     14     15     16     17     18     19     20

  20     20     30     20     25     35     25     30     35     55
 x      x      x      x      x      x      x      x      x      x
 x--    xx-    xx-    x--    x-x    x-x    x--    xxx    x--    xxx
 ---    ---    -x-    -x-    ---    --x    --x    ---    -xx    -xx
  21     22     23     24     25     26     27     28     29     30

  10     20     20     10     15     25     15     20     20     40
 -      -      -      -      -      -      -      -      -      -
 x--    xx-    xx-    x--    x-x    x-x    x--    xxx    x--    xxx
 ---    ---    -x-    -x-    ---    --x    --x    ---    -xx    -xx
  31     32     33     34     35     36     37     38     39     40

  20     20     30     20     25     35     25     30     30     50
 -      -      -      -      -      -      -      -      -      -
 x--    xx-    xx-    x--    x-x    x-x    x--    xxx    x--    xxx
 x--    x--    xx-    xx-    x--    x-x    x-x    x--    xxx    xxx
  41     42     43     44     45     46     47     48     49     50

  10     10     20     20     15     25     15     20     20     40
 -      -      -      -      -      -      -      -      -      -
 ---    -x-    -x-    ---    --x    --x    ---    -xx    ---    -xx
 x--    x--    xx-    xx-    x--    x-x    x-x    x--    xxx    xxx
  51     52     53     54     55     56     57     58     59     60
*/
static const uint16_t right_pr_chords_lat[128] PROGMEM =
{
    [RIGHT_PR_1] =  CHORD_NONE,
    [RIGHT_PR_2] =  CHORD_LAT_A,
    [RIGHT_PR_3] =  CHORD_LAT_B,
    [RIGHT_PR_4] =  CHORD_LAT_C,
    [RIGHT_PR_5] =  CHORD_LAT_D,
    [RIGHT_PR_6] =  CHORD_LAT_E,
    [RIGHT_PR_7] =  CHORD_LAT_F,
    [RIGHT_PR_8] =  CHORD_LAT_G,
    [RIGHT_PR_9] =  CHORD_LAT_H,
    [RIGHT_PR_10] = CHORD_LAT_I,
    [RIGHT_PR_11] = CHORD_LAT_J,
    [RIGHT_PR_12] = CHORD_LAT_K,
    [RIGHT_PR_13] = CHORD_LAT_L,
    [RIGHT_PR_14] = CHORD_LAT_M,
    [RIGHT_PR_15] = CHORD_LAT_N,
    [RIGHT_PR_16] = CHORD_LAT_O,
    [RIGHT_PR_17] = CHORD_LAT_P,
    [RIGHT_PR_18] = CHORD_LAT_Q,
    [RIGHT_PR_19] = CHORD_LAT_R,
    [RIGHT_PR_20] = CHORD_LAT_S,
    [RIGHT_PR_21] = CHORD_LAT_T,
    [RIGHT_PR_22] = CHORD_LAT_U,
    [RIGHT_PR_23] = CHORD_LAT_V,
    [RIGHT_PR_24] = CHORD_LAT_W,
    [RIGHT_PR_25] = CHORD_LAT_X,
    [RIGHT_PR_26] = CHORD_LAT_Y,
    [RIGHT_PR_27] = CHORD_LAT_Z,
    [RIGHT_PR_28] = CHORD_LAT_AN,
    [RIGHT_PR_29] = CHORD_LAT_AT,
    [RIGHT_PR_30] = CHORD_LAT_EN,
    [RIGHT_PR_31] = CHORD_LAT_ER,
    [RIGHT_PR_32] = CHORD_LAT_HE,
    [RIGHT_PR_33] = CHORD_LAT_IN,
    [RIGHT_PR_34] = CHORD_LAT_ND,
    [RIGHT_PR_35] = CHORD_LAT_ON,
    [RIGHT_PR_36] = CHORD_LAT_OR,
    [RIGHT_PR_37] = CHORD_LAT_RE,
    [RIGHT_PR_38] = CHORD_LAT_TE,
    [RIGHT_PR_39] = CHORD_LAT_TH,
    [RIGHT_PR_40] = CHORD_LAT_TI,
    [RIGHT_PR_41] = CHORD_LAT_MINUS,
    [RIGHT_PR_42] = CHORD_LAT_EXCL,
    [RIGHT_PR_43] = CHORD_LAT_DQUOT,
    [RIGHT_PR_44] = CHORD_LAT_COMMA,
    [RIGHT_PR_45] = CHORD_LAT_DOT,
    [RIGHT_PR_46] = CHORD_LAT_QUEST,
    [RIGHT_PR_47] = CHORD_LAT_QUOT,
    [RIGHT_PR_48] = CHORD_LAT_SPC
};

static const uint16_t right_pr_chords_lat_caps[128] PROGMEM =
{
    [RIGHT_PR_1] =  CHORD_NONE,
    [RIGHT_PR_2] =  CHORD_LAT_CAPS_A,
    [RIGHT_PR_3] =  CHORD_LAT_CAPS_B,
    [RIGHT_PR_4] =  CHORD_LAT_CAPS_C,
    [RIGHT_PR_5] =  CHORD_LAT_CAPS_D,
    [RIGHT_PR_6] =  CHORD_LAT_CAPS_E,
    [RIGHT_PR_7] =  CHORD_LAT_CAPS_F,
    [RIGHT_PR_8] =  CHORD_LAT_CAPS_G,
    [RIGHT_PR_9] =  CHORD_LAT_CAPS_H,
    [RIGHT_PR_10] = CHORD_LAT_CAPS_I,
    [RIGHT_PR_11] = CHORD_LAT_CAPS_J,
    [RIGHT_PR_12] = CHORD_LAT_CAPS_K,
    [RIGHT_PR_13] = CHORD_LAT_CAPS_L,
    [RIGHT_PR_14] = CHORD_LAT_CAPS_M,
    [RIGHT_PR_15] = CHORD_LAT_CAPS_N,
    [RIGHT_PR_16] = CHORD_LAT_CAPS_O,
    [RIGHT_PR_17] = CHORD_LAT_CAPS_P,
    [RIGHT_PR_18] = CHORD_LAT_CAPS_Q,
    [RIGHT_PR_19] = CHORD_LAT_CAPS_R,
    [RIGHT_PR_20] = CHORD_LAT_CAPS_S,
    [RIGHT_PR_21] = CHORD_LAT_CAPS_T,
    [RIGHT_PR_22] = CHORD_LAT_CAPS_U,
    [RIGHT_PR_23] = CHORD_LAT_CAPS_V,
    [RIGHT_PR_24] = CHORD_LAT_CAPS_W,
    [RIGHT_PR_25] = CHORD_LAT_CAPS_X,
    [RIGHT_PR_26] = CHORD_LAT_CAPS_Y,
    [RIGHT_PR_27] = CHORD_LAT_CAPS_Z,
    [RIGHT_PR_28] = CHORD_LAT_CAPS_AN,
    [RIGHT_PR_29] = CHORD_LAT_CAPS_AT,
    [RIGHT_PR_30] = CHORD_LAT_CAPS_EN,
    [RIGHT_PR_31] = CHORD_LAT_CAPS_ER,
    [RIGHT_PR_32] = CHORD_LAT_CAPS_HE,
    [RIGHT_PR_33] = CHORD_LAT_CAPS_IN,
    [RIGHT_PR_34] = CHORD_LAT_CAPS_ND,
    [RIGHT_PR_35] = CHORD_LAT_CAPS_ON,
    [RIGHT_PR_36] = CHORD_LAT_CAPS_OR,
    [RIGHT_PR_37] = CHORD_LAT_CAPS_RE,
    [RIGHT_PR_38] = CHORD_LAT_CAPS_TE,
    [RIGHT_PR_39] = CHORD_LAT_CAPS_TH,
    [RIGHT_PR_40] = CHORD_LAT_CAPS_TI,
    [RIGHT_PR_41] = CHORD_LAT_CAPS_MINUS,
    [RIGHT_PR_42] = CHORD_LAT_CAPS_EXCL,
    [RIGHT_PR_43] = CHORD_LAT_CAPS_DQUOT,
    [RIGHT_PR_44] = CHORD_LAT_CAPS_COMMA,
    [RIGHT_PR_45] = CHORD_LAT_CAPS_DOT,
    [RIGHT_PR_46] = CHORD_LAT_CAPS_QUEST,
    [RIGHT_PR_47] = CHORD_LAT_CAPS_QUOT,
    [RIGHT_PR_48] = CHORD_LAT_CAPS_SPC
};

static const uint16_t right_pr_chords_symb[128] PROGMEM =
{
    [RIGHT_PR_1] =  CHORD_NONE,
    [RIGHT_PR_2] =  CHORD_LAT_A,
    [RIGHT_PR_3] =  CHORD_LAT_B,
    [RIGHT_PR_4] =  CHORD_LAT_C,
    [RIGHT_PR_5] =  CHORD_LAT_D,
    [RIGHT_PR_6] =  CHORD_LAT_E,
    [RIGHT_PR_7] =  CHORD_LAT_F,
    [RIGHT_PR_8] =  CHORD_LAT_G,
    [RIGHT_PR_9] =  CHORD_LAT_H,
    [RIGHT_PR_10] = CHORD_LAT_I,
    [RIGHT_PR_11] = CHORD_LAT_J,
    [RIGHT_PR_12] = CHORD_LAT_K,
    [RIGHT_PR_13] = CHORD_LAT_L,
    [RIGHT_PR_14] = CHORD_LAT_M,
    [RIGHT_PR_15] = CHORD_LAT_N,
    [RIGHT_PR_16] = CHORD_LAT_O,
    [RIGHT_PR_17] = CHORD_LAT_P,
    [RIGHT_PR_18] = CHORD_LAT_Q,
    [RIGHT_PR_19] = CHORD_LAT_R,
    [RIGHT_PR_20] = CHORD_LAT_S,
    [RIGHT_PR_21] = CHORD_LAT_T,
    [RIGHT_PR_22] = CHORD_LAT_U,
    [RIGHT_PR_23] = CHORD_LAT_V,
    [RIGHT_PR_24] = CHORD_LAT_W,
    [RIGHT_PR_25] = CHORD_LAT_X,
    [RIGHT_PR_26] = CHORD_LAT_Y,
    [RIGHT_PR_27] = CHORD_LAT_Z,
    [RIGHT_PR_28] = CHORD_LAT_AN,
    [RIGHT_PR_29] = CHORD_LAT_AT,
    [RIGHT_PR_30] = CHORD_LAT_EN,
    [RIGHT_PR_31] = CHORD_LAT_ER,
    [RIGHT_PR_32] = CHORD_LAT_HE,
    [RIGHT_PR_33] = CHORD_LAT_IN,
    [RIGHT_PR_34] = CHORD_LAT_ND,
    [RIGHT_PR_35] = CHORD_LAT_ON,
    [RIGHT_PR_36] = CHORD_LAT_OR,
    [RIGHT_PR_37] = CHORD_LAT_RE,
    [RIGHT_PR_38] = CHORD_LAT_TE,
    [RIGHT_PR_39] = CHORD_LAT_TH,
    [RIGHT_PR_40] = CHORD_LAT_TI,
    [RIGHT_PR_41] = CHORD_LAT_MINUS,
    [RIGHT_PR_42] = CHORD_LAT_EXCL,
    [RIGHT_PR_43] = CHORD_LAT_DQUOT,
    [RIGHT_PR_44] = CHORD_LAT_COMMA,
    [RIGHT_PR_45] = CHORD_LAT_DOT,
    [RIGHT_PR_46] = CHORD_LAT_QUEST,
    [RIGHT_PR_47] = CHORD_LAT_QUOT,
    [RIGHT_PR_48] = CHORD_LAT_SPC
};

static const uint16_t right_pr_chords_mods[128] PROGMEM =
{
    [RIGHT_PR_1] = CHORD_NONE,
    [RIGHT_PR_2] = CHORD_MODS_GUI,
    [RIGHT_PR_4] = CHORD_MODS_CTL,
    [RIGHT_PR_3] = CHORD_MODS_CTL_GUI,
    [RIGHT_PR_31] = CHORD_MODS_SFT,
    [RIGHT_PR_32] = CHORD_MODS_SFT_GUI,
    [RIGHT_PR_34] = CHORD_MODS_SFT_CTL,
    [RIGHT_PR_33] = CHORD_MODS_SFT_CTL_GUI,
    [RIGHT_PR_51] = CHORD_MODS_ALT,
    [RIGHT_PR_52] = CHORD_MODS_ALT_GUI,
    [RIGHT_PR_54] = CHORD_MODS_ALT_CTL,
    [RIGHT_PR_53] = CHORD_MODS_ALT_CTL_GUI,
    [RIGHT_PR_41] = CHORD_MODS_ALT_SFT,
    [RIGHT_PR_42] = CHORD_MODS_ALT_SFT_GUI,
    [RIGHT_PR_44] = CHORD_MODS_ALT_SFT_CTL,
    [RIGHT_PR_43] = CHORD_MODS_ALT_SFT_CTL_GUI
};

static const uint16_t *left_pr_map[] =
{
    [MAP_LAT] =      left_pr_chords_lat,
    [MAP_LAT_CAPS] = left_pr_chords_lat_caps,
    [MAP_SYMB] =     left_pr_chords_symb,
    [MAP_MODS] =     left_pr_chords_mods
};

static const uint16_t *left_mi_map[] =
{
    [MAP_LAT] =      left_mi_chords_lat,
    [MAP_LAT_CAPS] = left_mi_chords_lat_caps,
    [MAP_SYMB] =     left_mi_chords_lat
};

static const uint16_t *right_pr_map[] =
{
    [MAP_LAT] =      right_pr_chords_lat,
    [MAP_LAT_CAPS] = right_pr_chords_lat_caps,
    [MAP_SYMB] =     right_pr_chords_symb,
    [MAP_MODS] =     right_pr_chords_mods
};

static const uint16_t *right_mi_map[] =
{
    [MAP_LAT] =      right_mi_chords_lat,
    [MAP_LAT_CAPS] = right_mi_chords_lat_caps,
    [MAP_SYMB] =     right_mi_chords_lat
};
// Freqs:
// e     t    a    o    i    n    s    r    h    l    d    c    u    m    f    p    g    w    y    b    v    k    x    j    q    z
// 12.49 9.28 8.64 7.64 7.57 7.23 6.51 6.28 5.05 4.07 3.82 3.34 2.73 2.51 2.40 2.14 1.87 1.68 1.66 1.48 1.05 0.54 0.23 0.16 0.12 0.09
// th   he   in   er   an   re   on   at   en   nd   ti   es   or   te   of   ed   is   it   al   ar   st   to   nt   ng   se   ha
// 3.56 3.07 2.43 2.05 1.99 1.85 1.76 1.49 1.45 1.35 1.34 1.34 1.28 1.20 1.17 1.17 1.13 1.12 1.09 1.07 1.05 1.04 1.04 0.95 0.93 0.93
// о     е    а    н    и    т    с    л    в    р    к    д    м    у    п    я    ь    ы    г    б    ч    з    ж    й    ш    х    ю    э    ц    щ    ф    ъ
// 11.34 8.93 8.23 6.71 6.48 6.17 5.22 4.95 4.47 4.17 3.35 2.97 2.93 2.86 2.39 2.17 2.09 1.90 1.81 1.77 1.67 1.65 1.14 1.09 0.89 0.79 0.66 0.33 0.29 0.29 0.10 0.02
// ст   то   но   на  (ен   ни   по   ко   ра) (ов   не   ро) (пр   го   ал   ре   ос) (ли   ка   во   та   ер) (от   ва   ор   ет)
// 1.74 1.64 1.56 1.42 1.27 1.25 1.25 1.23 1.22 1.18 1.15 1.14 1.02 0.98 0.97 0.96 0.93 0.90 0.89 0.88 0.88 0.85 0.84 0.83 0.81 0.81
static const char* chords[] =
{
    "", "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n",
    "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z",
    "an", "at", "en", "er", "he", "in", "nd", "on", "or", "re", "te", "th", "ti",
    "-", "!", "\"", ",", ".", "?", "'", " ",
    "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N",
    "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z",
    "An", "At", "En", "Er", "He", "In", "Nd", "On", "Or", "Re", "Te", "Th", "Ti",
    "1", "2", "3", "4", "5", "6", "7", "8", "9", "0",
    "@", "#", "$", "%", "^", "&", "*", "(", ")", "_", "=", "+",
    "[", "]", "{", "}", ";", ":", "\\", "|", "<", ">", "/", "`", "~",
    SS_TAP(X_F1), SS_TAP(X_F2), SS_TAP(X_F3), SS_TAP(X_F4), SS_TAP(X_F5),
    SS_TAP(X_F6), SS_TAP(X_F7), SS_TAP(X_F8), SS_TAP(X_F9), SS_TAP(X_F10),
    SS_TAP(X_F11), SS_TAP(X_F12),
    SS_TAP(X_HOME), SS_TAP(X_END), SS_TAP(X_UP),
    SS_TAP(X_DOWN), SS_TAP(X_LEFT), SS_TAP(X_RIGHT), SS_TAP(X_BSPACE),
    SS_TAP(X_DELETE), SS_TAP(X_INSERT), SS_TAP(X_PGUP), SS_TAP(X_PGDOWN),
    SS_TAP(X_ESCAPE), SS_LSFT(SS_TAP(X_CAPSLOCK)), SS_TAP(X_TAB),
    "а", "б", "в", "г", "д", "е", "ё", "ж", "з", "и", "й", "к", "л", "м", "н",
    "о", "п", "р", "с", "т", "у", "ф", "х", "ц", "ч", "ш", "щ", "ъ", "ы", "ь",
    "э", "ю", "я", "ст", "то", "но", "на", "ен", "по", "ов",
    // optional
    "ни", "ко", "ра", "не", "ро", "пр"
};

#endif//_CHORDS_H_
