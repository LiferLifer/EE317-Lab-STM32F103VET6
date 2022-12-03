#include "main.h"

#include "led.h"

void Main() {
    LED_GPIO_Config();
//    LED_OFF();
    while (1) {
        LED_ON();
        for (int i = 0; i < 720000; i++);
        LED_OFF();
        for (int i = 0; i < 720000; i++);
    }
}
