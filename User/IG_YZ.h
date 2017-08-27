//数据类型、外部全局变量、全局宏
#ifndef _IG_YZ_H_
#define _IG_YZ_H_

#include "stm32f10x.h"

#define USART2_TBUFF_SIZE 10
#define USART2_RBUFF_SIZE 10

extern __IO uint8_t USART2_TBuff[USART2_TBUFF_SIZE];
extern __IO uint8_t USART2_RBuff[USART2_RBUFF_SIZE];

//#define PORT_MODBUS_TX GPIOA

#endif