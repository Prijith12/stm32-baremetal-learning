#include "../Inc/gpio.h"
#include "../Inc/exti.h"

void EXTI0_IRQHandler();

int main(void)
{
   enable_clock_gpiob_a();
   gpiob9_set_output();
   gpioa0_set_pur();
   enable_clock_syscfg();
   syscfg_gpioa0_exti0();
   exti0_init();
   enable_exti0_nvic();

	for(;;);
}

void EXTI0_IRQHandler(){
    if(read_gpioa0_input_state()==1){
        GPIOB_ODR|=(1<<9);
    }else{
        GPIOB_ODR&=(~(1<<9));
    }
    EXTI_PR|=(1<<0);
}