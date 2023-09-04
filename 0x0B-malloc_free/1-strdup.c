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
	int num;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0' ; i++)
		num++;

	copy = malloc(sizeof(char) * num + 1);
	if (copy == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0' ; i++)
		copy[i] = str[i];
	copy++;
	return (copy);
}
