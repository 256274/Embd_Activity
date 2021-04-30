#include<avr/io.h>

#ifndef ACTIVITY3_H_INCLUDED
#define ACTIVITY3_H_INCLUDED

/** \brief It returns
 *
 * \param A 16-bit number which is used to select the temperature level
 * \return returns a 8-bit number
 *
 */

uint8_t Temp_Level(uint16_t Select_Temp);

#endif // ACTIVITY3_H_INCLUDED
