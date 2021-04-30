#ifndef USART_H_INCLUDED
#define USART_H_INCLUDED

/** \brief initialize the UART communication
 *
 * \param ubrr_value
 * \param
 * \return
 *
 */


void USARTInit(uint16_t ubrr_value);


char USARTReadChar();


void USARTWriteChar(uint8_t data);

#endif // USART_H_INCLUDED
