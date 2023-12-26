/*
 * Blinking_leds_with_DIO_PORT_drivers.c
 *
 * Created: 12/7/2023 8:43:33 PM
 * Author : AL_hamd
 */ 

#include "PORT.h"
#include "DIO.h"


int main(void)
{
    PORT_Init();
    while (1) 
    {
		DIO_DelayMs(1000);
		DIO_enumSetPin(DIO_enumPortA,DIO_enumPin0,DIO_enumLogicLow);
		DIO_enumSetPin(DIO_enumPortA,DIO_enumPin1,DIO_enumLogicHigh);
		DIO_DelayMs(1000);
		DIO_enumSetPin(DIO_enumPortA,DIO_enumPin0,DIO_enumLogicHigh);
		DIO_enumSetPin(DIO_enumPortA,DIO_enumPin1,DIO_enumLogicLow);
    }
}

