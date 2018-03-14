/*
 * CalcHCSR04.c
 *
 * Created: 2/27/2018 9:08:12 PM
 *  Author: Moustafa
 */ 

#define F_CPU 8000000UL
#include <avr/io.h>
#include <avr/interrupt.h>
#include <math.h>
#include "util/delay.h"
#include "Ultrasonic.h"
#include <stdio.h>
#include <util/delay.h>

int main(void)
{
     SetupUltrasonic();
     sei();                  // Enabling Global interrupt

    while(1)
    {
        SendTrigger();
        ReceiveEcho();
        RangeDetection(1,50);     // specify min and max range in centimeter makes led on
        _delay_ms(70);                // Delay for each measurement cycle
	   
    }
}
