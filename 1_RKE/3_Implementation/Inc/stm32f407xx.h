/*
 * stm32f407xx.h
 *
 *  Created on: 11 march 2022
 *      Author: group 63
 */

#ifndef INC_STM32F407XX_H_
#define INC_STM32F407XX_H_

#include <stdint.h>

#define __vo volatile //defining volatile as __vo
/*
 * base addresses of various memories
 */

#define FLASH_BASEADDR		0x08000000U
#define SRAM1_BASEADDR		0x20000000U
#define SRAM2_BASEADDR		0x2001C000U
#define ROM_BASEADDR		0x1FFF0000U
#define SRAM_BASEADDR		SRAM1_BASEADDR

/*
 * base addresses of various bus domains
 */

#define APB1PERIPH_BASEADDR		0x40000000U
#define APB2PERIPH_BASEADDR		0x40010000U
#define AHB1PERIPH_BASEADDR		0x40020000U
#define AHB2PERIPH_BASEADDR		0x50000000U

/*
 * base addresses of peripherals hanging on AHB1 bus
 */

#define GPIOA_BASEADDR		(AHB1PERIPH_BASEADDR + 0x0000)
#define GPIOB_BASEADDR		(AHB1PERIPH_BASEADDR + 0x0400)
#define GPIOC_BASEADDR		(AHB1PERIPH_BASEADDR + 0x0800)
#define GPIOD_BASEADDR		(AHB1PERIPH_BASEADDR + 0x0C00)
#define GPIOE_BASEADDR		(AHB1PERIPH_BASEADDR + 0x1000)
#define GPIOF_BASEADDR		(AHB1PERIPH_BASEADDR + 0x1400)
#define GPIOG_BASEADDR		(AHB1PERIPH_BASEADDR + 0x1800)
#define GPIOH_BASEADDR		(AHB1PERIPH_BASEADDR + 0x1C00)
#define GPIOI_BASEADDR		(AHB1PERIPH_BASEADDR + 0x2000)
#define RCC_BASEADDR		(AHB1PERIPH_BASEADDR + 0x3800)

/*
 * base addresses of peripherals hanging on APB1 bus
 */

#define I2C1_BASEADDR		(APB1PERIPH_BASEADDR + 0x5400)
#define I2C2_BASEADDR		(APB1PERIPH_BASEADDR + 0x5800)
#define I2C3_BASEADDR		(APB1PERIPH_BASEADDR + 0x5C00)
#define SPI2_BASEADDR		(APB1PERIPH_BASEADDR + 0x3800)
#define SPI3_BASEADDR		(APB1PERIPH_BASEADDR + 0x3C00)
#define USART2_BASEADDR		(APB1PERIPH_BASEADDR + 0x4400)
#define USART3_BASEADDR		(APB1PERIPH_BASEADDR + 0x4800)
#define USART4_BASEADDR		(APB1PERIPH_BASEADDR + 0x4C00)
#define USART5_BASEADDR		(APB1PERIPH_BASEADDR + 0x5000)

/*
 * base addresses of peripherals hanging on APB2 bus
 */

#define SPI1_BASEADDR		(APB2PERIPH_BASEADDR + 0x3000)
#define USART1_BASEADDR		(APB2PERIPH_BASEADDR + 0x1000)
#define USART6_BASEADDR		(APB2PERIPH_BASEADDR + 0x1400)
#define EXTI_BASEADDR		(APB2PERIPH_BASEADDR + 0x3C00)
#define SYSCFG_BASEADDR		(APB2PERIPH_BASEADDR + 0x3800)

/*
 * Peripheral structure definitions
 */

typedef struct
{
	__vo uint32_t MODER; //use of volatile is a best practice as mcu try's to fetch new values in every clock cycle
	__vo uint32_t OTYPER;
	__vo uint32_t OSPEEDR;
	__vo uint32_t PUPDR;
	__vo uint32_t IDR;
	__vo uint32_t ODR;
	__vo uint32_t BSRR;
	__vo uint32_t LCKR;
	__vo uint32_t AFR[2];
}GPIO_RegDef_t;

/*
 * all in one peripheral definitions for gpio registers
 * for each gpio the GPIO_RegDef_t struct is called with base address of the gpio and
 * as we have uint32_t for all registers and they are in correct sequence
 * mcu will automatically increment address by 4 bytes (each register has address increment of 4 bytes)
 */

