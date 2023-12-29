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
	dlistint_t *current, *new;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if ((*h) == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		(*h) = new;
		return (new); }
	current = (*h);
	while (current != NULL)
	{
		if (i == idx)
		{
			new->next = current;
			new->prev = current->prev;

			if (current->prev != NULL)
				current->prev->next = new;
			else
				(*h) = new;
			current->prev = new;
			return (new); }
		current = current->next;
		i++; }
	if (i == idx)
	{
		current = (*h);
		while (current->next != NULL)
			current = current->next;
		current->next = new;
		new->prev = current;
		new->next = NULL;
		return (new); }
		free(new);
		return (NULL);
}
