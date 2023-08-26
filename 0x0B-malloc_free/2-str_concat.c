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
	int len1, len2;

	len1 = 0;
	len2 = 0;
	if (s1 == NULL)
		s2 = "";
	if (s2 == NULL)
		s1 = "";
	if (s1 == NULL && s2 == NULL)
	{
		return ("");
	}
	for ( i = 0; s1[i] != '\0'; i++)
		len1++;
	for ( i = 0; s2[i] != '\0'; i++)
		len2++;
	arr = malloc(sizeof(char) * (len1 + len2 + 1));
	if (arr == NULL)
		return (NULL);
	while (i < len1)
		arr[i] = s1[i];
	while ( i < len2)
		arr[i] = s2[i];
	return (arr);
}
