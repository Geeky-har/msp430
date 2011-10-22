/*____code for making Red LED turn on only as lng as switch s2 keeping pressed____*/

#include<msp430.h>

int main()
{
P1DIR = 1;
while(1)
  {
	if((P1IN & 0x08) == 0)	//checks whether switch is pressed by logic operaton
	    P1OUT = 1;
	else
	    P1OUT = 0;
  }
return 0;
}
