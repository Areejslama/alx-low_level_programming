#include <stdio.h>
#include "main.h"
/**
 * _strlen- return the length of string
 * @s:parameter
 *
 * Return:length of string
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
