#include "../Inc/gpio.h"
#include "../Inc/pwm.h"

int main(void)
{
   gpioB_enable_clock();
   tim4_enable_clock();
   set_mode_af();
   config_tim4ch4_gpiob9();
   pwm_init();
    /* Loop forever */
	for(;;);
}
