#include "lists.h"
/**
 * free_listint - frees linked lists
 * @head: struct pointer
 * Return: no return
*/
void free_listint(listint_t *head)
{
	listint_t *check;
	
	
	while (head != NULL)
	{
		check = head;
		head = head->next;
		free (check);
	}

}
