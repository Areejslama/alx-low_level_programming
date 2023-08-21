#include <stdio.h>
#include "main.h"
/**
 * rev_string- function that reverse a string
 * @s:string to be reversed
 *
 * Return:0 Always (success)
*/
void rev_string(char *s)
{
	char rev = s [0]
	int count = 0;
	int r;

	while (s[count] != '\0')
	{
		count++;
	}
	for (i = 0 ; i < count ; i++)
	{
		count --;
		rev = s[i];
		s[i] = s[count];
		s[count] = rev;
}
