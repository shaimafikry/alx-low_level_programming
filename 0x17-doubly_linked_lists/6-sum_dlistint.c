#include "lists.h"
/**
 * sum_dlistint - get the sum of nodes
 * @head: list
 * Return: sum
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	unsigned int sum = 0;

	if (head == NULL)
		return (0);
	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
