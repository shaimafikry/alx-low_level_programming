#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - assigns memory to an intger
 * @b : unsigned integer
 * Return: no return
 */
void *malloc_checked(unsigned int b)
{
	int *pointer;
	
	pointer = malloc(sizeof(b));
	if (pointer == NULL)
	{
		exit(98);
	}
	return(pointer);
}
