#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - assigns memory to a pointer
 * @b : unsigned integer
 * Return : pointer to a memory
 */
void *malloc_checked(unsigned int b)
{
	int *pointer;
	
	pointer = malloc(b);
	if (pointer == NULL)
	{
		exit(98);
	}
	return(pointer);
}
