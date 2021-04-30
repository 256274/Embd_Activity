#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>


#define INTERRUPT PORTD
#define LED PORTB
#define INTERRUPT_CONTROL EICRA

unsigned volatile SEAT_BUTTON = 0;
unsigned volatile HEATER_BUTTON = 0;

void Glow_LED(void)
{

DDRB|=(1<<PB0); // set B0 for LED

DDRD&=~(1<<PD2); //clear bit
INTERRUPT|=(1<<PD2); // set bit

DDRD&=~(1<<PD3); //clear bit
INTERRUPT|=(1<<PD3);

INTERRUPT_CONTROL|=(1<<ISC01)|(1<<ISC11);   // Enable Interrupt when falling edge of Interrupt occurs
EIMSK|=(1<<INT0)|(1<<INT1); // External Interrupt masking for interrupt vector

sei();


  while(1){
            if(SEAT_BUTTON==1 && HEATER_BUTTON==1) // press switch
            {
            LED|=(1<<PB0);      // Glow LED
            _delay_ms(1000);

            //SEAT_BUTTON = 0;
            //HEATER_BUTTON = 0;
            break;
            }
            else{
            LED&=~(1<<PB0);  // OFF LED
            _delay_ms(100);

            }
   }
}

ISR(INT0_vect)
{
    SEAT_BUTTON = 1;
}

ISR(INT1_vect)
{
    HEATER_BUTTON = 1;
}
