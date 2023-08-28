#include <stdio.h>
#include "main.h"
/**
 * _strchr- locates a character in a string
 * @s:a string
 * @c:a character
 *
 * Return:0 Always
*/
char *_strchr(char *s, char c)
{
	while (*s)

	if (*s != c)
	{
		s++;
	}
	else
	{
		return (s);
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
