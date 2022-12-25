#include "key.h"
#include "sys.h"

u8 flag = 0;

void KEY_GPIO_Config(void)
{
    GPIO_InitTypeDef GPIO_InitStruct;

    RCC_APB2PeriphClockCmd(KEY_GPIO_CLK, ENABLE);
    GPIO_InitStruct.GPIO_Pin = KEY_GPIO_PIN;
    GPIO_InitStruct.GPIO_Mode = GPIO_Mode_IPU;
    //GPIO_InitStruct.GPIO_Speed = GPIO_Speed_50MHz;

    GPIO_Init(KEY_GPIO_PORT, &GPIO_InitStruct);

}

void KEY_Scan()
{
    if(PCin(13) == 0)
    {
        for (int i = 0; i < 720000; i++);
        if(PCin(13) == 0)
        {
            if(flag == 0)
            {
                flag = 1;
            }else if(flag == 1)
            {
                flag = 0;
            }

        }
        while(!PCin(13));
    }

}