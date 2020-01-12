/*
 * UART_RAL.h
 *
 *  Created on: Aug 14, 2018
 *      Author: Mohab
 */

#ifndef RAL_UART_RAL_H_
#define RAL_UART_RAL_H_




//#define DEVICE_1			DEVICE_1_NAME_USEING_UART
//#define DEVICE_2			DEVICE_2_NAME_USEING_UART
//#define DEVICE_1_UART       UART_USED_FOR_DEVICE_1
//#define DEVICE_2_UART	    UART_USED_FOR_DEVICE_2
//#define DEVICE_1_UART_BAUDRATE   DEVICE_1_BAUDRATE
//#define DEVICE_2_UART_BAUDRATE   DEVICE_2_BAUDRATE
//#define DEVICE_3_NAME_USEING_UART	  UART_USED_FOR_DEVICE_3

#define UART1_RX_DATA_REG						PORTD
#define UART1_RX_DIRECTION_REG					DDRD
#define UART1_RX_PIN_NUM						2

#define UART1_TX_DATA_REG						PORTD
#define UART1_TX_DIRECTION_REG					DDRD
#define UART1_TX_PIN_NUM						3


#define UART2_RX_DATA_REG						PORTH
#define UART2_RX_DIRECTION_REG					DDRH
#define UART2_RX_PIN_NUM						0

#define UART2_TX_DATA_REG						PORTH
#define UART2_TX_DIRECTION_REG					DDRH
#define UART2_TX_PIN_NUM						1




#endif /* RAL_UART_RAL_H_ */
