#include "System_Init.h"
//#include "stm32f10x.h"



/***************************************����2��ʼ��������modusͨ�ţ�
�������ƣ�Init_Usart2
�������ܣ�����2��ʼ��
�������룺��
�������أ���
������д��YZ
��д���ڣ�2016��12��07��
�汾��v0.0
****************************************/
void Init_Usart2(void)
{
	//�����ʼ��ʱ�õ��Ľṹ�����
	GPIO_InitTypeDef 			GPIO_InitStructure;	
	USART_InitTypeDef 			USART_InitStructure;
	
	//ʹ��ʱ��
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_USART2 ,ENABLE);		//ʹ�ܴ���ʱ��,����2-����5��λ�ڵ�������APB1, ����1λ�ڸ�������APB2
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);        //ʹ��GPIOAʱ�ӣ�TX��RXλ��PA2��PA3���շ������ź�λ��PA1

	/* USART2 mode config */	
	USART_InitStructure.USART_BaudRate   = 9600 ;                       //���ڲ����ʣ�USART2_BAUDRATE
	USART_InitStructure.USART_WordLength = USART_WordLength_8b;             //֡���ݳ��ȣ�8λ
	USART_InitStructure.USART_StopBits   = USART_StopBits_1;                //ֹͣλλ����1λ
	USART_InitStructure.USART_Parity     = USART_Parity_No ;                //��żУ�� ����У��
	USART_InitStructure.USART_HardwareFlowControl = USART_HardwareFlowControl_None; //Ӳ����
	USART_InitStructure.USART_Mode       = USART_Mode_Rx | USART_Mode_Tx;   //���գ�����ʹ��
	USART_Init(USART2, &USART_InitStructure);                               //����
	
    //USART_ITConfig(USART2, USART_IT_IDLE , ENABLE );                        //�������߿����ж�ʹ��
	//USART_ITConfig(USART2, USART_IT_TC   , DISABLE );                       //��������жϴ�
	//USART_DMACmd(USART2, USART_DMAReq_Tx, ENABLE);                          //USART2 ����DMAʹ��                
	//USART_DMACmd(USART2, USART_DMAReq_Rx, ENABLE);                          //ʹ�� USART2 ���ݽ���DMAʹ��  
	
    USART_Cmd(USART2, ENABLE); 


    /* Configure USART2 Tx (PA.02) as alternate function push-pull */
    GPIO_InitStructure.GPIO_Pin   = GPIO_Pin_2;                           //TXD :PA2
    GPIO_InitStructure.GPIO_Mode  = GPIO_Mode_AF_PP;                      //TXD�������
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_2MHz;                      //I/O�����ٶ�50M/s
    GPIO_Init(GPIOA, &GPIO_InitStructure);                                //����
	
    /* Configure USART2 Rx (PA.03) as input floating */
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_3;	                            //RXD :PA3
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;                 //��������
    GPIO_Init(GPIOA, &GPIO_InitStructure);                                //����

 	GPIO_InitStructure.GPIO_Pin   = GPIO_Pin_1;			                      //ѡ��Ҫ���Ƶ�GPIOB����*/															   	
    GPIO_InitStructure.GPIO_Mode  = GPIO_Mode_Out_PP;                     //��������ģʽΪͨ���������*/		 
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_2MHz;                     //������������Ϊ2MHz */  
    GPIO_Init(GPIOA, &GPIO_InitStructure);  

    GPIO_ResetBits( GPIOA , GPIO_Pin_1 );                               // ���ƶ�Ϊ 0 ��RS485���ڽ���ģʽ
   
}





