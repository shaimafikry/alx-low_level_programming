#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	int count,i ;

	count = 0;
	while  ( (*h).*next != NULL)
	{
		*next =  (*h).*next;
		count++;
	}
	
	if ((*h).str == NULL || (*h).len == 0)
		printf("[0] (nil)");
	if (i = 0; i < count; i++)
		printf("%s", (*h).str);

	
	return (count);
}
