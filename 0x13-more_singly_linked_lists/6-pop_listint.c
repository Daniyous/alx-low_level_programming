#include "lists.h"
/**
 * pop_listint - delete the head node
 *
 * @tmpe: temporary
 *
 * @head: double pointer to a head node
 *
 * Return: data of node
 */
int pop_listint(listint_t **head)
{
	listint_t *tmpe;
	int j;

	if (*head == NULL)
		return (0);
	tmpe = *head;
	j = (*head)->j;
	*head = (*head)->next;
	free(tmpe);
	return (j);
}
