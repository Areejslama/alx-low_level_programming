#include <stdio.h>
#include "main.h"
/**
 * string_toupper- changes all letters of a string to uppercase
 * @n:a string to change
 *
 * Return:uppercase
*/
char *string_toupper(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = 32;
			i++;
		}
		}
		return (n);
}
