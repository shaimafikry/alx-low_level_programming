#include "main.h"
#include <stdio.h>
/**
 * _strncat - adding n src to dest
 * @dest : a pointer to char
 * @src  : a pointer to char
 * @n : n nmbers to be copied
 * Return: return pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, co_dest, count2;

	count2 = 0, co_dest = 0;
	for (i = 0; dest[i] != '\0'; i++)
		co_dest++;
	for (i = 0; src[i] != '\0'; i++)
		count2++;
	if (n > count2)
	{
		for (i = 0; i <= count2; i++)
		{
			dest[co_dest] = src[i];
			co_dest++;
		}
	}
	for (i = 0; i < n; i++)
	{
		dest[co_dest] = src[i];
		co_dest++;
	}
	return (dest);
}
