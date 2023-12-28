#include "lists.h"
/**
 * add_dnodeint - adds new node
 * @head: pointer to the first node
 * @n: data;
 * Return: new node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL || (*head) == NULL)
		return (NULL);

	new->n = n;
	new = (*head);
	new->next = (*head)->next;
	new->prev = NULL;
	(*head) = new;

	return (new);
}
