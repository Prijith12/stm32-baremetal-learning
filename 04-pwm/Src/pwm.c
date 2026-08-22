#include "../Inc/pwm.h"

void tim4_enable_clock(void){
    RCC_APB1ENR|=(1<<2);
}

void pwm_init(void){

    TIM4_CCMR2&=(~(7<<12));
    TIM4_CCMR2|=(3<<13);

    TIM4_CCER|=(1<<12);

    TIM4_PSC=1599;

    TIM4_ARR=10;

    TIM4_CCR4=1;

    TIM4_CR1|=(1<<0);
}
