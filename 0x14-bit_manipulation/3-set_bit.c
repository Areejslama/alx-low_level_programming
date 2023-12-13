#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* set_bit - that sets the value of a bit
* @n:a pointer
* @index:index
*
* Return:0 Always
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n = *n | (1 << index);

	return (1);
}

