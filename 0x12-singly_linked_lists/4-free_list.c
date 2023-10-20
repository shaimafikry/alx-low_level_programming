#include "lists.h"
/**
 * free_list - free list
 * @head: list_t single list struct
 * Return: no return
*/
void free_list(list_t *head)
{
	list_t *check;
	while (head != NULL)
	{
		check = head;
		head = head->next;
		free(check->str);
		free(check);
	}
}
