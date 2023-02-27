/*
 * core_gpio_prog.c
 *
 *  Created on: ٢١‏/٠٢‏/٢٠٢٣
 *      Author: Sky-pc
 */

#include"../../../LIB/STD_TYPES.h"
#include"../../../LIB/BIT_MATH.h"
#include"../../../LIB/errorStates.h"
#include"../../../LIB/stm32f103xx.h"

#include"core_gpio_private.h"
#include"core_gpio_cnfg.h"
#include"core_gpio_interface.h"

static arr[PIN_MODES_NUM]={
		/*_OUTPUT CONFIGURATION.*/
		               0b0001,
		               0b0101,
		               0b1001,
		               0b1101,
		               0b0010,
		               0b0110,
		               0b1010,
		               0b1110,
		               0b0011,
		               0b0111,
                       0b1011,
                       0b1111,
					   0b0000,
					   0b0100,
					   0b1000,
					   0b1000,

};
ES_t  core_GPIO_enuSetPinMode()
{
    ES_t     Local_enuErrorState   = ES_NOK ;

    return   Local_enuErrorState ;  
}
ES_t  core_GPIO_enuSetPinValue(GPIO_Pin_ID_t ,GPIO_Pin_Value_t )
{

}
ES_t  core_GPIO_enuGetPinValue(GPIO_Pin_ID_t ,GPIO_Pin_Value_t ,uint8_t* )
{

}
ES_t  core_GPIO_enuTogglePin(GPIO_Pin_ID_t)
{

}


