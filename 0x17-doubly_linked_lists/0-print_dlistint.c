#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_dlistint- print a list of elements
 * @h:pointer
 *
 * Return:0 Always
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
