#include <stdio.h>
#include "main.h"
/**
 * _strpbrk- searches a string for any of a set of bytes
 * @s:a string
 * @accept:a string
 *
 * Return:set of bytes
*/
char *_strpbrk(char *s, char *accept)
{

	while (*s != '\0')
	{
		const char *a = accept;

		while (*a != '\0')
		{
			if (*a == *s)
			return (s);
			a++;
		}
		s++;
	}
	return (NULL);
}
