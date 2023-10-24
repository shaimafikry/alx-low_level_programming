#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: struct pointer linked list
 * @idx: where code shoud be added
 * @n: data
 * Return: pointer to the new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *ptr;
	listint_t *new;
	listint_t *current;

	i = 0;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	ptr = *head;
if (idx == 0)
	{
		new->next = (*head);
		(*head) = new;
		return (new);
	}
	while (ptr != NULL)
	{
		current = ptr->next;
		if (i == idx - 1)
		{
			ptr->next = new;
			new->next = current;
			return (new);
		}
		ptr = ptr->next;
		i++;
	}
	return (NULL);
}
