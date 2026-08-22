#include <stdint.h>

#define RCC_AHB1ENR (*(volatile uint32_t *)(0x40023800+0x30))
#define GPIOB_MODER (*(volatile uint32_t *)(0x40020400+0x00))
#define GPIOB_AFRH (*(volatile uint32_t *)(0x40020400+0x24))

void gpioB_enable_clock(void);
void set_mode_af(void);
void config_tim4ch4_gpiob9(void);