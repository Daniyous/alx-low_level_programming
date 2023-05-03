#include "lists.h"

/**
 * listint_len - function to return number of elements
 *
 * @h: pointer to head
 *	used to traverse the listl
 *
 * Return: number of elements / nodes
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *tmp;
	int j = 0;

	tmp = h;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		j++;
	}
	return (j);
}
