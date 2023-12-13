#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* get_bit - function that returns the value of a bit 
* @n:number
* @index:index
*
* Return:0 Always
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	n = n >> index;

	if ((n & 1) == 1)
	{
		return (1);
	}
	else
	{
	return (0);
	}

}
