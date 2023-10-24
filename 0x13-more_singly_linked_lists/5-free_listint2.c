#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list.
 * @head: struct pointer
 * Return: null
*/
void free_listint2(listint_t **head)
{
	listint_t *check;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		check = *head;
		*head = (*head)->next;
		free(check);
	}
	*head = NULL;
}
