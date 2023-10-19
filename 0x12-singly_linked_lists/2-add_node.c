#include "lists.h"
/**
 * add_node - adds node to single list
 * 
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *n;
	
	if (head == NULL)
		return (NULL);
	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);
	n->str = malloc(sizeof(char *));
	if (n->str == NULL)
	{
		free(n);
		return (NULL);
	}
	n->str = strdup(str);
	n->len = (*head)->len;
	n->next = (*head);
	(*head) = n;
	return (n);
}
