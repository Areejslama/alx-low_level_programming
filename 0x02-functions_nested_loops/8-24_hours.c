#include <stdio.h>
#include "main.h"
/**
 * Description: a function that prints every minute of the day
*/

void jack_bauer(void)
{
	int hr;
	int min;

	for(hr = 0 ; hr <= 23 ; hr++)
	{	
	_putchar(hr / 10 + '0'); 
	_putchar(hr % 10 + '0');
	_putchar(':');
	}
       for(min = 0 ; min <= 59 ; min++)
       {       
	_putchar(min / 10 + '0'); 
       _putchar(min % 10 + '0');
	_putchar('\n');
	}
}
