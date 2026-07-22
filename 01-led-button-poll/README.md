# led-button-poll

## Registers
- RCC_AHB1ENR-to enable clock for the pins b & a
- GPIOB_MODER-to make the pin as output for the led
- GPIOB_ODR-to give the out put high and low
- GPIOA_IDR-to read the high/low state in the port a for the button state
- GPIOA_PUPDR-to set the internal pull up resistor for the port a

## Steps
1. Enable clock for GPIOA (button) and GPIOB (LED) via RCC
2. Set LED pin (PB9) as output using MODER
3. Enable internal pull-up on button pin (PA0) using PUPDR
4. Read button state via IDR
5. Set LED output (ODR) based on button state
