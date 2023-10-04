#include "main.h"

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
	i = 0;
	while (src[i] != '\0')
	{
		count2++;
		i++;
	}
	i = 0;
	if (n > count2)
	{
		while (i <= count2)
		{
			dest[co_dest] = src[i];
			i++;
			co_dest++;
		}
	}
		i = 0;
		if (n > 0)
		{
			while (i < n)
			{
			dest[co_dest] = src[i];
			i++;
			co_dest++;
			}
		}
		return (dest);
}
