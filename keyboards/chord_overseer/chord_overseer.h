#ifndef KEYBOARDS_CHORD_OVERSEER_H_
#define KEYBOARDS_CHORD_OVERSEER_H_

#include "quantum.h"

#define LED_GREEN_ON()    do { palSetPad(GPIOB, 10) ;} while (0)
#define LED_GREEN_OFF()   do { palClearPad(GPIOB, 10); } while (0)
#define LED_GREEN_TGL()   do { palTogglePad(GPIOB, 10); } while (0)


#define LED_RED_ON()    do { palSetPad(GPIOB, 11) ;} while (0)
#define LED_RED_OFF()   do { palClearPad(GPIOB, 11); } while (0)
#define LED_RED_TGL()   do { palTogglePad(GPIOB, 11); } while (0)

#define KEYMAP(                                                 \
                                                                \
    /* spatial positions */                                     \
        k00,k01,k02,k03,    k04,k05,k06,k07,                    \
    k08,k09,k10,k11,k12,k13,k14,k15,k16,k17,k18,                \
    k19,k20,k21,k22,k23,k24,k25,k26,k27,k28,k29,                \
            k30,k31,k32,k33,k34,k35                             \
    )                                                           \
   /* matrix positions */                                       \
   {                                                            \
       {KC_NO,   k00, k01, k02, k03, KC_NO, k04, k05, k06, k07, KC_NO},    \
       {  k08,   k09, k10, k11, k12, k13,   k14, k15, k16, k17, k18},      \
       {  k19,   k20, k21, k22, k23, k24,   k25, k26, k27, k28, k29},      \
       {KC_NO, KC_NO, k30, k31, k32, k33,   k34, k35, KC_NO, KC_NO, KC_NO} \
   }
    
#endif /* KEYBOARDS_CHORD_OVERSEER_H_ */
