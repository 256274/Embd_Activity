#include "Activity1.h"
#include "Activity2.h"
#include "Activity3.h"
#include "Activity4.h"
#include <util/delay.h>
#include <avr/io.h>

int main()
{
    uint8_t Temperature=0;
    Glow_LED(); // Glow LED when heater is turned ON
    initADC();
    uint16_t temp;
    while(1)
    {
     temp = Read_TEMP(0);
     _delay_ms(10);
     Temperature=Temp_Level(temp);
     USARTWriteChar(Temperature);
     _delay_ms(100);
    }
    return 0;
}
