/*________c program to blink led red in the MSP430 launchpad_______*/

#include<msp430.h>
#define MAX_LIMIT 10000

void delay(void);

int main()
{
	P1DIR = 1;
	while(1)
	{	
	  delay();
	  P1OUT ^= 1;
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


