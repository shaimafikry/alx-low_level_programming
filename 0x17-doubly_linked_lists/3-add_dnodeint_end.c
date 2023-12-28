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
	dlistint_t *current;

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
	current = (*head);
	while (current->next != NULL)
	{
		current = current->next;
	}
	new->next = NULL;
	new->prev = current;
	current->next = new;
	return (new);
}
