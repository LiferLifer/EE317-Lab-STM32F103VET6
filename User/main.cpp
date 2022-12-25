#include "main.h"
#include "sys.h"
#include "led.h"
#include "square.h"
#include "basic_timer.h"

void Main() {
    LED_GPIO_Config();
    KEY_GPIO_Config();
    WAVE_GPIO_Config();
    BASIC_TIM_Init();

//    while(1)
//    {
//        KEY_Scan();
//        if(flag == 1)
//        {
//            LED_OFF();
//        }
//        if(flag == 0)
//        {
//            LED_ON();
//        }
//    };

//    while (1) {
//        LED_ON();
//        for (int i = 0; i < 540000; i++);
//        LED_OFF();
//        for (int i = 0; i < 360000; i++);
//    }
}
