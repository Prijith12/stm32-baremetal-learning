#include <stdint.h>

#define TIM4 0x40000800
#define RCC_APB1ENR (*(volatile uint32_t *)(0x40023800+0x40))
#define TIM4_CCMR2 (*(volatile uint32_t *)(TIM4+0x1C))
#define TIM4_CCER (*(volatile uint32_t *)(TIM4+0x20))
#define TIM4_PSC (*(volatile uint32_t *)(TIM4+0x28))
#define TIM4_ARR (*(volatile uint32_t *)(TIM4+0x2C))
#define TIM4_CCR4 (*(volatile uint32_t *)(TIM4+0x40))
#define TIM4_CR1 (*(volatile uint32_t *)(TIM4))

void tim4_enable_clock(void);
void pwm_init(void);