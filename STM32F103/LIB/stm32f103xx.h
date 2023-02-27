/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *               File:  stm32f10xx.h
 *             Module:  stm32f10xx
 *             Author:  Shaaban Abdullah
 *         Created on:  Jan 27, 2023
 *    TOOLCHAIN NAME :	Renesas CCRL
 * TOOLCHAIN VERSION :	v1.11.00
 *
 *  Description:  <Write File DESCRIPTION here>
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * FILE GUARDE
 *********************************************************************************************************************/
#ifndef  STM32F103XX_H_
#define  STM32F103XX_H_

/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/****************************************************************************
 *_ RCC Register.
 *****************************************************************************/
#define RCC_uint32_t_BASE_ADDRESS                   (0x40021000)

typedef struct
{
	uint32_t  HSION    : 1 ; //_Internal high-speed clock enable.
	uint32_t  HSIRDY   : 1 ; //_Internal high-speed clock ready flag
	uint32_t           : 1 ; //_Reserved,
	uint32_t  HSITRIM  : 5 ; //_Internal high-speed clock trimming
	uint32_t  HSICAL   : 8 ; //_Internal high-speed clock calibration
	uint32_t  HSEON    : 1 ; //_HSE clock enable
	uint32_t  HSERDY   : 1 ; //_External high-speed clock ready flag
	uint32_t  HSEBYP   : 1 ; //_External high-speed clock bypass
	uint32_t  CSSON    : 1 ; //_Clock security system enable
	uint32_t           : 4 ; //_Reserved,
	uint32_t  PLLON    : 1 ; //_PLL enable
	uint32_t  PLLRDY   : 1 ; //_PLL clock ready flag
	uint32_t           : 6 ; //__Reserved
}CR_Reg_t;

typedef struct
{
	uint32_t SW       : 2 ;  //_System clock switch.
	uint32_t SWS      : 2 ;  //_System clock switch status.
	uint32_t HPRE     : 4 ;  //_AHB prescaler.
	uint32_t PPRE1    : 3 ;  //_APB low-speed prescaler (APB1).
	uint32_t PPRE2    : 3 ;  //_APB high-speed prescaler (APB2).
	uint32_t ADCPRE   : 2 ;  //_ADC prescaler.
	uint32_t PLLSRC   : 1 ;	 //_PLL entry clock source.
	uint32_t PLLXTPRE : 1 ;  //_HSE divider for PLL entry.
	uint32_t PLLMUL   : 4 ;  //_PLL multiplication factoR.
	uint32_t USBPRE   : 1 ;	 //_USB prescaler.
	uint32_t          : 1 ;	 //_Reserved.
	uint32_t MCO      : 3 ;  //_Microcontroller clock output.
	uint32_t          : 5 ;  //_Reserved.

}CFGR_Reg_t;



typedef struct
{
	volatile CR_Reg_t      CR          ;
	volatile CFGR_Reg_t    CFGR        ;
	volatile uint32_t    CIR         ;
	volatile uint32_t    APB2RSTR    ;
	volatile uint32_t    APB1RSTR    ;
	volatile uint32_t    AHBENR      ;
	volatile uint32_t    APB2ENR     ;
	volatile uint32_t    APB1ENR     ;
	volatile uint32_t    BDCR        ;
	volatile uint32_t    CSR         ;
}RCC_RegDef_t;

#define  RCC                    ((RCC_RegDef_t* const)RCC_uint32_t_BASE_ADDRESS)

/********************************************************************************
 *_ GPIO Register.
 ********************************************************************************/
#define GPIO_u32_PORTA_BASE_ADD      0x40010800
#define GPIO_u32_PORTB_BASE_ADD      0x40010C00
#define GPIO_u32_PORTC_BASE_ADD      0x40011000
#define GPIO_u32_PORTD_BASE_ADD      0x40011400

//#define GPIO_u32_PORTE_BASE_ADD      0x40011800
//#define GPIO_u32_PORTF_BASE_ADD      0x40011C00
//#define GPIO_u32_PORTG_BASE_ADD      0x40012000

typedef  struct
{
	volatile uint32_t   CRL  ;
	volatile uint32_t   CRH  ;
	volatile uint32_t   IDR  ;
	volatile uint32_t   ODR  ;
	volatile uint32_t   BSRR ;
	volatile uint32_t   BRR  ;
	volatile uint32_t   LCKR ;
}GPIO_RegDef_t;

#define   GPIO_PORTA    ((GPIO_RegDef_t* const)GPIO_u32_PORTA_BASE_ADD)
#define   GPIO_PORTB    ((GPIO_RegDef_t* const)GPIO_u32_PORTB_BASE_ADD)
#define   GPIO_PORTC    ((GPIO_RegDef_t* const)GPIO_u32_PORTC_BASE_ADD)
#define   GPIO_PORTD    ((GPIO_RegDef_t* const)GPIO_u32_PORTD_BASE_ADD)




#endif /* STM32F103XX_H_ */

/**********************************************************************************************************************/
/**********************************************************************************************************************
 *  END OF FILE: _H_
 *********************************************************************************************************************/





























