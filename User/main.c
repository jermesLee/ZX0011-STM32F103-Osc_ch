#include "stm32f10x.h"
//#include "IG_YZ.h"
#include "System_Init.h"



void Delay_ms(__IO u32 n_ms)
{
	__IO u32 nCount;
	nCount =n_ms*6000-3;
	for(;nCount!=0;nCount--);
}




#define CH7_ON   GPIO_SetBits (GPIOA ,GPIO_Pin_10 );
#define CH7_OFF  GPIO_ResetBits (GPIOA ,GPIO_Pin_10 );
#define CH6_ON   GPIO_SetBits (GPIOA ,GPIO_Pin_11 );
#define CH6_OFF  GPIO_ResetBits (GPIOA ,GPIO_Pin_11 );
#define CH5_ON   GPIO_SetBits (GPIOA ,GPIO_Pin_12 );
#define CH5_OFF  GPIO_ResetBits (GPIOA ,GPIO_Pin_12 );
#define CH4_ON   GPIO_SetBits (GPIOA ,GPIO_Pin_15 );
#define CH4_OFF  GPIO_ResetBits (GPIOA ,GPIO_Pin_15 );

#define CH36_ON   GPIO_SetBits (GPIOB ,GPIO_Pin_3 );
#define CH36_OFF  GPIO_ResetBits (GPIOB ,GPIO_Pin_3 );
#define CH35_ON   GPIO_SetBits (GPIOB ,GPIO_Pin_4 );
#define CH35_OFF  GPIO_ResetBits (GPIOB ,GPIO_Pin_4 );
#define CH34_ON   GPIO_SetBits (GPIOB ,GPIO_Pin_5 );
#define CH34_OFF  GPIO_ResetBits (GPIOB ,GPIO_Pin_5 );
#define CH33_ON   GPIO_SetBits (GPIOB ,GPIO_Pin_6 );
#define CH33_OFF  GPIO_ResetBits (GPIOB ,GPIO_Pin_6 );
#define CH32_ON   GPIO_SetBits (GPIOB ,GPIO_Pin_7 );
#define CH32_OFF  GPIO_ResetBits (GPIOB ,GPIO_Pin_7 );
#define CH31_ON   GPIO_SetBits (GPIOB ,GPIO_Pin_8 );
#define CH31_OFF  GPIO_ResetBits (GPIOB ,GPIO_Pin_8 );
#define CH30_ON   GPIO_SetBits (GPIOB ,GPIO_Pin_9 );
#define CH30_OFF  GPIO_ResetBits (GPIOB ,GPIO_Pin_9 );
#define CH16_ON   GPIO_SetBits (GPIOB ,GPIO_Pin_10 );
#define CH16_OFF  GPIO_ResetBits (GPIOB ,GPIO_Pin_10 );
#define CH15_ON   GPIO_SetBits (GPIOB ,GPIO_Pin_11 );
#define CH15_OFF  GPIO_ResetBits (GPIOB ,GPIO_Pin_11 );

#define CH3_ON   GPIO_SetBits (GPIOC ,GPIO_Pin_10 );
#define CH3_OFF  GPIO_ResetBits (GPIOC ,GPIO_Pin_10 );
#define CH2_ON   GPIO_SetBits (GPIOC ,GPIO_Pin_11 );
#define CH2_OFF  GPIO_ResetBits (GPIOC ,GPIO_Pin_11 );
#define CH1_ON   GPIO_SetBits (GPIOC ,GPIO_Pin_12 );
#define CH1_OFF  GPIO_ResetBits (GPIOC ,GPIO_Pin_12 );
#define CH22_ON   GPIO_SetBits (GPIOC ,GPIO_Pin_13 );
#define CH22_OFF  GPIO_ResetBits (GPIOC ,GPIO_Pin_13 );
#define CH21_ON   GPIO_SetBits (GPIOC ,GPIO_Pin_14 );
#define CH21_OFF  GPIO_ResetBits (GPIOC ,GPIO_Pin_14 );

