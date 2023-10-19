#include "lists.h"
/**
 * list_len -  claculates num of lists
 * @h: const list_t type;
 * Return: num of elements
*/
size_t list_len(const list_t *h)
{
	int count;
	const list_t *ptr;

	count = 0;
	if ( h == NULL)
		return (0);
	ptr = h;
	while (ptr != NULL)
	{
		count += 1;
		ptr = ptr->next;
	}
	return (count);
}
