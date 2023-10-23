#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * @head: stuct
 * Return: and returns the head node’s data (n).
*/
int pop_listint(listint_t **head)
{
	int n;
	listint_t *ptr;

	ptr = *head;
	n = ptr->n;
	if (*head == NULL)
		return (0);
	*head = ptr->next;
	return (n);
}
