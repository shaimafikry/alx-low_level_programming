#include "lists.h"
/**
 * add_node - adds node at begining of single list
 * @head: struct head pointer
 * @str: string
 * Return: pointer to a new node
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *n;

	if (head == NULL || str == NULL)
		return (NULL);
	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);
	n->str = strdup(str);
	n->len = strlen(str);
	n->next = *head;
	*head = n;
	return (*head);
}
