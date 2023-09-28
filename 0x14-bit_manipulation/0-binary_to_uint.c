#include "main.h"
#include <string.h>
/**
 * binary_to_uint- converts a binary number to an int
 * @b:string
 * Return:0
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int conv = 0;
unsigned int i = 0;
unsigned int sum = 0;

if (b == NULL)
{
return (0);
}
conv = strlen(b);
while (conv--)
{
if (b[conv] != 48 && b[conv] != 49)
return (0);
if (b[conv] == 49)
sum += 1 << i;
i++;
}
return (sum);
}
