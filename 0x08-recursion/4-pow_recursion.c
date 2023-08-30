#include <stdio.h>
#include "main.h"
/**
 * _pow_recursion- returns the value of x raised to the power of y
 * @x:input
 * @y:input
 *
 * Return:-1
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		_pow_recursion(x * (x-1));
	}
	return (0);
}
