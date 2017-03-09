#ifndef KEYBOARDS_ARMED64_H_
#define KEYBOARDS_ARMED64_H_

#include "quantum.h"

extern uint8_t right_leds;

#define LED_LEFT_1_ON()    do { palClearPad(GPIOC, 13) ;} while (0)
#define LED_LEFT_1_OFF()   do { palSetPad(GPIOC, 13); } while (0)

#define LED_LEFT_2_ON()    do { palClearPad(GPIOC, 14) ;} while (0)
#define LED_LEFT_2_OFF()   do { palSetPad(GPIOC, 14); } while (0)

#define LED_LEFT_3_ON()    do { palClearPad(GPIOC, 15) ;} while (0)
#define LED_LEFT_3_OFF()   do { palSetPad(GPIOC, 15); } while (0)

#define LED_RIGHT_1_ON()   do { right_leds |= 1 << 2;} while (0)
#define LED_RIGHT_1_OFF()  do { right_leds &= ~(1 << 2);} while (0)

#define LED_RIGHT_2_ON()   do { right_leds |= 1 << 0;} while (0)
#define LED_RIGHT_2_OFF()  do { right_leds &= ~(1 << 0);} while (0)

#define LED_RIGHT_3_ON()   do { right_leds |= 1 << 1;} while (0)
#define LED_RIGHT_3_OFF()  do { right_leds &= ~(1 << 1);} while (0)

#define KEYMAP(                                                 \
    /* left, spatial positions */                               \
    k00,k01,k02,k03,k04,k05,                                    \
    k06,k07,k08,k09,k10,k11,k12,                                \
    k13,k14,k15,k16,k17,k18,                                    \
    k19,k20,k21,k22,k23,k24,k25,                                \
        k26,k27,k28,k29,                                        \
                            k30,k31,                            \
    /* right, spatial positions */                              \
            k32,k33,k34,k35,k36,k37,                            \
        k38,k39,k40,k41,k42,k43,k44,                            \
  	    k45,k46,k47,k48,k49,k50,                            \
        k51,k52,k53,k54,k55,k56,k57,                            \
	        k58,k59,k60,k61,                                \
    k62,k63                                                     \
    )                                                           \
   /* matrix positions */                                       \
   {                                                            \
       {k00,   k01, k02, k03, k04, k05,   k12,   k38,   k32,   k33, k34, k35, k36, k37  },    \
       {k06,   k07, k08, k09, k10, k11,   k25,   k51,   k39,   k40, k41, k42, k43, k44  },    \
       {k13,   k14, k15, k16, k17, k18,   k31,   k62,   k45,   k46, k47, k48, k49, k50  },    \
       {k19,   k20, k21, k22, k23, k24,   k30,   k63,   k52,   k53, k54, k55, k56, k57  },    \
       {KC_NO, k26, k27, k28, k29, KC_NO, KC_NO, KC_NO, KC_NO, k58, k59, k60, k61, KC_NO},    \
   }
    
#endif /* KEYBOARDS_ARMED64_H_ */
