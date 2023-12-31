#include "main.h"
#include <string.h>
/**
 * _strstr - Write a function that locates a substring.
 * @haystack: string
 * @needle: dubdtring
 * Return: pointer to the begining of substring
 *	null if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int m, i, size;

	i = 0;
	size = 0;
	m = 0;
	for (m = 0; needle[m] != '\0'; m++)
		size++;
	if (size == 0)
		return (haystack);
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[m])
			m++;
		else
			m = 0;
		if (size == m)
			return (haystack + (i - m + 1));
		i++;
	}
	return (NULL);
}
