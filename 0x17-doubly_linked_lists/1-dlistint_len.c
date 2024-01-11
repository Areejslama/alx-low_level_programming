#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;
	
	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
