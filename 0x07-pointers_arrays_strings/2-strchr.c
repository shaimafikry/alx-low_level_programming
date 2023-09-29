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

	for (; *s; s++)
	{
		if (*s == c)
			return (s + i);
	}
	return (NULL);
}
