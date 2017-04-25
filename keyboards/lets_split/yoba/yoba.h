#ifndef REV2_H
#define REV2_H

#include "../lets_split.h"

//void promicro_bootloader_jmp(bool program);
#include "quantum.h"

//void promicro_bootloader_jmp(bool program);

#define KEYMAP( \
	k00, k01, k02, k03, k04, k05, k45, k44, k43, k42, k41, k40, \
	k10, k11, k12, k13, k14, k15, k55, k54, k53, k52, k51, k50, \
	k20, k21, k22, k23, k24, k25, k65, k64, k63, k62, k61, k60, \
	k30, k31, k32, k33, k34, k35, k75, k74, k73, k72, k71, k70 \
	) \
	{ \
        {k00, k10, k20, k30}, \
        {k01, k11, k21, k31}, \
        {k02, k12, k22, k32}, \
        {k03, k13, k23, k33}, \
        {k04, k14, k24, k34}, \
        {k05, k15, k25, k35}, \
        {k45, k55, k65, k75}, \
        {k44, k54, k64, k74}, \
        {k43, k53, k63, k73}, \
        {k42, k52, k62, k72}, \
        {k41, k51, k61, k71}, \
        {k40, k50, k60, k70} \
	}

#endif
