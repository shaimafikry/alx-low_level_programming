#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of linked list.
 * @head: struct pointer linked list
 * Return: sum
*/
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *ptr;

	ptr = head;
	sum = 0;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
