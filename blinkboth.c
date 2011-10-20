/* __________c program to blink both LEDs Red and Green simultaneously in MSP430 Launchpad (TM) _________*/


#include<msp430.h>
#define MAX_LIMIT 10000

void delay(void);

int main()
{
	P1DIR = 0x41;
	while(1)
	{ 
	  P1OUT ^= 0x40;	
	  delay();
 	  P1OUT ^= 0x01;
	  delay();
	}
return 0;
}

void delay(void)
{
	unsigned int i = 0;
	do
	  {
		i++;
	  }while(i != MAX_LIMIT);
}


