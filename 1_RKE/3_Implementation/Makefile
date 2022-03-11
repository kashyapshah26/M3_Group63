CC=arm-none-eabi-gcc
MACH=cortex-m4
CFLAGS= -c -mcpu=$(MACH) -mthumb -mfloat-abi=soft -std=gnu11 -Wall -O0
LDFLAGS= -nostdlib -T stm32_ls.ld -Wl,-Map=finalled.map
source= main.c stm32f4xx_gpio_driver.c stm32_startup.c
all:main.o stm32f4xx_gpio_driver.o stm32_startup.o finalled.elf

stm32f4xx_gpio_driver.o:stm32f4xx_gpio_driver.c
	$(CC) $(CFLAGS) -o $@ $^
	
main.o:main.c
	$(CC) $(CFLAGS) -o $@ $^
	
finalled.elf:main.o stm32f4xx_gpio_driver.o stm32_startup.o
	$(CC) $(LDFLAGS) -o $@ $^
	
stm32_startup.o:stm32_startup.c
	$(CC) $(CFLAGS) -o $@ $^
	
clean:
	rm -rf *.o *.elf