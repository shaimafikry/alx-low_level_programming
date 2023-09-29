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
	int i, m;

	for (i = 0, m = 0; s[i] != '\0'; i++)
		m++;
	for (i = 0; i <= m; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
