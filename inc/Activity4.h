#ifndef USART_H_INCLUDED
#define USART_H_INCLUDED

/** \brief initialize the UART communication
 *
 * \param ubrr_value 
 * \return no return
 *
 */


void USARTInit(uint16_t ubrr_value);

/** \brief reads the temperature value
 *
 * \param no parameter
 * \return returns a character
 *
 */

char USARTReadChar();

/** \brief Writes a value to the MCU
 *
 * \param data, value that is to be displayed
 * \return no return
 *
 */

void USARTWriteChar(uint8_t data);

#endif // USART_H_INCLUDED
