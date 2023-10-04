#include "main.h"
#include <stdlib.h>
/**
 * _strdup -  creates array and initialize all of it to a special char
 * @str: string
 * Return: pointer to an array
*/
char *_strdup(char *str)
{
	int i;
	char *arry;
	int size;

	if (str == NULL)
		return (NULL);
	size = 0;
	for (i = 0; str[i] != '\0'; i++)
		size++;
	arry = malloc(sizeof(char) * size);
	if (arry == NULL)
	{
		free(arry);
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
		arry[i] = str[i];
	return (arry);
}
