#include <stdio.h>
#include "main.h"
/**
 * _isupper - checks for uppercase
 *@c:case to be checked
 *
 *Return:1 if c lowercase and 0 if otherwise
*/
int _isupper(int c)
{
        if (c >= 65 && c <= 90)
        {
                return (1);
        }
                return (0);
}
