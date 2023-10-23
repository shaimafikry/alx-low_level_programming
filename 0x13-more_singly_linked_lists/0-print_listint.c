#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer to struct
 * Return: the numbers of nodes
*/
size_t print_listint(const listint_t *h)
{
	int i;

	i = 0;
	if (h == NULL)
		return (i);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
