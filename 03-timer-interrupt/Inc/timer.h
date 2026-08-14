#include <stdint.h>

#define RCC_APB1ENR (*(volatile uint32_t *)(0x40023800+0x40))
#define TIM2 0x40000000
#define TIM2_CR (*(volatile uint32_t *)(TIM2))
#define TIM2_DIER (*(volatile uint32_t *)(TIM2+0x0C))
#define TIM2_SR (*(volatile uint32_t *)(TIM2+0x10))
#define TIM2_PSC (*(volatile uint32_t *)(TIM2+0x28))
#define TIM2_ARR (*(volatile uint32_t *)(TIM2+0x2C))
#define NVIC_ISER0 (*(volatile uint32_t *)(0xE000E100))

void tim2_enable_clock(void);
void tim2_init(void);
void enable_tim2_nvic(void);