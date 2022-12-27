#include "main.h"
#include "sys.h"
#include "led.h"
#include "square.h"
#include "basic_timer.h"
#include "timer_2.h"
#include "usart.h"

float Frequency_value;

void Main() {

    LED_GPIO_Config();
    KEY_GPIO_Config();
    WAVE_GPIO_Config();
    BASIC_TIM_Init();
    LED_OFF();

    // 设置中断组为0
    NVIC_PriorityGroupConfig(NVIC_PriorityGroup_0);
    GENERAL_TIM_Init();
    USART_Config();
//    Usart_SendString( DEBUG_USARTx,"\nHello!\n");

    while (1) {
        char msg[50] = {0};
        sprintf(msg, "Current Frequency: %.2lf Hz.\n", Frequency_value);
        Usart_SendString(DEBUG_USARTx, msg);

        KEY_Scan();
        if (flag == 1) {
            LED_OFF();
        }
        if (flag == 0) {
            LED_ON();
        }

    }


//    while (1) {
//        LED_ON();
//        for (int i = 0; i < 540000; i++);
//        LED_OFF();
//        for (int i = 0; i < 360000; i++);
//    }

}
