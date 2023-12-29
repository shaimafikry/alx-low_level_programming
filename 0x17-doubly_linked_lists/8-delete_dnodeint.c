#include "lists.h"
/**
 * get_dnodeint_at_index -  get node at the index
 * @head: list
 * @index: num of node
 * Return: node at index
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i = 0;


	current = *head;
	while (current != NULL)
	{
		if (i == index)
		{
			current->next->prev = current->prev;
			current->prev->next = current->next;
			free(current);
			return (1);
		}
		current = current->next;
		i++;
	}
	return (-1);
}
