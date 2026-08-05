#include <stdint.h>

#define SYSCFG_EXTICR1 (*(volatile uint32_t *)(0x40013800+0x08))
#define RCC_APB2ENR (*(volatile uint32_t *)(0x40023800+0x44))
#define NVIC_ISER0 (*(volatile uint32_t *)(0xE000E100))
#define EXTI 0x40013C00
#define EXTI_IMR (*(volatile uint32_t *)(EXTI+0x00))
#define EXTI_RTSR (*(volatile uint32_t *)(EXTI+0x08))
#define EXTI_FTSR (*(volatile uint32_t *)(EXTI+ 0x0C))
#define EXTI_PR (*(volatile uint32_t *)(EXTI+0x14))

void enable_clock_syscfg(void);
void syscfg_gpioa0_exti0(void);
void enable_exti0_nvic(void);
void exti0_init(void);