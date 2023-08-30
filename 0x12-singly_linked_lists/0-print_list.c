#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to list
 * Return: the number of nodes
 */





size_t print_list(const list_t *h)
{
	int count;
	list_t *hd = header;

	count = 0;
	if ((*h).str == NULL || (*h).len == 0)
		printf("[0] (nil)");

	while  (next != NULL)
	{
		(*h).next = next =  (*h).next;
		count++;
	}
	return (count);


}
