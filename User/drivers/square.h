#ifndef __SQUARE_H
#define __SQUARE_H

#ifdef __cplusplus
extern "C" {
#endif

#include "stm32f10x.h"

#define WAVE_GPIO_CLK RCC_APB2Periph_GPIOA
#define WAVE_GPIO_Pin GPIO_Pin_4
#define WAVE_GPIO_PORT GPIOA

void WAVE_GPIO_Config(void);
void WAVE_0(void);
void WAVE_1(void);

#ifdef __cplusplus
}
#endif

#endif