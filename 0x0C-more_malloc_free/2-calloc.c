#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _calloc- function that allocates memory for an array
 * @nmemb:an integer
 * @size:an integer
 *
 * Return:NULL
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	a = calloc(nmemb, size);
	if (a == NULL)
	{
		return (NULL);
	}
	else
		return (a);
}
