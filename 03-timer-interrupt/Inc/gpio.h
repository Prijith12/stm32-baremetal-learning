#include <stdint.h>

#define RCC_AHB1ENR (*(volatile uint32_t *)(0x40023800+ 0x30))
#define GPIOB_MODER (*(volatile uint32_t *)(0x40020400+0x00))
#define GPIOB_ODR (*(volatile uint32_t *)(0x40020400+0x14))

void gpioB_enable_clock(void);
void gpioB9_set_output(void);
void gpiob9_toggle(void);