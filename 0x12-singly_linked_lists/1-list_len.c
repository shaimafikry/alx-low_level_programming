#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to list
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *curr = h;
	while(curr != NULL)
	{
		count++;
		curr = curr->next;
	}
	return count;
}
