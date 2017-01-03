#ifndef __COMMON_H
#define __COMMON_H

/* includes ---------------------------------------------------------------- */
#include "stm32f0xx.h"
#include "core_cm0.h"
#include "core_cmFunc.h"
#include "core_cmInstr.h"

/* define ------------------------------------------------------------------ */

/* enum -------------------------------------------------------------------- */
typedef enum {
	PA_0 = GPIOA_BASE,
	PA_1,
	PA_2,
	PA_3,
	PA_4,
	PA_5,
	PA_6,
	PA_7,
	PA_8,
	PA_9,
	PA_10,
	PA_11,
	PA_12,
	PA_13,
	PA_14,
	PA_15,

	PB_0 = GPIOB_BASE,
	PB_1,
	PB_2,
	PB_3,
	PB_4,
	PB_5,
	PB_6,
	PB_7,
	PB_8,
	PB_9,
	PB_10,
	PB_11,
	PB_12,
	PB_13,
	PB_14,
	PB_15,

	PC_0 = GPIOC_BASE,
	PC_1,
	PC_2,
	PC_3,
	PC_4,
	PC_5,
	PC_6,
	PC_7,
	PC_8,
	PC_9,
	PC_10,
	PC_11,
	PC_12,
	PC_13,
	PC_14,
	PC_15,

	PD_2 = (GPIOD_BASE + 0x02),

	PF_0 = GPIOF_BASE,
	PF_1,
	PF_4 = (GPIOF_BASE + 0x04),
	PF_5,
	PF_6,
	PF_7,

	// Not connected
	NC = 0xFFFFFFFF
} PinName;

typedef enum {
	PIN_INPUT	 = 0x00,
	PIN_OUTPUT = 0x01,
	PIN_AF		 = 0x02,
	PIN_AN		 = 0x03
} PinMode;

typedef enum {
	PushPull  = 0x00,
	OpenDrain = 0x01
} PinType;

typedef enum {
	PullNone  = 0x00,
	PullUp    = 0x01,
	PullDown  = 0x02,
	PullDefault = PullNone
} PinPull;

typedef enum {
	SpeedLow 		= 0x00,
	SpeedMedium = 0x01,
	SpeedHigh 	= 0x03
} PinSpeed;

#endif
