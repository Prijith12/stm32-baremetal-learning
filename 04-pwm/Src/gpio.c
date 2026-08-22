#include "../Inc/gpio.h"

void gpioB_enable_clock(void){
    RCC_AHB1ENR|=(1<<1);
}

void set_mode_af(void){
    GPIOB_MODER&=(~(3<<18));
    GPIOB_MODER|=(1<<19);
}

void config_tim4ch4_gpiob9(void){
   GPIOB_AFRH&=(~(15<<4));
   GPIOB_AFRH|=(1<<5);
}