#define GPIOA		((GPIO_RegDef_t*)GPIOA_BASEADDR)
#define GPIOB		((GPIO_RegDef_t*)GPIOB_BASEADDR)
#define GPIOC		((GPIO_RegDef_t*)GPIOC_BASEADDR)
#define GPIOD		((GPIO_RegDef_t*)GPIOD_BASEADDR)
#define GPIOE		((GPIO_RegDef_t*)GPIOE_BASEADDR)
#define GPIOF		((GPIO_RegDef_t*)GPIOF_BASEADDR)
#define GPIOG		((GPIO_RegDef_t*)GPIOG_BASEADDR)
#define GPIOH		((GPIO_RegDef_t*)GPIOH_BASEADDR)
#define GPIOI		((GPIO_RegDef_t*)GPIOI_BASEADDR)
#define RCC			((RCC_RegDef_t*)RCC_BASEADDR)

typedef struct
{
	__vo uint32_t CR;
	__vo uint32_t PLLCFGR;
	__vo uint32_t CFGR;
	__vo uint32_t CIR;
	__vo uint32_t AHB1RSTR;
	__vo uint32_t AHB2RSTR;
	__vo uint32_t AHB3RSTR;
	__vo uint32_t RESERVED0;
	__vo uint32_t APB1RSTR;
	__vo uint32_t APB2RSTR;
	__vo uint32_t RESERVED1;
	__vo uint32_t RESERVED2;
	__vo uint32_t AHB1ENR;
	__vo uint32_t AHB2ENR;
	__vo uint32_t AHB3ENR;
	__vo uint32_t RESERVED3;
	__vo uint32_t APB1ENR;
	__vo uint32_t APB2ENR;
	__vo uint32_t RESERVED4;
	__vo uint32_t RESERVED5;
	__vo uint32_t AHB2LPENR;
	__vo uint32_t AHB3LPENR;
	__vo uint32_t RESERVED6;
	__vo uint32_t APB1LPENR;
	__vo uint32_t APB2LPENR;
	__vo uint32_t RESERVED7;
	__vo uint32_t RESERVED8;
	__vo uint32_t BDCR;
	__vo uint32_t CSR;
	__vo uint32_t RESERVED9;
	__vo uint32_t RESERVED10;
	__vo uint32_t SSCGR;
	__vo uint32_t PLLI2SCFGR;
}RCC_RegDef_t;

#define GPIOA_PCLK_EN()		(RCC->AHB1ENR |= (1<<0))	//set
#define GPIOB_PCLK_EN()		(RCC->AHB1ENR |= (1<<1))
#define GPIOC_PCLK_EN()		(RCC->AHB1ENR |= (1<<2))
#define GPIOD_PCLK_EN()		(RCC->AHB1ENR |= (1<<3))
#define GPIOE_PCLK_EN()		(RCC->AHB1ENR |= (1<<4))
#define GPIOF_PCLK_EN()		(RCC->AHB1ENR |= (1<<5))
#define GPIOG_PCLK_EN()		(RCC->AHB1ENR |= (1<<6))
#define GPIOH_PCLK_EN()		(RCC->AHB1ENR |= (1<<7))
#define GPIOI_PCLK_EN()		(RCC->AHB1ENR |= (1<<8))

#define GPIOA_PCLK_DI()		(RCC->AHB1ENR &= ~(1<<0))	//reset
#define GPIOB_PCLK_DI()		(RCC->AHB1ENR &= ~(1<<1))
#define GPIOC_PCLK_DI()		(RCC->AHB1ENR &= ~(1<<2))
#define GPIOD_PCLK_DI()		(RCC->AHB1ENR &= ~(1<<3))
#define GPIOE_PCLK_DI()		(RCC->AHB1ENR &= ~(1<<4))
#define GPIOF_PCLK_DI()		(RCC->AHB1ENR &= ~(1<<5))
#define GPIOG_PCLK_DI()		(RCC->AHB1ENR &= ~(1<<6))
#define GPIOH_PCLK_DI()		(RCC->AHB1ENR &= ~(1<<7))
#define GPIOI_PCLK_DI()		(RCC->AHB1ENR &= ~(1<<8))

/*
 * Peripheral clock enable and disable Macros for I2C
 */

#define I2C1_PCLK_EN()		(RCC->APB1ENR |= (1<<21))	//set
#define I2C2_PCLK_EN()		(RCC->APB1ENR |= (1<<22))
#define I2C3_PCLK_EN()		(RCC->APB1ENR |= (1<<23))

