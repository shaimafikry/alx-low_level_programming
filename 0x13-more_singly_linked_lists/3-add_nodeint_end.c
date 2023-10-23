#include "lists.h"
/**
 * add_nodeint_end - adds new nodes at the end
 * @head: start of the list
 * @n: data
 * Return: new adress or null if failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *ptr;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	ptr = *head;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = new;
	return (new);
}
