/*
 * sys_delay.c
 *
 *  Created on: 2023Äê10ÔÂ10ÈÕ
 *      Author: iccad
 */

#include "sys_delay.h"


void delay_us(u16 t)
{
    DELAY_US(t);
}

void delay_ms(u16 t)
{
    u16 i;
    for(i = 0; i < t; i++)
    {
        delay_us(1000);
    }

}
