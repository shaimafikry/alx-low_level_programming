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
	listint_t *current;
	listint_t *prev;

	if (!(*head == NULL || head == NULL))
	{
		current = *head;
		prev = *head;
		i = 0;
		if (index == 0)
		{
			*head = current->next;
			free(current);
			current = NULL;
		}
		else
		{
			while (current != NULL && i < index)
			{
				prev = current;
				current = current->next;
				i++;
			}
			prev->next = current->next;
			free(current);
			current = NULL;
		}
		return (1);
	}
	return (-1);
}
