/*_______program code to make Red LED turn on once when switch s2 pressed_____*/ 

#include<msp430.h>

int main()
{
P1DIR = 0;			//to ensure it is in I/P mode, by default P1DIR will be 0 state
while(1)
  {
	if((P1IN & 0x08) == 0)	//this infinite loop breaks only when input at pin p1.3 is 0 ie, on state
	    break;
  }
P1DIR = 1;
P1OUT = 1;			//directing output ie, Red LED turn on

return 0;
}
