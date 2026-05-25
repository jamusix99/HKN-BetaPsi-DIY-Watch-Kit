// TODO: write code for watch
#define F_CPU 16000000L

#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
    DD0 |= (1 << PIN2);

    while(1)
    {
        PORT0 ^= (1 << PIN2);
        _delay_ms(500);
    }
}
