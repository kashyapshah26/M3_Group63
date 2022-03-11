/*
 * stm32f4xx_gpio_driver.h
 *
 *  Created on: Sep 16, 2021
 *      Author: Abhay Sahu
 */

#ifndef INC_STM32F4XX_GPIO_DRIVER_H_
#define INC_STM32F4XX_GPIO_DRIVER_H_

#include "stm32f407xx.h"

/*
 * handling each pin
 */
typedef struct
{
	uint8_t GPIO_PinNumber;
	uint8_t GPIO_PinMode;
	uint8_t GPIO_PinOtype;
	uint8_t GPIO_PinOspeed;
	uint8_t GPIO_PinPuPd;
	uint8_t GPIO_PinAltFunMode;

}GPIO_PinConfig_t;

typedef struct
{
	GPIO_RegDef_t *pGPIOx;			//base address
	GPIO_PinConfig_t GPIO_PinConfig;	// pin config
}GPIO_Handle_t;

/*
 * GPIO+PinNumber Macros
 */

#define GPIO_PIN_NO_0		0
#define GPIO_PIN_NO_1		1
#define GPIO_PIN_NO_2		2
#define GPIO_PIN_NO_3		3
#define GPIO_PIN_NO_4		4
#define GPIO_PIN_NO_5		5
#define GPIO_PIN_NO_6		6
#define GPIO_PIN_NO_7		7
#define GPIO_PIN_NO_8		8
#define GPIO_PIN_NO_9		9
#define GPIO_PIN_NO_10		10
#define GPIO_PIN_NO_11		11
#define GPIO_PIN_NO_12		12
#define GPIO_PIN_NO_13		13
#define GPIO_PIN_NO_14		14
#define GPIO_PIN_NO_15		15

/*
 * GPIO_PinMode
 */

#define GPIO_MODE_IN			0
#define GPIO_MODE_OUT			1
#define GPIO_MODE_ALTFN			2
#define GPIO_MODE_ANALOG		3

/*
 * GPIO_PinType
 */

#define GPIO_OP_TYPE_PP		0
#define GPIO_OP_TYPE_OD		1

/*
 * GPIO_PinSpeed
 */

#define GPIO_SPEED_LOW		0
#define GPIO_SPEED_MED		1
#define GPIO_SPEED_HIGH		2
#define GPIO_SPEED_VHIGH	3

/*
 * GPIO_PuPd
 */

#define GPIO_NO_PUPD	0
#define GPIO_PU			1
#define GPIO_PD			2

/*
 * GPIO_AltFunMode
 */

#define GPIO_AF_AF0			0
#define GPIO_AF_AF1			1
#define GPIO_AF_AF2			2
#define GPIO_AF_AF3			3
#define GPIO_AF_AF4			4
#define GPIO_AF_AF5			5
#define GPIO_AF_AF6			6
#define GPIO_AF_AF7			7
#define GPIO_AF_AF8			8
#define GPIO_AF_AF9			9
#define GPIO_AF_AF10		10
#define GPIO_AF_AF11		11
#define GPIO_AF_AF12		12
#define GPIO_AF_AF13		13
#define GPIO_AF_AF14		14
#define GPIO_AF_AF15		15

/*
 * User defined API's
 *
 */

	/*
	 * Init and DeInit API's
	 */
	void GPIO_Init(GPIO_Handle_t *pGPIOHandle);
	void GPIO_DeInit(GPIO_RegDef_t *pGPIOx);

	/*
	 * Peripheral Clock
	 */

	void GPIO_PeriClockControl(GPIO_RegDef_t *pGPIOx, uint8_t EnorDi);

	/*
	 * Data read and write
	 */

	uint8_t GPIO_ReadFromInputPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber);
	uint16_t GPIO_ReadFromInputPort(GPIO_RegDef_t *pGPIOx);
	void GPIO_WritetoOutputPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber, uint8_t Value);
	void GPIO_WritetoOutputPort(GPIO_RegDef_t *pGPIOx, uint8_t Value);
	void GPIO_ToggleOutputPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber);

#endif /* INC_STM32F4XX_GPIO_DRIVER_H_ */
