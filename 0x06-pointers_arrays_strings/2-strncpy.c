#include "main.h"

/**
 * _strcpy - copy strings src to dest
 * @dest : a pointer to char
 * @src  : a pointer to char
 * Return: return pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, count;

	count = 0;
	for (i = 0; src[i] != '\0'; i++)
		count++;
	if (n > count)
	{
		for (i = 0; src[i] != '\0'; i++)
		{
			dest[i] = src[i];
		}
	}
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
