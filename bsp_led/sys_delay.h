/*
 * sys_delay.h
 *
 *  Created on: 2023��10��10��
 *      Author: iccad
 */

#ifndef BSP_LED_SYS_DELAY_H_
#define BSP_LED_SYS_DELAY_H_

#include "DSP28x_Project.h"
#include "sys_type.h"

#define CPU_RATE 6.667L // for a 150MHz CPU clock speed


void delay_us(u16 t);
void delay_ms(u16 t);

#endif /* BSP_LED_SYS_DELAY_H_ */
