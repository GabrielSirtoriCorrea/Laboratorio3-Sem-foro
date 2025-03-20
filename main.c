#define F_CPU 16000000L
#include <avr/io.h>
#include <util/delay.h>

// Entradas
// Botão para pedestres - PB0

// Saídas
// VeicVerde - PB1, VeicAmarelo - PB2, VeicVermelho - PB3 
// PedVerd - PB4, PedVermelho - PB5


int main(void){  
    // PINOUT
    unsigned long counter = 0;

    DDRB &= ~(1<<0);
    PORTB |= (1<<0);

    DDRB |= (1<<1);
    DDRB |= (1<<2);
    DDRB |= (1<<3);
    DDRB |= (1<<4);
    DDRB |= (1<<5);

    while (1){
        _delay_ms(1);
        counter++;

        PORTB &= ~(1<<2);
        PORTB &= ~(1<<3);
        PORTB |= (1<<1);
        _delay_ms(5000);

        PORTB &= ~(1<<1);
        PORTB &= ~(1<<3);
        PORTB |= (1<<2);
        _delay_ms(3000);

        PORTB &= ~(1<<1);
        PORTB &= ~(1<<2);
        PORTB |= (1<<3);
        _delay_ms(1000);

        /*if(!(PINB & (1<<PINB0))){
            PORTB |= (1<<3);
            PORTB |= (1<<4);
            PORTB &= ~(1<<1);
            PORTB &= ~(1<<5);
        }else{
            PORTB |= (1<<1);
            PORTB |= (1<<5);
            PORTB &= ~(1<<4);
            PORTB &= ~(1<<3);
        }*/


    }
}


