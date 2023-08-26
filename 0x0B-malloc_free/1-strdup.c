#include "main.h"
#include <stdlib.h>
/**
  * create_array - prints a if a string is palindrom
  * @c: character
  * @size: araay size
  * Return:  a pointer to the array, or NULL if it fails
 */
char *_strdup(char *str)
{
	char *ptr;
	int count;
	int i;

	count = 0;
	if (str == NULL)
		return (NULL);
	for (i =0; str[i] != '\0'; i++)
	{
		count++;
	}
		
	ptr = malloc(sizeof(char) * count);
	i = 0;
	if (ptr != NULL)
	{
		while (i < count)
	{
		ptr[i] = str[i];
		i++;
	}
	return (ptr);
	}
	else
		return (NULL);
}
