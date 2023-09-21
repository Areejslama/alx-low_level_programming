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

if (str != NULL)
{
return (NULL);
node = malloc(sizeof(list_t));
if (last == NULL)
{
return (NULL);
}
last->str = strdup(str);
last->len = strlen(str);
last->next = NULL;
if (head == NULL)
{
return (NULL);
}
else
{
node = *head;
while (node->next)
node = node->next;
node->next = last;
return (last);
}
}
return (NULL);
}
