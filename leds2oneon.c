/*______code for ligthing LED one at a time by controlling it by a switch starting with Red LED_______*/

#include<msp430.h>
#define MAX_LIMIT 65535

void delay(void);

int main()
{
P1DIR = 0x41;
P1OUT = 0x01;					//initially Red LED is on
while(1)
  {
		if((P1IN & 0x08) == 0)		//comparing the input response whether it turns low from its high(3.6volt) state
			{  
			   P1OUT ^= 0x41;	//using xor operation settle its alternative switching 
			   delay();		//this function simply matching with system speed along with msp response
			}
  }
return 0;
}

void delay(void)
{
	unsigned int i = 0;
	do
	  {
		i++;
	  }while(i != MAX_LIMIT);		//this limit maintaince system speed along with msp switching responce by reaching max value of unsigned int
}

