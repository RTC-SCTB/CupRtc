#include "CMSIS/stm32f10x.h"
#include "SPEEXPARSER/conspeex.h"
#include <stdint.h>


RecData temp;

int main(void)
{
	
	
	char *data0 = "<STATE 01 23E7>";
	char *data1 = "<TEXT2 &Hello World& 992A>                 ";
	char *data2 = "<SPEEX 0049 000739CE1E9D66000039CE70001CE738000E739C 36FD>                                                              ";
	char *data3 = "<BLOCK 0161 573D>                         ";
	
	
	temp = parsing(data2, 100);

	while(1)
	{
		;		
	}
	
}