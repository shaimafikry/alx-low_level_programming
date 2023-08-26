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
	/*int i;*/

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	if (arr != NULL)
	{
	while (*arr !=0 )
	{
		*arr = c;
		arr++;
	}
	return (arr);
	}
	else
		return (NULL);
}
