#include "main.h"
/**
 * _strcmp - copy strings src to dest
 * @s1: a pointer to char
 * @s2: a pointer to char
 * Return: num
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	for (;*s1 !='\0' && *s2 != '\0';i++)
	{
		if (s1[i] > s2[i])
			return (i);
		if (s1[i] < s2[i])
			return (-i);
	}
	return (0);
}
