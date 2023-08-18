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
	int x;
	int y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0 ; x < n ; x++)
		{
			for (y = 0 ; y < x ; x++)
				_putchar(' ');
		}
			_putchar('92');
			_putchar('\n');			
