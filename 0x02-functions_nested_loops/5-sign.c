#include <stdio.h>
#include "main.h"
/**
 * print_sign -that prints the sign of a number
 * @n:number must be printed
 *
 * Return:1 if greater than zero and 0 if zero and -1 if less than zero
*/
int print_sign(int n)
{
	if(n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n == 0)
	{	
	_putchar(48);
	return (0);
	}
	else
	{	
	_putchar(45);
	return (-1);
	}

}
