#include "lists.h"
/**
  * print_listint - prints all the elements of a listint_t list.
  * @h: pointer
  *
  *
  */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h->next != NULL)
		count++;
	return (count);

  
}
