#include "lists.h"
/**
 * add_node_end - adds node at end of single list
 * @head: struct head pointer
 * @str: string
 * Return: pointer to a new node
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n, *check;

	if (head == NULL || str == NULL)
		return (NULL);
	check = *head;
	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);
	n->str = strdup(str);
	n->len = strlen(str);
	n->next = NULL;
	if (*head == NULL)
	{
		*head = n;
		return (n);
	}
	while (check->next != NULL)
		check = check->next;
	check->next = n;
	return (n);
}
