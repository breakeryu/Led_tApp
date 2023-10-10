/*
 * bsp_led.c
 *
 *  Created on: 2023Äê10ÔÂ10ÈÕ
 *      Author: iccad
 */

#include "bsp_led.h"


void bsp_ledInit(void)
{
    //set gpio mode
    GPIO_setPinMuxConfig();

    EALLOW;

    GpioCtrlRegs.GPBPUD.bit.GPIO50 = 0; // Enable pullup on GPIO50
    GpioDataRegs.GPBDAT.bit.GPIO50 = 1; // Load output latch
    GpioCtrlRegs.GPBDIR.bit.GPIO50 = 1; // GPIO50 = output

    GpioCtrlRegs.GPBPUD.bit.GPIO51 = 0; // Enable pullup on GPIO51
    GpioDataRegs.GPBDAT.bit.GPIO51 = 1; // Load output latch
    GpioCtrlRegs.GPBDIR.bit.GPIO51 = 1; // GPIO51 = output

    EDIS;

}


void bsp_ledSetStatus(u16 led, u16 st)
{
    switch(led)
    {

    case LED1:
        GpioDataRegs.GPBDAT.bit.GPIO50 = st; // Load output latch
        break;

    case LED2:
        GpioDataRegs.GPBDAT.bit.GPIO51 = st; // Load output latch
        break;

    default:
        break;
    }
}


void bsp_ledApp(void)
{
    bsp_ledSetStatus(LED1,LED_ON);
    delay_ms(500);
    bsp_ledSetStatus(LED1,LED_OFF);
    delay_ms(500);

    bsp_ledSetStatus(LED2,LED_ON);
    delay_ms(500);
    bsp_ledSetStatus(LED2,LED_OFF);
    delay_ms(500);

}



