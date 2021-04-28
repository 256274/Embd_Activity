
#include <avr/io.h>
#include<util/delay.h>

#define TEMP_LEVEL OCR1A

void Temp_Level(void)
{
    //Timer/Counter registers
    TCCR1A|=(1<<COM1A1)|(1<<WGM10)|(1<<WGM11); // Fast PWM and non-inverting mode
    TCCR1B|=(1<<WGM12)|(1<<CS10)|(1<<CS11); // 10-bit and prescalar set to 64
    DDRB|=(1<<PB1); // Pin B1 is output  pin
    // Insert code

    while(1)
    {
        TEMP_LEVEL=200; //20 degree C
        _delay_ms(1000);
        TEMP_LEVEL=500; //25 degree C
        _delay_ms(1000);
        TEMP_LEVEL=700; //29 degree C
        _delay_ms(1000);
        TEMP_LEVEL=1024; //33 degree C
        _delay_ms(1000);
    }
}

