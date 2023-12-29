#include "lists.h"
/**
 * delete_dnodeint_at_index -  delete node at the index
 * @head: list
 * @index: num of node
 * Return: node at index
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i = 0;

	if (!(*head))
		return (-1);
	current = *head;
	if (index == 0)
	{
		(*head) = current->next;
		if ((*head) != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	while (current != NULL)
	{
		if (i == index)
		{
			if (current->next)
				current->next->prev = current->prev;
			if (current->prev)
				current->prev->next = current->next;
			free(current);
			return (1);
		}
		current = current->next;
		i++;
	}
	return (-1);
}
