//BUTTON0 -> PB01
//LED0 -> PB03
//LED1 -> PX22
//LED2 -> PB02
//LED3 -> PB06
//POWER_LED -> PC04
//STATUS_LED -> PC05
//The two lasts are the dual-LED.

#include <asf.h>

int main (void)
{
	/* Insert system clock initialization code here (sysclk_init()). */	
	board_init();	
	sysclk_init();
	//turn on the led 1 2 3
	gpio_set_pin_low(AVR32_PIN_PX22);
	gpio_set_pin_low(AVR32_PIN_PB02);
	gpio_set_pin_low(AVR32_PIN_PB06);
	gpio_set_pin_low(AVR32_PIN_PC04);
	gpio_set_pin_low(AVR32_PIN_PC05);
	/* Insert application code here, after the board has been initialized. */
	while(1)
	{
		//blinking the led0
		gpio_toggle_pin(AVR32_PIN_PB03);
		delay_ms(500);
	};
	return 0;
}