///*********************************************************************************/
///*                           Name : Karim Seif                                   */
///*                           Date : 11/8/2021                                    */
///*                        version : 1.0                                          */
///*                           SWC  : stm32f103xx                                  */
///*********************************************************************************/
//#ifndef  STM32F103XX_H
//#define  STM32F103XX_H
//
///**************************** RCC Regisetrs **************************************/
//#define RCC_u32_BASE_ADDRESS             0x40021000
//
//typedef struct
//{
//	volatile u32 CR;
//	volatile u32 CFGR;
//	volatile u32 CIR;
//	volatile u32 APB2RSTR;
//	volatile u32 APB1RSTR;
//	volatile u32 AHBENR;
//	volatile u32 APB2ENR;
//	volatile u32 APB1ENR;
//	volatile u32 BDCR;
//	volatile u32 CSR;
//}RCC_RegDef_t;
//
//#define RCC                    ((RCC_RegDef_t*)(RCC_u32_BASE_ADDRESS))
//
///*********************************************************************************/
//
///**************************** GPIO Registers *************************************/
//#define GPIO_u32_GPIOA_BASE_ADD                            0x40010800
//#define GPIO_u32_GPIOB_BASE_ADD                            0x40010C00
//#define GPIO_u32_GPIOC_BASE_ADD            \                0x40011000
//
//typedef struct
//{
//	volatile u32 CRL;
//	volatile u32 CRH;
//	volatile u32 IDR;
//	volatile u32 ODR;
//	volatile u32 BSRR;
//	volatile u32 BRR;
//	volatile u32 LCKR;
//}GPIO_RegDef_t;
//
//#define GPIOA                         ((GPIO_RegDef_t*)GPIO_u32_GPIOA_BASE_ADD)
//#define GPIOB                         ((GPIO_RegDef_t*)GPIO_u32_GPIOB_BASE_ADD)
//#define GPIOC                         ((GPIO_RegDef_t*)GPIO_u32_GPIOC_BASE_ADD)
//
//
//
///*********************************************************************************/
//
///***************************** STK Registers *************************************/
//#define STK_u32_BASE_ADDRESS                0xE000E010
//
//typedef struct
//{
//	volatile u32 CTRL;
//	volatile u32 LOAD;
//	volatile u32 VAL;
//	volatile u32 CALIB;
//}STK_RegDef_t;
//
//#define STK                          ((STK_RegDef_t*)STK_u32_BASE_ADDRESS)
//
///*********************************************************************************/
//
///*************************** NVIC Registers **************************************/
//
//#define NVIC_u32_BASE_ADDRESS               0xE000E100
//
//typedef struct
//{
//	volatile u32 ISER[8];
//	volatile u32 Reserved1[24];
//	volatile u32 ICER[8];
//	volatile u32 Reserved2[24];
//	volatile u32 ISPR[8];
//	volatile u32 Reserved3[24];
//	volatile u32 ICPR[8];
//	volatile u32 Reserved4[24];
//	volatile u32 IABR[8];
//	volatile u32 Reserved5[56];
//	volatile u8  IPR[240];
//}NVIC_RegDef_t;
//
//#define NVIC                     ((NVIC_RegDef_t*)NVIC_u32_BASE_ADDRESS)
//
//
///*********************************************************************************/
//
///*************************** DMA Registers ***************************************/
//
//#define DMA_u32_BASE_ADDRESS                      0x40020000
//
//typedef struct
//{
//	u32 CCR;
//	u32 CNDTR;
//	u32 CPAR;
//	u32 CMAR;
//	u32 Reserved;
//}CHANNEL_t;
//
//typedef struct
//{
//	u32 ISR;
//	u32 IFCR;
//	CHANNEL_t Channel[7];
//}DMA_RegDef_t;
//
//#define DMA                         ((DMA_RegDef_t*)DMA_u32_BASE_ADDRESS)
//
//
//
///*********************************************************************************/
//
///********************************* EXTI Regisetrs ********************************/
//
//#define EXTI_u32_BASE_ADDRESS                 0x40010400
//
//typedef struct
//{
//	volatile u32 IMR;
//	volatile u32 EMR;
//	volatile u32 RTSR;
//	volatile u32 FTSR;
//	volatile u32 SWIER;
//	volatile u32 PR;
//}EXTI_RegDef_t;
//
//#define EXTI                       ((EXTI_RegDef_t*)EXTI_u32_BASE_ADDRESS)
//
//
///*********************************************************************************/
//
///******************************** AFIO Regisetrs *********************************/
//#define AFIO_u32_BASE_ADDRESS                 0x40010000
//
//typedef struct
//{
//	volatile u32 EVCR;
//	volatile u32 MAPR;
//	volatile u32 EXTICR[4];
//	volatile u32 MAPR2;
//}AFIO_RegDef_t;
//
//#define AFIO                      ((AFIO_RegDef_t*)AFIO_u32_BASE_ADDRESS)
//
//
///*********************************************************************************/
//
//#endif
