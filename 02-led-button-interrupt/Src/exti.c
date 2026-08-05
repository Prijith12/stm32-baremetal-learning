#include "../Inc/exti.h"

void enable_clock_syscfg(void){
    RCC_APB2ENR|=(1<<14);
}

void syscfg_gpioa0_exti0(void){
    SYSCFG_EXTICR1&=(~(15<<0));
}

void enable_exti0_nvic(void){
    NVIC_ISER0|=(1<<6);
}

void exti0_init(void){
    EXTI_IMR|=(1<<0);
    EXTI_RTSR|=(1<<0);
    EXTI_FTSR|=(1<<0);
    
}