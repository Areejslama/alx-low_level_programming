#include <stdio.h>
#include "main.h"
/**
 * print_diagonal- function that draws a diagonal line
 * @n:number of times draw line
 *
 * Return:print if n 0 or less
*/
void print_diagonal(int n)
{
	int m;
	int space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (m = 1; m <= n ; m++)
		{
			for (space = 1 ; space <= m ; space++)
			{
				_putchar(' ');
				_putchar(92);
				_putchar('\n');
}	}	}	}
