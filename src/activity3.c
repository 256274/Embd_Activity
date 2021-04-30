
#include <avr/io.h>
#include<util/delay.h>

#define TEMP_LEVEL OCR1A

uint8_t Temp_Level(uint16_t Select_Temp)
{
    //Timer/Counter registers
    TCCR1A|=(1<<COM1A1)|(1<<WGM10)|(1<<WGM11); // Fast PWM and non-inverting mode
    TCCR1B|=(1<<WGM12)|(1<<CS10)|(1<<CS11); // 10-bit and prescalar set to 64
    DDRB|=(1<<PB1); // Pin B1 is output  pin
    // Insert code

   if((Select_Temp>=0 && (Select_Temp<=200)))
        {
            TEMP_LEVEL=205; //20 degree C
            return 20;
        }
    else if((Select_Temp>=210 && (Select_Temp<=500)))
        {
            TEMP_LEVEL=410; //20 degree C
            return 25;
        }
    else if((Select_Temp>=510 && (Select_Temp<=700)))
        {
            TEMP_LEVEL=717; //20 degree C
            return 29;
        }
    else
        {
            TEMP_LEVEL=973; //20 degree C
            return 33;
        }

}

