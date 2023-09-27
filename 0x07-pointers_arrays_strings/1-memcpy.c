#include "main.h"
#include <string.h>
/**
 * _memcpy - copies memory area
 * @dest: the destination
 * @src: the sring sourcw
 * @n: number of bytes copied
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		src[i] = dest[i];
		i++;
	}
	return (dest);
}
