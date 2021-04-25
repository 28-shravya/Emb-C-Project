/**
 * @file project-config.h
 * @author Shravya K N 
 * @brief Configuration file to define pins and ports for the interfaced peripherals
 * @version 0.1
 * @date 2021-04-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __PROJECT_CONFIG_H__
#define __PROJECT_CONFIG_H__

/**
 * Macro Definitions
 */

#define F_CPU 16000000UL 	/**< Clock Frequency of MCU is 16 MHz */
#define LED_PORT (PORTB)    /**< LED Port Number */
#define LED_PIN  (PB0)  /**< LED Pin number  */
#define SW_PORT (PORTD) /**< SWITCH Port number */
#define SW_PIN_0 (PD2)  /**< SWITCH 0 Pin number */
#define SW_PIN_1 (PD3)  /**< SWITCH 1 Pin number */

#endif /* __PROJECT_CONFIG_H__ */