#include <stdio.h>
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
	int dest_len = 0;
	int src_len = 0;

	for (n = 0 ; dest[n] ; n++)
		dest_len++;
	for (n = 0 ; src[n] ; n++)
		src_len++;
	dest[n] = src[n];
	return (dest);
}
