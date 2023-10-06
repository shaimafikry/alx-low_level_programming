#include "main.h"
/**
 * _calloc -  function that allocates memory for an array, using malloc.
 * @size: integer
 * @nmemb: integer
 * Return: pointer to memry space
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (nmemb == 0 || size  == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	return (arr);
}
