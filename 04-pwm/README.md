# pwm

## Registers

* `RCC_AHB1ENR` - Enable clock for GPIOB
* `RCC_APB1ENR` - Enable clock for TIM4
* `GPIOB_MODER` - Configure PB9 as alternate function mode
* `GPIOB_AFRH` - Select TIM4_CH4 alternate function for PB9
* `TIM4_CCMR2` - Configure TIM4 Channel 4 for PWM mode
* `TIM4_CCER` - Enable TIM4 Channel 4 output
* `TIM4_PSC` - Set the timer prescaler
* `TIM4_ARR` - Set the PWM period
* `TIM4_CCR4` - Set the PWM duty cycle
* `TIM4_CR1` - Enable TIM4

## Steps

1. Enable the clock for GPIOB using `RCC_AHB1ENR`
2. Enable the clock for TIM4 using `RCC_APB1ENR`
3. Configure PB9 as alternate function mode using `GPIOB_MODER`
4. Configure PB9 to use the TIM4 alternate function using `GPIOB_AFRH`
5. Configure TIM4 Channel 4 for PWM mode using `TIM4_CCMR2`
6. Enable the TIM4 Channel 4 output using `TIM4_CCER`
7. Set the timer prescaler using `TIM4_PSC`
8. Set the auto-reload value using `TIM4_ARR`
9. Set the compare value using `TIM4_CCR4` to control the PWM duty cycle
10. Enable TIM4 using `TIM4_CR1`
11. TIM4 automatically generates the PWM signal on PB9 using the configured period and duty cycle
12. The CPU remains in an infinite loop while the TIM4 peripheral continuously generates the PWM signal