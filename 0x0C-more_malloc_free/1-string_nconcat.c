#include "main.h"
/**
 * string_nconcat - function that concatenates two strings.
 * @n: integer
 * @s1: pointer
 * @s2: pointer
 * Return: pointer to memry space
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, count, m, c1, c2;

	c1 = 0, c2 = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		c1++;
	for (i = 0; s2[i] != '\0'; i++)
		c2++;
	count = n >= c2 ?  c1 + c2 : c1 + n + 1;
	str = malloc(sizeof(char) * count);
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	for (m = 0, i = 0; s1[m] != '\0'; m++)
	{
		str[i] = s1[m];
		i++;
	}
	if (n >= sizeof(s2))
		for (m = 0; s2[m] != '\0'; m++)
		{
			str[i] = s2[m];
			i++;
		}
	else
		for (m = 0; m < n; m++)
		{
			str[i] = s2[m];
			i++;
		}
	str[count - 1] = '\0';
	return (str);
}
