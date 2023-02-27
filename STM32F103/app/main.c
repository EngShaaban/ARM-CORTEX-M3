
#include"../LIB/STD_TYPES.h"
#include"../LIB/errorStates.h"

#include"../LIB/stm32f103xx.h"

#include"../core/stm32f103c/RCC/RCC_interface.h"


int main(void)
{
	//RCC_APB2ENR)
	 RCC_voidInitSysClk();

	 RCC_enuEnablePeripheralClk(RCC_PORTA);
	 RCC_enuEnablePeripheralClk(RCC_PORTE);





	while(1)
	{

	}

}
