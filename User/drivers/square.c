#include "square.h"

void WAVE_GPIO_Config(void) {
    GPIO_InitTypeDef GPIO_InitStruct;
    RCC_APB2PeriphClockCmd(WAVE_GPIO_CLK, ENABLE);
    GPIO_InitStruct.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIO_InitStruct.GPIO_Pin = WAVE_GPIO_Pin;
    GPIO_InitStruct.GPIO_Speed = GPIO_Speed_10MHz;
    GPIO_Init(WAVE_GPIO_PORT, &GPIO_InitStruct);
}

void WAVE_0(void) {
    GPIO_ResetBits(WAVE_GPIO_PORT, WAVE_GPIO_Pin);
}

void WAVE_1(void) {
    GPIO_SetBits(WAVE_GPIO_PORT, WAVE_GPIO_Pin);
}
