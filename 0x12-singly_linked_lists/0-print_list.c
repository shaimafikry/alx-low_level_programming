#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * list_t: structure
 * @h: pointer to list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
    const list_t *current;
    unsigned int count;

    current = h;
    count = 0;
    while (current != NULL)
    {
        if (current->str == NULL)
            printf("[0] (nil)\n");
        else
            printf("[%d] %s\n", current->len, current->str);
        count++;
        current = current->next;
    }

    return (count);
}
