#ifndef __KEY_H
#define __KEY_H

#include "stm32f10x.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef TEMPLATE_FOR_F103VET6_KEY_H
#define TEMPLATE_FOR_F103VET6_KEY_H

#define KEY_GPIO_PIN   GPIO_Pin_13
#define KEY_GPIO_PORT  GPIOC
#define KEY_GPIO_CLK  RCC_APB2Periph_GPIOC

void KEY_GPIO_Config(void);
void KEY_Scan(void);

extern u8 flag;

#endif //TEMPLATE_FOR_F103VET6_KEY_H

#ifdef __cplusplus
}
#endif

#endif