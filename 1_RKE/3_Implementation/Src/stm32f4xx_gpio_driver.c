

#include "stm32f4xx_gpio_driver.h"


	void GPIO_Init(GPIO_Handle_t *pGPIOHandle)
	{
		//1. Configure the mode

			uint32_t temp=0;

			temp = (pGPIOHandle->GPIO_PinConfig.GPIO_PinMode << (2* pGPIOHandle->GPIO_PinConfig.GPIO_PinNumber));
			pGPIOHandle->pGPIOx->MODER &= ~(0x3 << (2* pGPIOHandle->GPIO_PinConfig.GPIO_PinNumber));
			pGPIOHandle->pGPIOx->MODER |= temp;	//setting of the value
				temp = 0;

		//2. Configure the Output type
			temp = (pGPIOHandle->GPIO_PinConfig.GPIO_PinOtype << (pGPIOHandle->GPIO_PinConfig.GPIO_PinNumber));
			pGPIOHandle->pGPIOx->OTYPER &= ~(0x1 << (pGPIOHandle->GPIO_PinConfig.GPIO_PinNumber));
			pGPIOHandle->pGPIOx->OTYPER |= temp;	//setting of the value
				temp = 0;

		//3. Configure the speed
			temp = (pGPIOHandle->GPIO_PinConfig.GPIO_PinOspeed << (2* pGPIOHandle->GPIO_PinConfig.GPIO_PinNumber));
			pGPIOHandle->pGPIOx->OSPEEDR &= ~(0x3 << (2* pGPIOHandle->GPIO_PinConfig.GPIO_PinNumber));
			pGPIOHandle->pGPIOx->OSPEEDR |= temp;
				temp = 0;

		//4. Configure the pull up or pull down settings
			temp = (pGPIOHandle->GPIO_PinConfig.GPIO_PinPuPd << (2* pGPIOHandle->GPIO_PinConfig.GPIO_PinNumber));
			pGPIOHandle->pGPIOx->PUPDR &= ~(0x3 << (2* pGPIOHandle->GPIO_PinConfig.GPIO_PinNumber));
			pGPIOHandle->pGPIOx->PUPDR |= temp;
				temp = 0;

		//5. Configure the Alternating Function mode
			if (pGPIOHandle->GPIO_PinConfig.GPIO_PinMode == GPIO_MODE_ALTFN)
			{
				uint8_t temp1, temp2;

				temp1 = pGPIOHandle->GPIO_PinConfig.GPIO_PinNumber/8;
				temp2 = pGPIOHandle->GPIO_PinConfig.GPIO_PinNumber%8;

				pGPIOHandle->pGPIOx->AFR[temp1] &= ~(0xf << (4* pGPIOHandle->GPIO_PinConfig.GPIO_PinNumber));
				pGPIOHandle->pGPIOx->AFR[temp1] |= (pGPIOHandle->GPIO_PinConfig.GPIO_PinPuPd << (4* temp2));
			}
				temp = 0;
	}

	void GPIO_DeInit(GPIO_RegDef_t *pGPIOx)
	{
		if(pGPIOx == GPIOA)
				{
					GPIOA_REG_RESET();
				}
		else if(pGPIOx == GPIOB)
				{
					GPIOB_REG_RESET();
				}
		else if(pGPIOx == GPIOC)
				{
					GPIOC_REG_RESET();
				}
		else if(pGPIOx == GPIOD)
				{
					GPIOD_REG_RESET();
				}
		else if(pGPIOx == GPIOE)
				{
					GPIOE_REG_RESET();
				}
		else if(pGPIOx == GPIOF)
				{
					GPIOF_REG_RESET();
				}
		else if(pGPIOx == GPIOG)
				{
					GPIOG_REG_RESET();
				}
		else if(pGPIOx == GPIOH)
				{
					GPIOH_REG_RESET();
				}
		else if(pGPIOx == GPIOI)
				{
					GPIOI_REG_RESET();
				}
	}

	/*
	 * @Brief:
	 * @Parm1:
	 * @Parm2:
	 * @return:
	 */
	void GPIO_PeriClockControl(GPIO_RegDef_t *pGPIOx, uint8_t EnorDi)
	{
		if (EnorDi == ENABLE)
		{
			if(pGPIOx == GPIOA)
			{
				GPIOA_PCLK_EN();
			}
			else if (pGPIOx == GPIOB)
							{
								GPIOB_PCLK_EN();
							}
			else if (pGPIOx == GPIOC)
							{
								GPIOC_PCLK_EN();
							}
			else if (pGPIOx == GPIOD)
							{
								GPIOD_PCLK_EN();
							}
			else if (pGPIOx == GPIOE)
							{
								GPIOE_PCLK_EN();
							}
			else if (pGPIOx == GPIOF)
							{
								GPIOF_PCLK_EN();
							}
			else if (pGPIOx == GPIOG)
							{
								GPIOG_PCLK_EN();
							}
			else if (pGPIOx == GPIOH)
							{
								GPIOH_PCLK_EN();
							}
			else if (pGPIOx == GPIOI)
							{
								GPIOI_PCLK_EN();
							}

		}
		else
		{
			if(pGPIOx == GPIOA)
			{
				GPIOA_PCLK_DI();
			}
			else if (pGPIOx == GPIOB)
							{
								GPIOB_PCLK_DI();
							}
			else if (pGPIOx == GPIOC)
							{
								GPIOC_PCLK_DI();
							}
			else if (pGPIOx == GPIOD)
							{
								GPIOD_PCLK_DI();
							}
			else if (pGPIOx == GPIOE)
							{
								GPIOE_PCLK_DI();
							}
			else if (pGPIOx == GPIOF)
							{
								GPIOF_PCLK_DI();
							}
			else if (pGPIOx == GPIOG)
							{
								GPIOG_PCLK_DI();
							}
			else if (pGPIOx == GPIOH)
							{
								GPIOH_PCLK_DI();
							}
			else if (pGPIOx == GPIOI)
							{
								GPIOI_PCLK_DI();
							}

		}
	}

	/*
	 * @Brief:
	 * @Parm1:
	 * @Parm2:
	 * @return:
	 */
	uint8_t GPIO_ReadFromInputPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber)
	{
		uint8_t Value;
		Value = (uint8_t)((pGPIOx->IDR >> PinNumber)& 0x00000001);		//masking technique
		return Value;
	}

	/*
	 * @Brief:
	 * @Parm1:
	 * @Parm2:
	 * @return:
	 */
	uint16_t GPIO_ReadFromInputPort(GPIO_RegDef_t *pGPIOx)
	{
		uint16_t Value;
		Value = (uint16_t)(pGPIOx->IDR);
		return Value;
	}

	/*
	 * @Brief:
	 * @Parm1:
	 * @Parm2:
	 * @return:
	 */
	void GPIO_WritetoOutputPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber, uint8_t Value)
	{
		if (Value == GPIO_PIN_SET)
		{
			pGPIOx->ODR |= (1<<PinNumber);
		}
		else
		{
			pGPIOx->ODR &= ~(1<<PinNumber);
		}
	}

	/*
	 * @Brief:
	 * @Parm1:
	 * @Parm2:
	 * @return:
	 */
	void GPIO_WritetoOutputPort(GPIO_RegDef_t *pGPIOx, uint8_t Value)
	{
		pGPIOx->ODR = Value;
	}

	/*
	 * @Brief:
	 * @Parm1:
	 * @Parm2:
	 * @return:
	 */
	void GPIO_ToggleOutputPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber)
	{
		pGPIOx->ODR ^= (1<<PinNumber);
	}
