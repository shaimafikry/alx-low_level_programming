#include "lists.h"
/**
 * listint_len - prints all the elements of a listint_t list.
 * @h: pointer to struct
 * Return: the numbers of nodes
*/
size_t listint_len(const listint_t *h)
{
	int i;

	i = 0;
	if (h == NULL)
		return (i);
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
