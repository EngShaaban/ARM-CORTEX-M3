/*
 * core_gpio_cnfg.h
 *
 *  Created on: ٢١‏/٠٢‏/٢٠٢٣
 *      Author: Sky-pc
 */

#ifndef STM32F103C_GPIO_CORE_GPIO_CNFG_H_
#define STM32F103C_GPIO_CORE_GPIO_CNFG_H_

typedef enum
{
    PORTA_START    =  (0U)       ,
    PIN_A0         =  PORTA_START,
    PIN_A1                       ,
    PIN_A2                       ,
    PIN_A3                       ,
    PIN_A4                       ,
    PIN_A5                       ,
    PIN_A6                       ,
    PIN_A7                       ,
    PIN_A8                       ,
    PIN_A9                       ,
    PIN_A10                      ,
    PIN_A11                      ,
    PIN_A12                      ,
    PIN_A13                      ,
    PIN_A14                      ,
    PIN_A15                      ,
    PORTA_END = PIN_A15          ,
   
    PORTB_START       ,
    PIN_B0         =  PORTB_START,
    PIN_B1                       ,
    PIN_B2                       ,
    PIN_B3                       ,
    PIN_B4                       ,
    PIN_B5                       ,
    PIN_B6                       ,
    PIN_B7                       ,
    PIN_B8                       ,
    PIN_B9                       ,
    PIN_B10                      ,
    PIN_B11                      ,
    PIN_B12                      ,
    PIN_B13                      ,
    PIN_B14                      ,
    PIN_B15                      ,
    PORTB_END = PIN_B15          ,

    PORTC_START                  ,
    PIN_C0         =  PORTC_START,
    PIN_C1                       ,
    PIN_C2                       ,
    PIN_C3                       ,
    PIN_C4                       ,
    PIN_C5                       ,
    PIN_C6                       ,
    PIN_C7                       ,
    PIN_C8                       ,
    PIN_C9                       ,
    PIN_C10                      ,
    PIN_C11                      ,
    PIN_C12                      ,
    PIN_C13                      ,
    PIN_C14                      ,
    PIN_C15                      ,
    PORTC_END = PIN_C15          ,
      
}GPIO_Pin_ID_t ; 

typedef enum{
    GPIO_LOW  = 0 ,
    GPIO_HIGH
}GPIO_Pin_Value_t ; 


#endif /* STM32F103C_GPIO_CORE_GPIO_CNFG_H_ */
