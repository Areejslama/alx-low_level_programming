#include <stdio.h>
#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 *@c:case must be checked
 *
 *return:1 if alpha a letter lowercase or uppercase and 0 if not
*/
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);	
	if (c >= 65 && c <= 90)
		return (1);
	else
	       	return (0);
}
