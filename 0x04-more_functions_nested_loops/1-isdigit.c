#include <stdio.h>
#include "main.h"
/**
 * _isdigit- checks for a digit
 * @c:a digit must be checked
 *
 * Return:1 if is a digit 0 if not
*/
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
