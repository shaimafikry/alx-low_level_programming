#include "main.h"
/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: integer
 * Return: pointer to memry space
*/
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		free(ptr);
		exit(98);
	}
	return (ptr);
}
