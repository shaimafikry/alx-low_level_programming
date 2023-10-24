#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list.
 * @head: struct pointer
 * Return: null
*/
void free_listint2(listint_t **head)
{
	if (*head != NULL)
		*head = NULL;
}
