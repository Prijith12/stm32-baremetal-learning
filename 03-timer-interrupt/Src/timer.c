#include "../Inc/timer.h"

void tim2_enable_clock(void){
    RCC_APB1ENR|=(1<<0);
}

void tim2_init(void){
    TIM2_CR|=(1<<2);
    TIM2_DIER|=(1<<0);
    TIM2_PSC=1599;
    TIM2_ARR=999;
    TIM2_CR|=(1<<0);
}

void enable_tim2_nvic(void){
NVIC_ISER0|=(1<<28);
}