#include "../Inc/gpio.h"

int main(void)
{
	gpioB_enable_clock();
	gpioA_enable_clock();
	gpioB9_set_output();
	gpioA_set_pur();
	
	while (1)
	{
		gpioB9_toggle();
	}
	
}
