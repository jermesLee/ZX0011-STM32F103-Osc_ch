#include "System_Init.h"
//#include "stm32f10x.h"



/***************************************串口2初始化（用于modus通信）
函数名称：Init_Usart2
函数功能：串口2初始化
函数输入：无
函数返回：无
函数编写：YZ
编写日期：2016年12月07日
版本：v0.0
****************************************/
void Init_Usart2(void)
{
	//定义初始化时用到的结构体变量
	GPIO_InitTypeDef 			GPIO_InitStructure;	
	USART_InitTypeDef 			USART_InitStructure;
	
	//使能时钟
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_USART2 ,ENABLE);		//使能串口时钟,串口2-串口5均位于低速总线APB1, 串口1位于高速总线APB2
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);        //使能GPIOA时钟，TX，RX位于PA2和PA3，收发控制信号位于PA1

	/* USART2 mode config */	
	USART_InitStructure.USART_BaudRate   = 9600 ;                       //串口波特率：USART2_BAUDRATE
	USART_InitStructure.USART_WordLength = USART_WordLength_8b;             //帧数据长度：8位
	USART_InitStructure.USART_StopBits   = USART_StopBits_1;                //停止位位数：1位
	USART_InitStructure.USART_Parity     = USART_Parity_No ;                //奇偶校验 ：无校验
	USART_InitStructure.USART_HardwareFlowControl = USART_HardwareFlowControl_None; //硬件流
	USART_InitStructure.USART_Mode       = USART_Mode_Rx | USART_Mode_Tx;   //接收，发送使能
	USART_Init(USART2, &USART_InitStructure);                               //配置
	
    //USART_ITConfig(USART2, USART_IT_IDLE , ENABLE );                        //接收总线空闲中断使能
	//USART_ITConfig(USART2, USART_IT_TC   , DISABLE );                       //发送完成中断打开
	//USART_DMACmd(USART2, USART_DMAReq_Tx, ENABLE);                          //USART2 发送DMA使能                
	//USART_DMACmd(USART2, USART_DMAReq_Rx, ENABLE);                          //使能 USART2 数据接收DMA使能  
	
    USART_Cmd(USART2, ENABLE); 


    /* Configure USART2 Tx (PA.02) as alternate function push-pull */
    GPIO_InitStructure.GPIO_Pin   = GPIO_Pin_2;                           //TXD :PA2
    GPIO_InitStructure.GPIO_Mode  = GPIO_Mode_AF_PP;                      //TXD推挽输出
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_2MHz;                      //I/O引脚速度50M/s
    GPIO_Init(GPIOA, &GPIO_InitStructure);                                //配置
	
    /* Configure USART2 Rx (PA.03) as input floating */
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_3;	                            //RXD :PA3
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;                 //悬空输入
    GPIO_Init(GPIOA, &GPIO_InitStructure);                                //配置

 	GPIO_InitStructure.GPIO_Pin   = GPIO_Pin_1;			                      //选择要控制的GPIOB引脚*/															   	
    GPIO_InitStructure.GPIO_Mode  = GPIO_Mode_Out_PP;                     //设置引脚模式为通用推挽输出*/		 
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_2MHz;                     //设置引脚速率为2MHz */  
    GPIO_Init(GPIOA, &GPIO_InitStructure);  

    GPIO_ResetBits( GPIOA , GPIO_Pin_1 );                               // 控制端为 0 ，RS485处于接收模式
   
}





