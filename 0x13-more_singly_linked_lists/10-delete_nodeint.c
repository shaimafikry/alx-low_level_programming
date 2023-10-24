#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at num index of a linked list.
 * @head: struct pointer linked list
 * @index: where code shoud be added
 * Return: 1 on sucess , -1 on fail
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *ptr;
	listint_t *current;

	i = 0;
	ptr = *head;
if (index == 0)
		{
			*head = NULL;
			return (1);
		}

	while (ptr != NULL)
	{
		current = ptr->next;
		if (i == index - 1)
		{
			ptr->next = current->next;
			free(current);
			return (1);
		}
		ptr = ptr->next;
		i++;
	}
		return (-1);
}
