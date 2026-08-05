#include "../Inc/gpio.h"


void enable_clock_gpiob_a(void){
    RCC_AHB1ENR|=(3<<0);
}

void gpiob9_set_output(void){
    GPIOB_MODER&=(~(1<<19));
    GPIOB_MODER|=(1<<18);
}

void gpioa0_set_pur(void){
    GPIOA_PUPDR&=(~(3<<0));
    GPIOA_PUPDR|=(1<<0);
}


int read_gpioa0_input_state(void){ 
    if(((GPIOA_IDR&(1<<0))==1)){
        return 0;
    }else{
       return 1;
    }
}

