#include "main.h"
#include <string.h>
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string
 * @accept: substring
 * Return: ptr to the byte in s matches one of bytes in accept
 *	NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, m;

	i = 0;
	while (s[i] != '\0')
	{
		for (m = 0; accept[m] != '\0'; m++)
		{
			if (s[i] == accept[m])
				return (s + i);
		}
		i++;
	}
	return (NULL);
}
