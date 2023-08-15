#include <stdio.h>
#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 *@c:case must be checked
 *
 * return:1 c is true 0 otherwise
*/
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
