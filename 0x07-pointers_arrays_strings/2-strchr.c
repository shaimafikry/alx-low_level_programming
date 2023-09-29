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

	for (i = 0; s[i] <= '\0'; i++)
	{
		if (s[i] == c)
		{
			if (c  == '\0')
				return (s + i);
			return (s);
		}
	}
	return (NULL);
}
