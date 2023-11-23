#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint- convert binary to int
 * @b:char to be converted
 * Return:0 Always
*/
unsigned int binary_to_uint(const char *b)
{
	int n;
	unsigned int i = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (n = 0; b[n]; n++)
	{
	if (b[n] < '0' || b[n] > '1')
		return (0);
	i = i * 2 + (b[n] - '0');
	}
	return (i);
}
