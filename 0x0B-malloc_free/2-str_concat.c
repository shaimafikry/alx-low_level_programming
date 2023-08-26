#include "main.h"
#include <stdlib.h>
/**
  * _strdup - prints a copy string
  * @s1: pointer to string
  * @s2: pointer to string
  * Return:  a pointer to the string with 2 string , or NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
	char *arr;
	int count, i, m;

	count = 0;
	m = 0;
	if (s1 == NULL)
		return (s2);
	if (s2 == NULL)
		return (s1);
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	for ( i = 0; s1[i] != '\0'; i++)
		count++;
	for ( i = 0; s2[i] != '\0'; i++)
		count++;
	count++;
	arr = malloc(sizeof(char) * count);
	if (arr == NULL)
		return (NULL);
	else
	{
		for (i = 0; i < count; i++)
		{
			if (s1[i] == '\0')
				while ( i < count)
				{
					arr[i] = s2[m];
					i++;
					m++;
				}
			arr[i] = s1[i];
		}
		return (arr);
	}
}
