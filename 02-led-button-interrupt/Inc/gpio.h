#include <stdint.h>

#define RCC_AHB1ENR (*(volatile uint32_t *)(0x40023800+0x30))
#define GPIOB_MODER (*(volatile uint32_t *)(0x40020400+0x00))
#define GPIOA_PUPDR (*(volatile uint32_t *)(0x40020000+0x0C))
#define GPIOB_ODR (*(volatile uint32_t *)(0x40020400+0x14))
#define GPIOA_IDR (*(volatile uint32_t *)(0x40020000+0x10))

void enable_clock_gpiob_a(void);
void gpiob9_set_output(void);
void gpioa0_set_pur(void);
int read_gpioa0_input_state(void);
