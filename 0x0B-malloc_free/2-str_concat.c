#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat- concatenates two strings
 * @s1:string
 * @s2:string
 * Return:pointer to newlly allocated
*/
char *str_concat(char *s1, char *s2)
{
int i;
int len1 = 0;
int len2 = 0;
char *a;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (i = 0; s1[i] != '\0'; i++)
len1++;
for (i = 0 ; s2[i] != '\0' ; i++)
len2++;

a = malloc((sizeof(char) * (len1 + len2) +1));
if (a == NULL)
{
return (NULL);
}
for (i = 0 ; s1[i] ; i++)
a[i] = s1[i];
for (i = 0 ; s2[i] ; i++)
a[len1 + i] = s2[i];

return (a);
}
