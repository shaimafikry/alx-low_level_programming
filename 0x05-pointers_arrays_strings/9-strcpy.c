#include "main.h"

/**
 * _strcpy - copy strings src to dest
 * @dest : a pointer to char
 * @src  : a pointer to char
 * Return: return pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	char p_dest = *dest;

	for (i = 0; src[i] == '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (p_dest);
}

