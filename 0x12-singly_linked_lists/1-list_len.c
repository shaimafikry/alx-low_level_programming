#include "lists.h"
/**
 * list_len -  claculates num of lists
 * @h: const list_t type;
 * Return: num of elements
*/
size_t list_len(const list_t *h)
{
	int count;

	count = 0;
	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		count += 1;
		h = h->next;
	}
	return (count);
}
