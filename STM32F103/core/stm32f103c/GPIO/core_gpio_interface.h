/*
 * core_gpio_cnfg.h
 *
 *  Created on: ٢١‏/٠٢‏/٢٠٢٣
 *      Author: Sky-pc
 */

#ifndef STM32F103C_GPIO_CORE_GPIO_CNFG_H_
#define STM32F103C_GPIO_CORE_GPIO_CNFG_H_



ES_t  core_GPIO_enuSetPinMode();
ES_t  core_GPIO_enuSetPinValue(GPIO_Pin_ID_t ,GPIO_Pin_Value_t );
ES_t  core_GPIO_enuGetPinValue(GPIO_Pin_ID_t ,GPIO_Pin_Value_t ,uint8_t* );
ES_t  core_GPIO_enuTogglePin(GPIO_Pin_ID_t);




#endif /* STM32F103C_GPIO_CORE_GPIO_CNFG_H_ */













