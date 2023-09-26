#include "lists.h"
/**
 * pop_listint- delet the head node
 * @head:pointer
 * Return:0
*/
int pop_listint(listint_t **head)
{

	listint_t *temp;
	int data;

	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;
	data = temp->n;

	*head = temp->next;
	free(temp);
	return (data);
}
