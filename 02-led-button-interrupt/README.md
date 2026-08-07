# led-button-interrupt

## Registers

- RCC_AHB1ENR - Enable clock for GPIOA (button) and GPIOB (LED)
- RCC_APB2ENR - Enable clock for the SYSCFG peripheral
- GPIOB_MODER - Configure PB9 as output
- GPIOB_ODR - Turn the LED ON/OFF
- GPIOA_IDR - Read the button state
- GPIOA_PUPDR - Enable internal pull-up resistor for PA0
- SYSCFG_EXTICR1 - Connect EXTI Line 0 to GPIOA Pin 0
- EXTI_IMR - Unmask (enable) EXTI Line 0 interrupt
- EXTI_RTSR - Enable interrupt on rising edge
- EXTI_FTSR - Enable interrupt on falling edge
- EXTI_PR - Clear the interrupt pending flag
- NVIC_ISER0 - Enable EXTI0 interrupt in the NVIC

## Steps

1. Enable clock for GPIOA and GPIOB using RCC_AHB1ENR
2. Configure PB9 as output using GPIOB_MODER
3. Enable internal pull-up for PA0 using GPIOA_PUPDR
4. Enable SYSCFG clock using RCC_APB2ENR
5. Connect PA0 to EXTI Line 0 using SYSCFG_EXTICR1
6. Unmask EXTI Line 0 using EXTI_IMR
7. Enable both rising and falling edge triggers using EXTI_RTSR and EXTI_FTSR
8. Enable EXTI0 interrupt in the NVIC using NVIC_ISER0
9. Wait in an infinite loop while the CPU handles interrupts
10. Inside the EXTI0 interrupt handler:
    - Read the button state using GPIOA_IDR
    - Turn the LED ON/OFF using GPIOB_ODR
    - Clear the interrupt pending flag using EXTI_PR