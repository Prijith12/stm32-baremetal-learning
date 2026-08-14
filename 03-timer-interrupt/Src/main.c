#include "../Inc/gpio.h"
#include "../Inc/timer.h"

void TIM2_IRQHandler(){
    if((TIM2_SR&(1<<0))==1){
        gpiob9_toggle();
        TIM2_SR&=(~(1<<0));
    }
}

int main(void)
{
    gpioB_enable_clock();
    gpioB9_set_output();

    tim2_enable_clock();
    tim2_init();

    enable_tim2_nvic();

    /* Loop forever */
	for(;;);
}

