#include <stdio.h>
#include "main.h"
/**
 * _toupper- changes all lowercase letters of a string to uppercase
 * @*:a char
 *
 * Return:uppercase
*/
char *string_toupper(char *str)
{
	int i;

	for(i = 0 ; str[i] != '\0' ; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{	
			str[i] = str[i] - 32;
		}
		}
		return (0);
}
