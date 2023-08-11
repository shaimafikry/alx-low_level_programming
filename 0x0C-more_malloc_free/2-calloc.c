#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb : a pointer to string 1
 * @size : a pointer to string 2
 * Return: returns a pointer to the allocated memory.
 *	If nmemb or size is 0, then _calloc returns NULL
 *	If malloc fails, then _calloc returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *mem;

	mem = malloc(nmemb * size);
	if ((size == 0 || nmemb == 0) || mem == NULL)
		return (NULL);
	else
		return (mem);
}