#define CH40_ON   GPIO_SetBits (GPIOD ,GPIO_Pin_4 );
#define CH40_OFF  GPIO_ResetBits (GPIOD ,GPIO_Pin_4 );
#define CH39_ON   GPIO_SetBits (GPIOD ,GPIO_Pin_5 );
#define CH39_OFF  GPIO_ResetBits (GPIOD ,GPIO_Pin_5 );
#define CH38_ON   GPIO_SetBits (GPIOD ,GPIO_Pin_6 );
#define CH38_OFF  GPIO_ResetBits (GPIOD ,GPIO_Pin_6 );
#define CH37_ON   GPIO_SetBits (GPIOD ,GPIO_Pin_7 );
#define CH37_OFF  GPIO_ResetBits (GPIOD ,GPIO_Pin_7 );
#define CH14_ON   GPIO_SetBits (GPIOD ,GPIO_Pin_8 );
#define CH14_OFF  GPIO_ResetBits (GPIOD ,GPIO_Pin_8 );
#define CH13_ON   GPIO_SetBits (GPIOD ,GPIO_Pin_9 );
#define CH13_OFF  GPIO_ResetBits (GPIOD ,GPIO_Pin_9 );
#define CH12_ON   GPIO_SetBits (GPIOD ,GPIO_Pin_10 );
#define CH12_OFF  GPIO_ResetBits (GPIOD ,GPIO_Pin_10 );
#define CH11_ON   GPIO_SetBits (GPIOD ,GPIO_Pin_11 );
#define CH11_OFF  GPIO_ResetBits (GPIOD ,GPIO_Pin_11 );
#define CH10_ON   GPIO_SetBits (GPIOD ,GPIO_Pin_12 );
#define CH10_OFF  GPIO_ResetBits (GPIOD ,GPIO_Pin_12 );
#define CH9_ON   GPIO_SetBits (GPIOD ,GPIO_Pin_13 );
#define CH9_OFF  GPIO_ResetBits (GPIOD ,GPIO_Pin_13 );
#define CH8_ON   GPIO_SetBits (GPIOD ,GPIO_Pin_14 );
#define CH8_OFF  GPIO_ResetBits (GPIOD ,GPIO_Pin_14 );

#define CH29_ON   GPIO_SetBits (GPIOE ,GPIO_Pin_0 );
#define CH29_OFF  GPIO_ResetBits (GPIOE ,GPIO_Pin_0 );
#define CH28_ON   GPIO_SetBits (GPIOE ,GPIO_Pin_1 );
#define CH28_OFF  GPIO_ResetBits (GPIOE ,GPIO_Pin_1 );
#define CH27_ON   GPIO_SetBits (GPIOE ,GPIO_Pin_2 );
#define CH27_OFF  GPIO_ResetBits (GPIOE ,GPIO_Pin_2 );
#define CH26_ON   GPIO_SetBits (GPIOE ,GPIO_Pin_3 );
#define CH26_OFF  GPIO_ResetBits (GPIOE ,GPIO_Pin_3 );
#define CH25_ON   GPIO_SetBits (GPIOE ,GPIO_Pin_4 );
#define CH25_OFF  GPIO_ResetBits (GPIOE ,GPIO_Pin_4 );
#define CH24_ON   GPIO_SetBits (GPIOE ,GPIO_Pin_5 );
#define CH24_OFF  GPIO_ResetBits (GPIOE ,GPIO_Pin_5 );
#define CH23_ON   GPIO_SetBits (GPIOE ,GPIO_Pin_6 );
#define CH23_OFF  GPIO_ResetBits (GPIOE ,GPIO_Pin_6 );
#define CH41_OFF   GPIO_SetBits (GPIOE ,GPIO_Pin_11 );
#define CH41_ON  GPIO_ResetBits (GPIOE ,GPIO_Pin_11 );
#define CH20_ON   GPIO_SetBits (GPIOE ,GPIO_Pin_12 );
#define CH20_OFF  GPIO_ResetBits (GPIOE ,GPIO_Pin_12 );
#define CH19_ON   GPIO_SetBits (GPIOE ,GPIO_Pin_13 );
#define CH19_OFF  GPIO_ResetBits (GPIOE ,GPIO_Pin_13 );
#define CH18_ON   GPIO_SetBits (GPIOE ,GPIO_Pin_14 );
#define CH18_OFF  GPIO_ResetBits (GPIOE ,GPIO_Pin_14 );

