#include <stdio.h>
#include "main.h"
/**
 * _sqrt_recursion- returns the natural square root of a number
 * @n:parameter
 *
 * Return:-1
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * _sqrt_recursion(n, (n - 1)));
	}
	return (0);
}
