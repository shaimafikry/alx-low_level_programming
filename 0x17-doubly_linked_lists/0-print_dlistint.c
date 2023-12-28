#include "lists.h"
/**
 * print_dlistint - prints list
 * @h: pointer to the head
 * Return: num of list elemnts
*/
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0; /*for counting*/

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
