#include "main.h"
#include <stdlib.h>
/**
  * str_concat - prints a two string in one
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
		s2 = "";
	if (s2 == NULL)
		s1 = "";
	if (s1 == NULL && s2 == NULL)
	{
		return ("");
	}
	for (i = 0; s1[i] != '\0'; i++)
		count++;
	for (i = 0; s2[i] != '\0'; i++)
		count++;
	count++;
	arr = malloc(sizeof(char) * count);
	if (arr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
  		  arr[i] = s1[i];
	for (m = 0; s2[m] != '\0'; m++)
		    arr[i + m] = s2[m];
	arr[i + m] = '\0';
	return (arr);
	/**
 for (i = 0; i < count; i++)
	{
		if (s1[i] == '\0')
			while (i < count)
			{
				arr[i] = s2[m];
				i++;
				m++;
			}
		arr[i] = s1[i];
	}
		return (arr);
  */
}
