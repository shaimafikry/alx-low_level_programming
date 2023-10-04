#include "main.h"
#include <stdlib.h>

/**
 * str_concat -  function that concatenates two strings.
 * @s1: string
 * @s2: string
 * Return: pointer to string
*/
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, siz1, siz2, tot, m;

	siz1 = 0;
	siz2 = 0;
	if (s1 == NULL)
		s1[0] = '\0';
	if (s2 == NULL)
		s2[0] = '\0';
	for (i = 0; s1[i] != '\0'; i++)
		siz1++;
	for (i = 0; s2[i] != '\0'; i++)
		siz2++;
	tot = (siz1 + siz2) + 1;
	str = malloc(tot * (sizeof(char)));
	if (str == NULL)
		return (NULL);
	for (i = 0, m = 0; i < tot; i++, m++)
	{
		if (s1[m] != '\0')
			str[i] = s1[m];
		else
			break;
	}
	for (m = 0; i < tot; i++, m++)
	{
		if (s2[m] != '\0')
			str[i] = s2[m];
	}
	str[tot - 1] = '\0';
	return (str);
}
