#include <stdio.h>
#include "main.h"
/**
 * _memcpy- copies memory area
 *@dest:a pointer
 *@src:mermory pointer
 *@n:an integer
 *
 * Return:dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i

	for (i = 0 ; i < n ; i++)
	{
		src[i] = dest[i];
	}
	return (dest);


