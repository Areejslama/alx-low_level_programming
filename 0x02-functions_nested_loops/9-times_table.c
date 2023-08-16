#include <stdio.h>
#include "main.h"
/**
 * times_table- prints the 9 time tabels
 *
 * return:time table
*/
void times_table(void)
{
	int n , t , prod;

	for (n = 0 ; n <= 9 ; n++)
	{
		_putchar('0');
		for (t = 1 ; t <= 9 ; t++)
		{
			_putchar(',');
			_putchar(' ');

			prod = n * t
			 
			if(prod <= 9)
				_putchar(' ');
			else
				_putchar(prod / 10 + 48);
				_putchar(prod % 10 + 48);

				putchar('\n');
			}
}
