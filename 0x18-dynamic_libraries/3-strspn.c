#include "main.h"
/**
 * _strspn - gets a length of a prefix substring
 * @s: string
 * @accept: substring
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, m, count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == ',')
			break;
		for (m = 0; accept[m] != '\0'; m++)
		{
			if (accept[m] == s[i])
				count++;
		}
		i++;
	}
	return (count);
}

