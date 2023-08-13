#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb : unsigned integer
 * @size : unsigned integer
 * Return: returns a pointer to the allocated memory.
 *	If nmemb or size is 0, then _calloc returns NULL
 *	If malloc fails, then _calloc returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *mem;
	unsigned int num;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	num = 0;
	mem = malloc(size * nmemb);
	if (mem == NULL)
		return (NULL);
	while (num < (size * nmemb))
	{
		mem[num] = 0;
		num++;
	}
	return (mem);
}
