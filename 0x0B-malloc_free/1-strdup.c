#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *  _strdup- returns a pointer to a newly allocated space in memory
 *@str:parameter
 *  Return:NULL
*/
char *_strdup(char *str)
{
	char *copy;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; str[len] != '\0' ; len++)
		len++;

	copy = malloc((sizeof(char) * len) + 1);
	if (copy == NULL)
	{
		return (NULL);
	}
	for (i = 0; copy[i] != '\0' ; i++)
		copy[i] = str[i];
	return (copy);
}
