/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *               File:  RCC_interface.h
 *             Module:
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
#ifndef RCC_INTERFACE_H_
#define RCC_INTERFACE_H_

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/
typedef enum
{
	/****************************************************
	 *_ APB2 Register Bits.
	 ****************************************************/
	RCC_AF     = (0U)      ,   //Alternate function I/O.
	RCC_PORTA  = (2U)      ,
	RCC_PORTB              ,
	RCC_PORTC              ,
	RCC_PORTD              ,
	RCC_PORTE              ,

	RCC_ADC1   = (9U)      ,
	RCC_ADC2               ,
	RCC_TIM1               ,
	RCC_SPI                ,

	RCC_USART1 = (14U)     ,


	/****************************************************
	 *_ APB1 Register Bits.
	 ****************************************************/
	APB1_PERIPHERAL_START                  ,
	RCC_TIM2     = APB1_PERIPHERAL_START   ,
	RCC_TIM3                               ,
	RCC_TIM4                               ,
	RCC_TIM5                               ,
	RCC_TIM6                               ,
	RCC_TIM7                               ,

	RCC_WWDGEN   =(26U)                    ,

	RCC_SPI2     =(29U)                    ,
	RCC_SPI3                               ,

	RCC_USART2   =(32U)                    ,
	RCC_USART3                             ,
	RCC_UART4                              ,
	RCC_UART5                              ,
	RCC_2C1                                ,
	RCC_2C2                                ,

	RCC_CAN1    = (40U)                    ,
	RCC_CAN2                               ,
	RCC_BKP                                ,    // Backup interface.
	RCC_PWR                                ,
	RCC_DAC                                ,    //DAC interface
	APB1_PERIPHERAL_END = RCC_DAC          ,
}RCC_Periph_ID_t ;






/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/
void  RCC_voidInitSysClk           (void);

/******************************************************************************
 * \Syntax          : Std_ReturnType FunctionName(AnyType parameterName)
 * \Description     : Describe this service
 *
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : RCC_Periph_ID_t      Parameter Describtion
 *
 *               OPTIONS:
 *                          RCC_AF                    RCC_TIM1
 *                                                    RCC_TIM2        RCC_USART1
 *                          RCC_PORTA                 RCC_TIM3        RCC_USART2     RCC_CAN1
 *                          RCC_PORTB                 RCC_TIM4        RCC_USART3     RCC_CAN2
 *                          RCC_PORTC                 RCC_TIM5        RCC_UART4      RCC_BKP
 *                          RCC_PORTD                 RCC_TIM6        RCC_UART5      RCC_PWR
 *                          RCC_PORTE                 RCC_TIM7        RCC_2C1        RCC_DAC
 *                          RCC_ADC1                  RCC_WWDGEN      RCC_2C2
 *                          RCC_ADC2                  RCC_SPI2
 *                                                    RCC_SPI3
 *                          RCC_SPI
 *
 *
 * \Parameters (out): None
 * \Return value:   : Std_ReturnType  E_OK
 *                                    E_NOT_OK
 *******************************************************************************/

ES_t  RCC_enuEnablePeripheralClk(RCC_Periph_ID_t   Copy_enuPeripheralId);
ES_t  RCC_enuDisablePeripheralClk(RCC_Periph_ID_t   Copy_enuPeripheralId);

/************************
 * _ RCC_CSR[LSION]
 ************************/
//ES_t  RCC_eunEnableLSI(void);
//ES_t  RCC_eunDisableLSI(void);

/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/***************************************************************
 *  AVAILABLE PORTS IN R5F10Y47.
 ***************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

#endif /* RCC_INTERFACE_H_ */

/**********************************************************************************************************************
 *  END OF FILE: _H_
 *********************************************************************************************************************/









