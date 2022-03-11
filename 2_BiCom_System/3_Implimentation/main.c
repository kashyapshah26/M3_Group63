
#include "stm32f407xx.h"

uint8_t buttonCount = 0;

void delayblink(uint32_t ms)
{
	for (uint32_t i=0; i<(ms*50000); i++);
}

int main(void)
{
	GPIO_Handle_t GPIOLedG;
    GPIOLedG.pGPIOx = GPIOD;
    GPIOLedG.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_12;
    GPIOLedG.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
    GPIOLedG.GPIO_PinConfig.GPIO_PinOspeed = GPIO_SPEED_MED;
    GPIOLedG.GPIO_PinConfig.GPIO_PinOtype = GPIO_OP_TYPE_PP;
    GPIOLedG.GPIO_PinConfig.GPIO_PinPuPd = GPIO_NO_PUPD;

	GPIO_Handle_t GPIOLedO;
    GPIOLedO.pGPIOx = GPIOD;
    GPIOLedO.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_13;
    GPIOLedO.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
    GPIOLedO.GPIO_PinConfig.GPIO_PinOspeed = GPIO_SPEED_MED;
    GPIOLedO.GPIO_PinConfig.GPIO_PinOtype = GPIO_OP_TYPE_PP;
    GPIOLedO.GPIO_PinConfig.GPIO_PinPuPd = GPIO_NO_PUPD;

	GPIO_Handle_t GPIOLedR;
    GPIOLedR.pGPIOx = GPIOD;
    GPIOLedR.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_14;
    GPIOLedR.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
    GPIOLedR.GPIO_PinConfig.GPIO_PinOspeed = GPIO_SPEED_MED;
    GPIOLedR.GPIO_PinConfig.GPIO_PinOtype = GPIO_OP_TYPE_PP;
    GPIOLedR.GPIO_PinConfig.GPIO_PinPuPd = GPIO_NO_PUPD;

	GPIO_Handle_t GPIOLedB;
    GPIOLedB.pGPIOx = GPIOD;
    GPIOLedB.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_15;
    GPIOLedB.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
    GPIOLedB.GPIO_PinConfig.GPIO_PinOspeed = GPIO_SPEED_MED;
    GPIOLedB.GPIO_PinConfig.GPIO_PinOtype = GPIO_OP_TYPE_PP;
    GPIOLedB.GPIO_PinConfig.GPIO_PinPuPd = GPIO_NO_PUPD;

    GPIO_PeriClockControl(GPIOD, ENABLE);
    GPIO_Init(&GPIOLedG);
    GPIO_Init(&GPIOLedO);
    GPIO_Init(&GPIOLedR);
    GPIO_Init(&GPIOLedB);

	GPIO_Handle_t GPIOButton;
    GPIOButton.pGPIOx = GPIOA;
    GPIOButton.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_0;
    GPIOButton.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
    GPIOButton.GPIO_PinConfig.GPIO_PinOspeed = GPIO_SPEED_MED;
    GPIOButton.GPIO_PinConfig.GPIO_PinOtype = GPIO_OP_TYPE_PP;
    GPIOButton.GPIO_PinConfig.GPIO_PinPuPd = GPIO_PU;

    GPIO_PeriClockControl(GPIOA, ENABLE);
    GPIO_Init(&GPIOButton);


   /* while (1)
            {
            	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
            	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_13);
            	delayblink(1000);
            }*/

    // Ignition is On: Green Led will blink for 5 seconds
    for (uint8_t i=0; i< 10; i++ )
    {
    	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
    	delayblink(1000);
    }
    while(1)
    {
    	//Ignition is On, Seat belt is not fastened:
		if (GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0) == 1)
		{
			buttonCount = 1;
			uint8_t j = 0;
			while (1)
			{
				GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
				GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_13);
				GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_14);
				GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
				delayblink(1000);

				if (GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0) == 1)
				{
					buttonCount += 1;
				}

				 //Ignition is On, Crash Detected and Seat belt is not fastened:
				while (buttonCount == 3)
				{
					GPIO_WritetoOutputPin(GPIOD, GPIO_PIN_NO_12, 0);
					GPIO_WritetoOutputPin(GPIOD, GPIO_PIN_NO_13, 0);
					GPIO_WritetoOutputPin(GPIOD, GPIO_PIN_NO_15, 0);
				    while ( j< 10)
				    {
				    	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_14);
				    	delayblink(1000);
				    	if (GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0) == 1)
						{
							buttonCount += 1;
						}
				    	j++;
				    }
			    	if (GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0) == 1)
					{
						buttonCount += 1;
					}
			    	GPIO_WritetoOutputPin(GPIOD, GPIO_PIN_NO_14, 0);
				}

				// Ignition is On, Crash Detected and Seat belt is fastened
					while(buttonCount == 6)
					{
						GPIO_WritetoOutputPin(GPIOD, GPIO_PIN_NO_12, 0);
						GPIO_WritetoOutputPin(GPIOD, GPIO_PIN_NO_13, 0);
						GPIO_WritetoOutputPin(GPIOD, GPIO_PIN_NO_14, 0);
						GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
						delayblink(1000);

				    	if (GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0) == 1)
						{
							buttonCount += 1;
						}
					}

			}
		}
    }

}

/*
 * finalled.c
 *
 *  Created on: March 11, 2022
 *      Author: Group 63
 */