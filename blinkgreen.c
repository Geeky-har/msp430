/*_________c program to blink the green led in MSP430 launchpad_______*/

#include<msp430.h>
#define MAX_LIMIT 10000

void delay(void);

main()
{
	P1DIR = 0x40;
	while(1)
	{		
	  delay();
	  P1OUT ^= 0x40;
	}
}

void delay(void)
{
	unsigned int i = 0;
	do
	   {
		i++;
	   }while(i != MAX_LIMIT);
}


