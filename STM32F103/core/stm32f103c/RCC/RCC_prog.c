/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *               File:  RCC_prog.c
 *             Module:
 *             Author:  Shaaban Abdullah
 *         Created on:  Jan 27, 2023
 *    TOOLCHAIN NAME :
 * TOOLCHAIN VERSION :	v1.11.00
 *
 *  Description:  <Write File DESCRIPTION here>
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include"../../../LIB/STD_TYPES.h"
#include"../../../LIB/BIT_MATH.h"
#include"../../../LIB/errorStates.h"
#include"../../../LIB/stm32f103xx.h"

#include"RCC_private.h"
#include"RCC_config.h"
#include"RCC_interface.h"


/**********************************************************************************************************************
 *  LOCAL MACROS CONSTANT\FUNCTION
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
void  RCC_voidInitSysClk(void)
{

	/*********************************************************
	 *_The 4 to 16 MHz is the range of external oscillator.
	 *********************************************************/
#if   (RCC_u8_CLK_SRC   ==  RCC_u8_HSE_CRYSTAL )

	/*1_Enable HSE Clock.*/
	RCC->CR.HSEON = 0b1 ;

	/*2_Not bypass.*/
	RCC->CR.HSEBYP = 0b0 ;

	/*3_Select HSE as system clock.*/
	RCC->CFGR.SW=0B01;

	/*4_Disable the HIGHT SPEED INTERNAL (HSI).*/
	RCC->CR.HSION = 0B0 ;

	/*4_Disable the PLL.*/
	RCC->CR.PLLON = 0B0 ;





//#warning  "HSE Crystal System is used as a main sytem clock."


	/*****************************************************
	 *_Maximuim Frequency equal 25 MHZ
	 *****************************************************/
#elif   (RCC_u8_CLK_SRC   == RCC_u8_HSE_BYPASS )

	/*1_Enable HSE Clock.*/
	RCC->CR.HSEON = 0b1 ;

	/*2_Bypass.          */
	RCC->CR.HSEBYP = 0b1 ;

	/*3_Select HSE as system clock.*/
	RCC->CFGR.SW=0B01;

	/**********************************************************************
	 *_HSI clock signal is generated from an internal 8 MHz RC Oscillator
	 *********************************************************************/
#elif   (RCC_u8_CLK_SRC   ==  RCC_u8_HSI)

	/*1_Enable HSI Clock CR[HSEON]*/
	RCC->CR.HSION= 0b1;

	/*2_Switch the Clock System to HSI CFGR[SW]*/
	RCC->CFGR.SW = 0b00;

#elif   (RCC_u8_CLK_SRC   ==  RCC_u8_PLL)

	/*1_Enable PLL Clock*/
	RCC->CR.PLLON = 0b1 ;
	//_PLL entry clock source Selection.



	/*2_Switch the Clock System to PLL CFGR[SW]*/
	//RCC->CFGR=0X00000002 ;
#else
#error "Not valid clock source!"
#endif

}

ES_t  RCC_enuEnablePeripheralClk(RCC_Periph_ID_t   Copy_enuPeripheralId)
{
	ES_t  Local_enuErrorState= ES_OK ;

	if( (Copy_enuPeripheralId >= RCC_AF ) && (Copy_enuPeripheralId <=RCC_USART1) )
	{
		SET_BIT(RCC->APB2ENR,Copy_enuPeripheralId);
	}
	else if( (Copy_enuPeripheralId >= APB1_PERIPHERAL_START ) && (Copy_enuPeripheralId <= APB1_PERIPHERAL_END) )
	{
		Copy_enuPeripheralId = (Copy_enuPeripheralId - APB1_PERIPHERAL_START);

		SET_BIT( (RCC->APB1ENR),(Copy_enuPeripheralId));
	}
	else
	{
		Local_enuErrorState= ES_NOK ;
	}

	return  Local_enuErrorState ;

}


ES_t  RCC_enuDisablePeripheralClk(RCC_Periph_ID_t   Copy_enuPeripheralId)
{
	ES_t  Local_enuErrorState= ES_OK ;

	if( (Copy_enuPeripheralId >= RCC_AF ) && (Copy_enuPeripheralId <=RCC_USART1) )
	{
		CLR_BIT(RCC->APB2ENR,Copy_enuPeripheralId);
	}
	else if( (Copy_enuPeripheralId >= APB1_PERIPHERAL_START ) && (Copy_enuPeripheralId <= APB1_PERIPHERAL_END) )
	{
		Copy_enuPeripheralId = (Copy_enuPeripheralId - APB1_PERIPHERAL_START);

		CLR_BIT( RCC->APB1ENR,(Copy_enuPeripheralId));
	}
	else
	{
		Local_enuErrorState= ES_NOK ;
	}

	return  Local_enuErrorState ;
}

/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/


/******************************************************************************
 * \Syntax          : Std_ReturnType FunctionName(AnyType parameterName)
 * \Description     : Describe this service
 *
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : parameterName   Parameter Describtion
 * \Parameters (out): None
 * \Return value:   : Std_ReturnType  E_OK
 *                                    E_NOT_OK
 *******************************************************************************/


/**********************************************************************************************************************
 *  END OF FILE: FileName.c
 *********************************************************************************************************************/
/**************************************************
 *                           ...    6       5       4       3       2       1       0
 *                                 (D2)     (D1)   Weight   Time    Def    Gril      MW
 *                           ...+-------+-------+-------+-------+-------+-------+-------+
 *               digit2State ...|               |       |       |       |       |       |
 *                           ...+-------+-------+-------+-------+-------+-------+-------+
 *
 *
 *                ==(A1)==        ==(A2)==                    ==(A3)==       ==(A4)==
 *               ||      ||      ||      ||                  ||      ||     ||      ||
 *              (F1)    (B1)    (F2)    (B2)                (F3)    (B3)   (F4)    (B4)
 *               ||      ||      ||      ||      (D1)        ||      ||     ||      ||
 *                 ==(G1)==        ==(G2)==                    ==(G3)==       ==(G4)==
 *               ||      ||      ||      ||      (D2)        ||      ||     ||      ||
 *              (E1)    (C1)    (E2)    (C2)                (E3)    (C3)   (E4)    (C4)
 *               ||      ||      ||      ||                  ||      ||     ||      ||
 *                ==(D1)==        ==(D2)==                    ==(D3)==       ==(D4)==
 *
 *
 *                                                3      2     1     0
 *                                   .......--+-------+-------+-------+
 *                        autoLeds            |       |       |       |
 *                                    .....---+-------+-------+-------+
 *                                              Auto    Start    Lock
 *******************************************************************************************************************/

//
//       ==(A4)==
//      ||      ||
//     (F4)    (B4)
//      ||      ||
//        ==(G4)==
//      ||      ||
//     (E4)    (C4)
//      ||      ||
//       ==(D4)==
//

