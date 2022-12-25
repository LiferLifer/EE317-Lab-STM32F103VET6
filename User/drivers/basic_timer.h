#ifndef __BASIC_TIMER_H
#define __BASIC_TIMER_H

#ifdef __cplusplus
extern "C" {
#endif

#include "stm32f10x.h"
#include "square.h"
#include "led.h"

#define            BASIC_TIM_Period            (5000-1)
#define            BASIC_TIM_Prescaler         (72-1)
#define			   BASIC_TIM                   TIM6

void BASIC_TIM_Init(void);

#ifdef __cplusplus
}
#endif

#endif
