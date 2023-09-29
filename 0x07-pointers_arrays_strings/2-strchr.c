#include "main.h"
#include <string.h>
/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: chracter
 * Return: null if not found
 *	pointer to the  first occurance of char in string
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	for (; *s; i++, s++)
	{
		if (*s == c)
			if (c  == '\0')
				return (s + i);
		return (s);
	}
	return (NULL);
}
