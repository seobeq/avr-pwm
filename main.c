                                                                                         #include <avr/io.h>
#include <util/delay.h>
#include <stdio.h>

int main(){
DDRB |=(1<<PB1);
TCCR1A |=(1<<WGM11)|(1<<COM1A0)|(1<<COM1A1);                                   
TCCR1B |=(1<<WGM12)|(1<<WGM13)|(1<<CS11);
ICR1 = 39999;
int wait = 2000;
int i;   
while(1){
OCR1A =  ICR1 - 3000;
_delay_ms(wait);
OCR1A =  ICR1 - 4000;
_delay_ms(wait);
OCR1A =  ICR1 - 3000;
_delay_ms(wait);
OCR1A =  ICR1 - 2000;
_delay_ms(wait);
}
}     
