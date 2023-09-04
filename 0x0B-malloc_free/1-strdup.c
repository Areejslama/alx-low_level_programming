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
	int len;
	int num;

	if (str == NULL)
	{
		return (NULL);
	}
	for (len = 0 ; str[len] != '\0' ; len++)
		num++;

	copy = malloc((sizeof(char) * num) + 1);
	if (copy == NULL)
	{
		return (NULL);
	}
	copy[len] = str[len];
	return (copy);
}
