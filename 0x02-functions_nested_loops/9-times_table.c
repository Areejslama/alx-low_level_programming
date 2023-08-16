#include <stdio.h>
#include "main.h"
/**
 * times_table- prints the 9 time tabels
 *
 * return:time table
*/
void times_table(void)
{
	int n , t, c , d;

	for (n = 0 ; n <= 9 ; n++)
	{	
		for (t = 1 ; t <= 9 ; t++)
		{	 
			if ((n <= 1 && n <= 9) || (t <= 2 && t <= 3))
			{
			for (c = 0; c <= 5; c++)
			{
			for (d = 0; d <= 9; d++)
			{
			_putchar(n + '0');
			_putchar(t + '0');
			_putchar(58);
			_putchar(c + '0');
			_putchar(d + '0');
			_putchar('\n');
					}
				}
			}
		}
	}
}
