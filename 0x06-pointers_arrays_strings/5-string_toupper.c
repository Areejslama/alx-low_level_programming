#include <stdio.h>
#include "main.h"
/**
 * string_toupper- changes all letters of a string to uppercase
 * @str:a string to change
 *
 * Return:uppercase
*/
char *string_toupper(char *str)
{
	int i;

	while (str[i] != '\0' )
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			i++;
		}
		}
		return (str);
}
