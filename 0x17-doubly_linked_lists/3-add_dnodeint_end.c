#include "lists.h"
/**
 * add_dnodeint_end - adds node at the end
 * @head: pointer to the first node
 * @n: data
 * Return: pointer to new node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if ((*head) == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		(*head) = new;
	}
	while ((*head)->next != NULL)
	{
		(*head) = (*head)->next;
	}
	new->next = NULL;
	new->prev = (*head);
	(*head)->next = new;
	return (new);
}
