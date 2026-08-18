# timer-interrupt

## Registers

* `RCC_AHB1ENR` - Enable clock for GPIOB
* `RCC_APB1ENR` - Enable clock for TIM2
* `GPIOB_MODER` - Configure PB9 as output
* `GPIOB_ODR` - Toggle the LED ON/OFF
* `TIM2_CR1` - Enable TIM2 and configure update event behavior
* `TIM2_DIER` - Enable TIM2 update interrupt
* `TIM2_SR` - Check and clear the update interrupt flag
* `TIM2_PSC` - Set the timer prescaler
* `TIM2_ARR` - Set the auto-reload value
* `NVIC_ISER0` - Enable TIM2 interrupt in the NVIC

## Steps

1. Enable the clock for GPIOB using `RCC_AHB1ENR`
2. Configure PB9 as an output using `GPIOB_MODER`
3. Enable the clock for TIM2 using `RCC_APB1ENR`
4. Configure TIM2 for an update event using `TIM2_CR1`
5. Enable the TIM2 update interrupt using `TIM2_DIER`
6. Set the timer prescaler using `TIM2_PSC`
7. Set the auto-reload value using `TIM2_ARR`
8. Enable TIM2 using `TIM2_CR1`
9. Enable the TIM2 interrupt in the NVIC using `NVIC_ISER0`
10. Wait in an infinite loop while the CPU handles timer interrupts
11. Inside the `TIM2_IRQHandler` interrupt handler:

    * Check the update interrupt flag using `TIM2_SR`
    * Toggle the LED using `GPIOB_ODR`
    * Clear the update interrupt flag using `TIM2_SR`
