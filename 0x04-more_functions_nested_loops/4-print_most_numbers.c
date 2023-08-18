#include <stdio.h>
#include "main.h"
/**
 *  print_most_numbers-  a function that prints the numbers from 0 to 9
 *
 *  Return:printed numbers
*/
void print_most_numbers(void)
{
	int s = 0;

	while(s <= 9)
	{
		if (s==2 || s == 4)
			continue;
		_putchar(s);
		s++;
	}
	_putchar('\n');
}
