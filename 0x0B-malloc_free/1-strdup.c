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
	char *ptr;
	int num;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; str[i] != '\0' ; i++)
		num++;

	ptr = malloc(sizeof(char) * num + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; str[i] ; i++)
		ptr[i] = str[i];
	return (ptr);
}
