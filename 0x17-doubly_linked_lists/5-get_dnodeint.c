#include "lists.h"
/**
 * get_dnodeint_at_index -  get node at the index
 * @head: list
 * @index: num of node
 * Return: node at index
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i = 0;


	current = head;
	while (current != NULL)
	{
		if (i == index)
			return (current);
		current = current->next;
		i++;
	}
	return (NULL);
}
