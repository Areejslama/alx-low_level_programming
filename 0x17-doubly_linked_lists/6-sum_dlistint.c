#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_dlistint-  returns the sum of all the data
 * @head:pointer
 * Return:sum
*/
int sum_dlistint(dlistint_t *head)
{
int sum = 0;

while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
