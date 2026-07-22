#include <stdint.h>

#define RCC_AHB1ENR (*(volatile uint32_t *)(0x40023800+ 0x30))
#define GPIOB_MODER (*(volatile uint32_t *)(0x40020400+0x00))
#define GPIOB_ODR (*(volatile uint32_t *)(0x40020400+0x14))
#define GPIOA_IDR (*(volatile uint32_t *)(0x40020000+0x10))
#define GPIOA_PUPDR (*(volatile uint32_t *)(0x40020000+0x0C))

void gpioB_enable_clock(void);
void gpioA_enable_clock(void);
void gpioB9_set_output(void);
void gpioA_set_pur(void);
int read_button_state(void);
void gpioB9_toggle(void);