#include <stdio.h>
#include "main.h"
/**
 * string_toupper- changes all letters of a string to uppercase
 * @p:a string to change
 *
 * Return:uppercase
*/
char *string_toupper(char *p)
{
	int a = 0;

	while (p[a])
	{
		if (p[a] >= 97 && p[a] <= 122)
		{
			p[a] -= 32;
		}

		a++;
	}

	return (p);
}
