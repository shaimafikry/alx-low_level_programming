#include "main.h"
/**
 * _calloc -  function that allocates memory for an array, using malloc.
 * @size: integer
 * @nmemb: integer
 * Return: pointer to memry space
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (nmemb == 0 || size  == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
		arr[i] = 0;
	return (arr);
}
