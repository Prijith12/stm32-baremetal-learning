#include "../Inc/gpio.h"

void gpioB_enable_clock(void){
    RCC_AHB1ENR|=(1<<1);
}

void gpioA_enable_clock(void){
    RCC_AHB1ENR|=(1<<0);
}

void gpioB9_set_output(void){
    GPIOB_MODER&=(~(3<<18));
    GPIOB_MODER|=(1<<18);
}

void gpioA_set_pur(void){
    GPIOA_PUPDR&=(~(3<<0));
    GPIOA_PUPDR|=(1<<0);
}

int read_button_state(void){
    if((GPIOA_IDR&(1<<0))==1){
        return 0;
    }else{
        return 1;
    }
}

void gpioB9_toggle(){
    if(read_button_state()==1){
        GPIOB_ODR|=(1<<9);
    }else{
        GPIOB_ODR&=(~(1<<9));
    }
}
