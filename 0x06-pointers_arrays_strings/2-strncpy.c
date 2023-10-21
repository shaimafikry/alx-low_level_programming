#include "main.h"

/**
 * _strncpy - copy strings src to dest
 * @dest : a pointer to char
 * @src  : a pointer to char
 * @n: num of copied char
 * Return: return pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
