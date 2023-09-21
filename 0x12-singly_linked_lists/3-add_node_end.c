#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * *add_node_end-  adds a new node at the end of a list
 * @head:first node
 * @str:a string
 * Return:element address or null
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *node;
list_t *last;
unsigned int n = 0;
unsigned int r = 0;

node = malloc(sizeof(list_t));
if (node == NULL)
{
return (NULL);
}
node->str = strdup(str);
for (n = 0; str[n]!= '\0'; n++)
	r++;
node->len = r;
node->next = NULL;
last = *head;
if (last == NULL)
{
	*head = node;
}
else
{
while (last->next != NULL)
last = last->next;
last->next = node;
}
return (*head);
}
