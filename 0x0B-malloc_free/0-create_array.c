#include "main.h"
#include <stdlib.h>
/**
  * create_array - prints a if a string is palindrom
  * @c: character
  * @size: araay size
  * Return:  a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	i = 0;
	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	if (arr != NULL)
	{
	while (i < size )
	{
		&arr[i] = c;
		i++;
	}
	return (arr);
	}
	else
		return (NULL);
}
