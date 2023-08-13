#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - reallocate memorey
 * @ptr : a pointer to  memory previously allocated
 * @old_size : integer
 * @new_size : integer
 * Return: return a new pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		if (ptr == NULL)
		{
			ptr = malloc(new_size);
		}
		else
		{
			free(ptr);
			ptr = malloc(new_size);
		}
	}
	else
	{
		ptr = malloc(old_size);
	}
		return (ptr);
	
}
