#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat- concatenates two strings
 * @s1:input string
 * @s2:input string
 * @n:number of bytes to be concatenates in strings
 *
 * Return:NULL
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i;
unsigned int len1 = 0;
unsigned int len2 = 0;
char *output;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
for (i = 0; s1[i]; i++)
len1++;
for (i = 0; s2[i]; i++)
len2++;
output = malloc(sizeof(char) * len1 + n + 1);
if (output == NULL)
{
return (NULL);
}
if (n >= len2)
{
for (i = 0; s1[i] != '\0' ; i++)
output[i] = s1[i];
for (i = 0; s2[i] != '\0' ; i++)
output[len1 + i] = s2[i];
output[len1 + i] = '\0';
}
else
{
for (i = 0; s1[i] != '\0' ; i++)
output[i] = s1[i];
for (i = 0; i < n ; i++)
output[len1 + i] = s2[i];
output[len1 + i] = '\0';
}
return (output);
}
