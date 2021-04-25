/**
 * @file project_main.c
 * @author Shravya K N
 * @brief 
 * @version 0.1
 * @date 2021-04-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "project-config.h"
#include "led.h"

/**
 * @brief Initialize all the Peripherals and pin configurations
 * 
 */
void peripheral_init(void)
{
	/* Configure LED Pin */
	DDRB |= (1<<LED_PIN);
	/* Configure Switch1 pin as Output */
	DDRD &= ~(1<<SW_PIN_0);
    SW_PORT |= (1<<SW_PIN_0);
	/* Configure Switch2 pin as Output */
    DDRD &= ~(1<<SW_PIN_1);
    SW_PORT |= (1<<SW_PIN_1);
}

/**
 * @brief Main function where the code execution starts
 * @return int Return 0 if the program completes successfully
 * @note PORTB0 is in sink config. i.e when pin is Low, the LED will turn OFF
 * @note PORTB0 is in sink config. i.e when pin is High, the LED will turn ON
 * @note PORTD2 and PORTD3 have pull up register. i.e if the pins are open, the pins are inherently high
 */
int main(void)
{
	/* Initialize Peripherals */
	peripheral_init();

	while(1){
		/* Check if both Switch is closed; i.e Pins 2 and 3 of port D is low*/
		if(!(PIND&(1<<SW_PIN_0)) && !(PIND&(1<<SW_PIN_1))){
			/* Turn on LED */
            LED_PORT |= (1<<LED_PIN);
            _delay_ms(2000);
        }
        else{
            LED_PORT &= ~(1<<LED_PIN);
			/* Turn off LED*/
            _delay_ms(2000);
        }
    }
	return 0;
}