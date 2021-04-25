/**
 * @file  led.h
 * @author Shravya K N 
 * @brief Led Definitions
 * @version 0.1
 * @date 2021-04-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __LED_H__
#define __LED_H__

/**
 * Include files
 */ 
#include <avr/io.h>
#include <util/delay.h>
/**
 * Macro Definitions
 */
#define LED_ON 	(0x01)			/**< LED state HIGH */
#define LED_OFF	(0x00)			/**< LED state LOW */

#define LED_ON_TIME     (2000)  /**< LED ON time in milli seconds  */
#define LED_OFF_TIME    (2000)   /**< LED OFF time in milli seconds */

#endif /** __LED_H__ */