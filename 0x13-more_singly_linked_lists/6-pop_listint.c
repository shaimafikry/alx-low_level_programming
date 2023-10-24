#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * @head: stuct
 * Return: and returns the head node’s data (n).
*/
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int n;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	ptr = *head;
	*head = (*head)->next;
	free(ptr);
	return (n);
}
