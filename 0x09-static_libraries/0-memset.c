#include "main.h"
#include <string.h>
/**
 * _memset - fills memory with constant byte
 * @s: pointer to string
 * @b: character to be filled
 * @n: numbers to be filled
 * Return: pointer to the area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i != n; i++)
	{
		s[i] = b;
	}
	return (s);
}

