/*
 * main.c
 *
 * Created: 8-apr-2016
 *  Author: Ashish kushwaha
 * Email: Ashish_kushwaha@outlook.com
 * Website:arm-tutorials.com
 */ 
#include <avr/io.h>
#include <util/delay.h>
#include "SPI.h"

int main(int argc, char **argv) {
	SPI_SlaveInit();
	char a=0;
	while(1){
		a=SPI_SlaveReceive(); //waiting for reception 
		ADMUX=(0b11000000|a); //selecting channels 
		ADCSRA=0b11000000;    //triggering th ADC module
		while(!(ADCSRA&(1<<ADIF))); //waiting for the complition
		SPDR=(ADC/4);           //scaling to 8 bit
	}
}

