#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked- function that allocates memory
 * @b:an integer
 *
 * Return:pointer
*/
void *malloc_checked(unsigned int b)
{
	char *a;

	a = malloc(b);

	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
