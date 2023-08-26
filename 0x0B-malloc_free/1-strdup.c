#include "main.h"
#include <stdlib.h>
/**
  * _strdup - prints a copy string
  * @str: pointer to dtring
  * Return:  a pointer to the copied string , or NULL if it fails
 */
char *_strdup(char *str)
{
	char *ptr;
	int count;
	int i;

	count = 0;
	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}
	ptr = malloc(sizeof(char) * count + 1);
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
