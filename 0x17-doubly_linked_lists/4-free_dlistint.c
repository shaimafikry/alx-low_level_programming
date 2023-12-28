#include "lists.h"
/**
 * free_dlistint - free lists
 * @head: pointer to the first node
 * Return: none
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
