#include "lists.h"
/**
 * insert_dnodeint_at_index -  get node at the index
 * @h: list
 * @idx: num of node
 * @n: value
 * Return: node at index
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current;
	unsigned int i = 0;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if ((*h) == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		(*h) = new;
		return (new);
	}
	if (idx == 0)
	{
		new->next = (*h)->next;
		new->prev = NULL;
		return (new);
	}

	current = (*h);
	while (current != NULL)
	{
		if (i == idx)
		{
			new->next = current->next;
			new->prev = current->prev;
			return (new);
		}
		current = current->next;
		i++;
	}
	return (NULL);
}