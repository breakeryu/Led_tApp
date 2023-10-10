/*
 * bsp_led.h
 *
 *  Created on: 2023Äê10ÔÂ10ÈÕ
 *      Author: iccad
 */

#ifndef BSP_LED_BSP_LED_H_
#define BSP_LED_BSP_LED_H_


#include "DSP28x_Project.h"
#include "f2833x_pinmux.h"
#include "sys_type.h"
#include "sys_delay.h"


#define LED1 0
#define LED2 1

#define LED_ON  0
#define LED_OFF 1

void bsp_ledInit(void);
void bsp_ledSetStatus(u16 led, u16 st);
void bsp_ledApp(void);
#endif /* BSP_LED_BSP_LED_H_ */
