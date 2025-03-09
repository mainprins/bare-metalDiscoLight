#include <util/delay.h>
#include <arduino.h>

void setup()
{
 
  DDRB |= (1<<PB0);
  DDRB |= (1<<PB4);
  DDRB |= (1<<PB3); 
}

void loop()
{
  PORTB |= (1<<PB0);
  PORTB &= ~(1<<PB3);
  _delay_ms(1000);
  
  PORTB |= (1<<PB4);
  PORTB &= ~(1<<PB0);
  _delay_ms(1000);
  
  PORTB |= (1<<PB3);
  PORTB &= ~(1<<PB4);
  _delay_ms(1000);
}
