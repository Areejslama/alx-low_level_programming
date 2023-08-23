#include <stdio.h>
#include "main.h"
/**
 * _strncpy-  function that copies a string
 * @dest:string to be copied
 * @src:string to be copied
 * @n:an integer
 *
 * Return:0 Always
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
			dest[i] = src[i]
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	return (dest);
}	
