/*
PROJECT Name: LED
Author      : Etiq Technologies
Created on  :16 April 2016
Description:  The Project is a demo project for the AT89S8253 programming.
              The code blinks the LEDs connected to  port2 of the AT89S8253 
							controller when switch at p0_1 pin pressed and hold.Since inbuilt 
							delay routine is not available a delay library using the timer                                                
					 		modules of the controller is created and attached with the project.
							only delays in milliseconds greater and multiples of 25 should be
							passed to the funcion.

*/


#include <REG8253.H>
#include "delay.h"           //delay header


void main()
{
	while(1)
	{
	P0=0xFF;                  //port P0 is made an input port
  
	if(P0_1==0)               //if switch connected to the 1st pin of port0 pressed the pin gets grounded
	{
	P2=0x00;  
	delay_ms(250);           //blinks the LEDs connected to the port2 with a delay
	P2=0xFF;
	delay_ms(250);
	}
	
	}
}
