#include <stdio.h>
#include "main.h"
/**
 * print_sign -that prints the sign of a number
 * @n:sign must be printed
 *
 * Return:1 if greater than zero and 0 if zero and -1 if less than zero
*/
int print_sign(int n)
{
	if(n > 0)
	{
	_putchar('+');
	return (1);
	}
	if(n = 0)
	{	
	_putchar('0');
	return (0);
	}
	if(n < 0)
	{	
	_putchar('-');
	return (-1);
	}
	_putchar('\n');
}
