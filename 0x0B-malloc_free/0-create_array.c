#include "main.h"
#include <stdlib.h>
/**
 * create_array -  creates array and initialize all of it to a special char
 * @size: size of arry
 * @c: special char
 * Return: pointer to an array
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arry;

	if (size == 0)
		return (NULL);
	arry = malloc(size * (sizeof(char)));
	if (arry != NULL)
	{
		for (i = 0; i < size; i++)
			arry[i] = c;
		return (arry);
	}
	else
	{
		free(arry);
		return (NULL);
	}
}
