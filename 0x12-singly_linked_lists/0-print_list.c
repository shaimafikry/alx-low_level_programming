#include "lists.h"
/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: pointer to struct
 * Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
	int i;
	list_t *m;

	i = 0;
	if (h == NULL)
	{
		return (i);
	}
	m = malloc(sizeof(list_t));
	if (m == NULL)
		return (-1);
	m->str = malloc(sizeof(h->str));
	if (m->str == NULL)
	{
		free(m);
		return (-1);
	}
	m->str = h->str;
	m->len = h->len;
	m->next = h->next;
	while (m != NULL)
	{
		if (m->str == NULL)
		{
			m->str = "(nil)";
			m->len = 0;
		}
		printf("[%d] %s\n", m->len, m->str);
		m = m->next;
		i++;
	}
	return (i);
}
