#include "activity1.h"
#include "activity2.h"
#include "activity3.h"
#include <util/delay.h>
#include <avr/io.h>

int main()
{
    Glow_LED();
    initADC();
    uint16_t temp;
    while(1)
    {
        temp = Read_TEMP(0);
        _delay_ms(200);
    }
    Temp_Level();
    return 0;
}