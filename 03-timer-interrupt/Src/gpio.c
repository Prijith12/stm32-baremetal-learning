#include "../Inc/gpio.h"

void gpioB_enable_clock(void){
    RCC_AHB1ENR|=(1<<1);
}

void gpioB9_set_output(void){
    GPIOB_MODER&=(~(3<<18));
    GPIOB_MODER|=(1<<18);
}

void gpiob9_toggle(void){
    GPIOB_ODR^=(1<<9);
}