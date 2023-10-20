#include "lists.h"
/**
 * free_list - free list
 * @head: list_t single list struct
 * Return: no return
*/
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		head = head->next;
	}
}
