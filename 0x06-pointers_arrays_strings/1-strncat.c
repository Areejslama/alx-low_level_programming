#include <string.h>
#include "main.h"

/**
 * _strncat-  function that concatenates two strings
 * @dest:string to be cat
 * @src :string to be cat
 * @n :an integer
 *
 * Return:pointer to string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int i;

	for (i = 0 ; i < n && src != '\0' ; i++)
	{
		dest[len + i] = src[i];
		src++;
	}
	dest[len + i] = '\0';
	return (dest);
}