#define CH17_ON   GPIO_SetBits (GPIOE ,GPIO_Pin_15 );
#define CH17_OFF  GPIO_ResetBits (GPIOE ,GPIO_Pin_15 );



int main()
{
 	GPIO_InitTypeDef 			GPIO_InitStructure;	
    
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);        //使能GPIOA时钟，TX，RX位于PA2和PA3，收发控制信号位于PA1
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB,ENABLE);        //使能GPIOA时钟，TX，RX位于PA2和PA3，收发控制信号位于PA1
    RCC_APB2PeriphClockCmd (RCC_APB2Periph_AFIO ,ENABLE );

    AFIO->MAPR=AFIO_MAPR_SWJ_CFG_JTAGDISABLE;
//    &=0xF8FFFFFF;

//    AFIO_MAPR_SWJ_CFG
//    



	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);        //使能GPIOA时钟，TX，RX位于PA2和PA3，收发控制信号位于PA1

    GPIO_InitStructure.GPIO_Pin   = GPIO_Pin_10|GPIO_Pin_11|GPIO_Pin_12|GPIO_Pin_15;                           //TXD :PA2
    GPIO_InitStructure.GPIO_Mode  = GPIO_Mode_Out_PP ;                     //TXD推挽输出
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_2MHz;                      //I/O引脚速度50M/s
    GPIO_Init(GPIOA, &GPIO_InitStructure);                                //配置
    
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB,ENABLE);        //使能GPIOA时钟，TX，RX位于PA2和PA3，收发控制信号位于PA1

    GPIO_InitStructure.GPIO_Pin   = GPIO_Pin_3|GPIO_Pin_4|GPIO_Pin_5
                                    |GPIO_Pin_6|GPIO_Pin_7|GPIO_Pin_8
                                    |GPIO_Pin_9|GPIO_Pin_10|GPIO_Pin_11;                           //TXD :PA2
    GPIO_InitStructure.GPIO_Mode  = GPIO_Mode_Out_PP ;                     //TXD推挽输出
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_2MHz;                      //I/O引脚速度50M/s
    GPIO_Init(GPIOB, &GPIO_InitStructure);                                //配置
    
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC,ENABLE);        //使能GPIOA时钟，TX，RX位于PA2和PA3，收发控制信号位于PA1

    GPIO_InitStructure.GPIO_Pin   = GPIO_Pin_10|GPIO_Pin_11|GPIO_Pin_12
                                    |GPIO_Pin_13|GPIO_Pin_14;                           //TXD :PA2
    GPIO_InitStructure.GPIO_Mode  = GPIO_Mode_Out_PP ;                     //TXD推挽输出
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_2MHz;                      //I/O引脚速度50M/s
    GPIO_Init(GPIOC, &GPIO_InitStructure);                                //配置
    
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOD,ENABLE);        //使能GPIOA时钟，TX，RX位于PA2和PA3，收发控制信号位于PA1

    GPIO_InitStructure.GPIO_Pin   =  GPIO_Pin_4|GPIO_Pin_5
                                    |GPIO_Pin_6|GPIO_Pin_7|GPIO_Pin_8
                                    |GPIO_Pin_9|GPIO_Pin_10|GPIO_Pin_11
                                    |GPIO_Pin_12|GPIO_Pin_13|GPIO_Pin_14;                           //TXD :PA2
    GPIO_InitStructure.GPIO_Mode  = GPIO_Mode_Out_PP ;                     //TXD推挽输出
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_2MHz;                      //I/O引脚速度50M/s
    GPIO_Init(GPIOD, &GPIO_InitStructure);                                //配置
    
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOE,ENABLE);        //使能GPIOA时钟，TX，RX位于PA2和PA3，收发控制信号位于PA1

    GPIO_InitStructure.GPIO_Pin   = GPIO_Pin_0|GPIO_Pin_1|GPIO_Pin_2
                                    |GPIO_Pin_3|GPIO_Pin_4|GPIO_Pin_5|GPIO_Pin_6
                                    |GPIO_Pin_11|GPIO_Pin_12|GPIO_Pin_13
                                    |GPIO_Pin_14|GPIO_Pin_15;                           //TXD :PA2
    GPIO_InitStructure.GPIO_Mode  = GPIO_Mode_Out_PP ;                     //TXD推挽输出
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_2MHz;                      //I/O引脚速度50M/s
    GPIO_Init(GPIOE, &GPIO_InitStructure);                                //配置
    
    
    
    
    
    
    Init_Usart2();

    GPIO_SetBits( GPIOA , GPIO_Pin_1 );   // 控制端为 0 ，RS485处于接收模式
        CH1_OFF ;
        CH2_OFF ;
        CH3_OFF ;
        CH4_OFF ;
        CH5_OFF ;
        CH6_OFF ;
        CH7_OFF ;
        CH8_OFF ;
        CH9_OFF ;
        CH10_OFF ;
        CH11_OFF ;
        CH12_OFF ;
        CH13_OFF ;
        CH14_OFF ;
        CH15_OFF ;
        CH16_OFF ;
        CH17_OFF ;
        CH18_OFF ;
        CH19_OFF ;
        CH20_OFF ;
        CH21_OFF ;
        CH22_OFF ;
        CH23_OFF ;
        CH24_OFF ;
        CH25_OFF ;
        CH26_OFF ;
        CH27_OFF ;
        CH28_OFF ;
        CH29_OFF ;
        CH30_OFF ;
        CH31_OFF ;
        CH32_OFF ;
        CH33_OFF ;
        CH34_OFF ;
        CH35_OFF ;
        CH36_OFF ;
        CH37_OFF ;
        CH38_OFF ;
        CH39_OFF ;
        CH40_OFF ;
        Delay_ms (500);