#define I2C1_PCLK_DI()		(RCC->APB1ENR &= ~(1<<21))	//reset
#define I2C2_PCLK_DI()		(RCC->APB1ENR &= ~(1<<22))
#define I2C3_PCLK_DI()		(RCC->APB1ENR &= ~(1<<23))

/*
 * Peripheral clock enable disable Macros for SPI
 */

#define SPI1_PCLK_EN()		(RCC->APB2ENR |= (1<<12))	//set
#define SPI2_PCLK_EN()		(RCC->APB1ENR |= (1<<14))
#define SPI3_PCLK_EN()		(RCC->APB1ENR |= (1<<15))

#define SPI1_PCLK_DI()		(RCC->APB2ENR &= ~(1<<12))	//reset
#define SPI2_PCLK_DI()		(RCC->APB1ENR &= ~(1<<14))
#define SPI3_PCLK_DI()		(RCC->APB1ENR &= ~(1<<15))

/*
 * Peripheral clock enable and disable Macros for USART
 */

#define USART1_PCLK_EN()		(RCC->APB2ENR |= (1<<4))	//set
#define USART2_PCLK_EN()		(RCC->APB1ENR |= (1<<17))
#define USART3_PCLK_EN()		(RCC->APB1ENR |= (1<<18))
#define USART4_PCLK_EN()		(RCC->APB1ENR |= (1<<19))
#define USART5_PCLK_EN()		(RCC->APB1ENR |= (1<<20))
#define USART6_PCLK_EN()		(RCC->APB2ENR |= (1<<5))

#define USART1_PCLK_DI()		(RCC->APB2ENR &= ~(1<<4))	//reset
#define USART2_PCLK_DI()		(RCC->APB1ENR &= ~(1<<17))
#define USART3_PCLK_DI()		(RCC->APB1ENR &= ~(1<<18))
#define USART4_PCLK_DI()		(RCC->APB1ENR &= ~(1<<19))
#define USART5_PCLK_DI()		(RCC->APB1ENR &= ~(1<<20))
#define USART6_PCLK_DI()		(RCC->APB2ENR &= ~(1<<5))

/*
 * Peripheral clock enable disable Macros for SYSCFG
 */

#define SYSCFG_PCLK_EN()		(RCC->APB2ENR |= (1<<14))
#define SYSCFG_PCLK_DI()		(RCC->APB2ENR &= ~(1<<14))

/***********GPIO Reseting****************/

#define GPIOA_REG_RESET()		do{ (RCC->AHB1RSTR |= (1<<0));	(RCC->AHB1RSTR &= ~(1<<0)); } while(0)
#define GPIOB_REG_RESET()		do{ (RCC->AHB1RSTR |= (1<<0));	(RCC->AHB1RSTR &= ~(1<<0)); } while(0)
#define GPIOC_REG_RESET()		do{ (RCC->AHB1RSTR |= (1<<0));	(RCC->AHB1RSTR &= ~(1<<0)); } while(0)
#define GPIOD_REG_RESET()		do{ (RCC->AHB1RSTR |= (1<<0));	(RCC->AHB1RSTR &= ~(1<<0)); } while(0)
#define GPIOE_REG_RESET()		do{ (RCC->AHB1RSTR |= (1<<0));	(RCC->AHB1RSTR &= ~(1<<0)); } while(0)
#define GPIOF_REG_RESET()		do{ (RCC->AHB1RSTR |= (1<<0));	(RCC->AHB1RSTR &= ~(1<<0)); } while(0)
#define GPIOG_REG_RESET()		do{ (RCC->AHB1RSTR |= (1<<0));	(RCC->AHB1RSTR &= ~(1<<0)); } while(0)
#define GPIOH_REG_RESET()		do{ (RCC->AHB1RSTR |= (1<<0));	(RCC->AHB1RSTR &= ~(1<<0)); } while(0)
#define GPIOI_REG_RESET()		do{ (RCC->AHB1RSTR |= (1<<0));	(RCC->AHB1RSTR &= ~(1<<0)); } while(0)


/**********Some Generic API*************/

#define ENABLE			1
#define DISABLE			0
#define SET				1
#define RESET			0
#define GPIO_PIN_SET	1
#define GPIO_PIN_RESET	0

#include "stm32f4xx_gpio_driver.h"

#endif /* INC_STM32F407XX_H_ */
