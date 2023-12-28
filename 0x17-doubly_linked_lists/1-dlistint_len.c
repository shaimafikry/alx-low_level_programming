#include "lists.h"
/**
 * dlistint_len - counts num of elemnts in list
 * @h: d linked list
 * Return: num of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0; /*for counting*/

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