while(1)
    {

        USART_SendData (USART2 ,0x41);
        CH41_ON ;
        Delay_ms (500);
     

        USART_SendData (USART2 ,0x01);
        CH1_ON ;
        Delay_ms (500);
        CH1_OFF ;
        Delay_ms (500);
//        

         USART_SendData (USART2 ,0x2);
        CH2_ON ;
        Delay_ms (500);
        CH2_OFF ;
        Delay_ms (500);
        
         USART_SendData (USART2 ,0x3);
        CH3_ON ;
        Delay_ms (500);
        CH3_OFF ;
        Delay_ms (500);
        
         USART_SendData (USART2 ,0x4);
        CH4_ON ;
        Delay_ms (500);
        CH4_OFF ;
        Delay_ms (500);
        
         USART_SendData (USART2 ,0x5);
        CH5_ON ;
        Delay_ms (500);
        CH5_OFF ;
        Delay_ms (500);
        
         USART_SendData (USART2 ,0x6);
        CH6_ON ;
        Delay_ms (500);
        CH6_OFF ;
        Delay_ms (500);
        
         USART_SendData (USART2 ,0x7);
        CH7_ON ;
        Delay_ms (500);
        CH7_OFF ;
        Delay_ms (500);
        
         USART_SendData (USART2 ,0x8);
        CH8_ON ;
        Delay_ms (500);
        CH8_OFF ;
        Delay_ms (500);
        
         USART_SendData (USART2 ,0x9);
        CH9_ON ;
        Delay_ms (500);
        CH9_OFF ;
        Delay_ms (500);
        
         USART_SendData (USART2 ,0x10);
        CH10_ON ;
        Delay_ms (500);
        CH10_OFF ;
        Delay_ms (500);
        
         USART_SendData (USART2 ,0x11);
        CH11_ON ;
        Delay_ms (500);
        CH11_OFF ;
        Delay_ms (500);
        
         USART_SendData (USART2 ,0x12);
        CH12_ON ;
        Delay_ms (500);
        CH12_OFF ;
        Delay_ms (500);
        
         USART_SendData (USART2 ,0x13);
        CH13_ON ;
        Delay_ms (500);
        CH13_OFF ;
        Delay_ms (500);
        
         USART_SendData (USART2 ,0x14);
        CH14_ON ;
        Delay_ms (500);
        CH14_OFF ;
        Delay_ms (500);
        
         USART_SendData (USART2 ,0x15);
        CH15_ON ;
        Delay_ms (500);
        CH15_OFF ;
        Delay_ms (500);
        
         USART_SendData (USART2 ,0x16);
        CH16_ON ;
        Delay_ms (500);
        CH16_OFF ;
        Delay_ms (500);
        
         USART_SendData (USART2 ,0x17);
        CH17_ON ;
        Delay_ms (500);
        CH17_OFF ;
        Delay_ms (500);
        
         USART_SendData (USART2 ,0x18);
        CH18_ON ;
        Delay_ms (500);
        CH18_OFF ;
        Delay_ms (500);
        
         USART_SendData (USART2 ,0x19);
        CH19_ON ;
        Delay_ms (500);
        CH19_OFF ;
        Delay_ms (500);
        
         USART_SendData (USART2 ,0x20);
        CH20_ON ;
        Delay_ms (500);
        CH20_OFF ;
        Delay_ms (500);
        
         USART_SendData (USART2 ,0x21);
        CH21_ON ;
        Delay_ms (500);
        CH21_OFF ;
        Delay_ms (500);
        
         USART_SendData (USART2 ,0x22);
        CH22_ON ;
        Delay_ms (500);
        CH22_OFF ;
        Delay_ms (500);
        
         USART_SendData (USART2 ,0x23);
        CH23_ON ;
        Delay_ms (500);
        CH23_OFF ;
        Delay_ms (500);
        
         USART_SendData (USART2 ,0x24);
        CH24_ON ;
        Delay_ms (500);
        CH24_OFF ;
        Delay_ms (500);
        
         USART_SendData (USART2 ,0x25);
        CH25_ON ;
        Delay_ms (500);
        CH25_OFF ;
        Delay_ms (500);
        
         USART_SendData (USART2 ,0x26);
        CH26_ON ;
        Delay_ms (500);
        CH26_OFF ;
        Delay_ms (500);
        
         USART_SendData (USART2 ,0x27);
        CH27_ON ;
        Delay_ms (500);
        CH27_OFF ;
        Delay_ms (500);
        
         USART_SendData (USART2 ,0x28);
        CH28_ON ;
        Delay_ms (500);
        CH28_OFF ;
        Delay_ms (500);
        
         USART_SendData (USART2 ,0x29);
        CH29_ON ;
        Delay_ms (500);
        CH29_OFF ;
        Delay_ms (500);
        
         USART_SendData (USART2 ,0x30);
        CH30_ON ;
        Delay_ms (500);
        CH30_OFF ;
        Delay_ms (500);
        
         USART_SendData (USART2 ,0x31);
        CH31_ON ;
        Delay_ms (500);
        CH31_OFF ;
        Delay_ms (500);
        
         USART_SendData (USART2 ,0x32);
        CH32_ON ;
        Delay_ms (500);
        CH32_OFF ;
        Delay_ms (500);
        
         USART_SendData (USART2 ,0x33);
        CH33_ON ;
        Delay_ms (500);
        CH33_OFF ;
        Delay_ms (500);
        
         USART_SendData (USART2 ,0x34);
        CH34_ON ;
        Delay_ms (500);
        CH34_OFF ;
        Delay_ms (500);
        
         USART_SendData (USART2 ,0x35);
        CH35_ON ;
        Delay_ms (500);
        CH35_OFF ;
        Delay_ms (500);
        
         USART_SendData (USART2 ,0x36);
        CH36_ON ;
        Delay_ms (500);
        CH36_OFF ;
        Delay_ms (500);
        
         USART_SendData (USART2 ,0x37);
        CH37_ON ;
        Delay_ms (500);
        CH37_OFF ;
        Delay_ms (500);
        
         USART_SendData (USART2 ,0x38);
        CH38_ON ;
        Delay_ms (500);
        CH38_OFF ;
        Delay_ms (500);
        
         USART_SendData (USART2 ,0x39);
        CH39_ON ;
        Delay_ms (500);
        CH39_OFF ;
        Delay_ms (500);
        
         USART_SendData (USART2 ,0x40);
        CH40_ON ;
        Delay_ms (500);
        CH40_OFF ;
        Delay_ms (500);
        
        
        
        USART_SendData (USART2 ,0x41);

        CH41_OFF ;
        Delay_ms (500);
//        
   
        
    }
    
    return 0;
}




