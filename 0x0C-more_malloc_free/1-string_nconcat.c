#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1 : a pointer to string 1
 * @s2 : a pointer to string 2
 * @n : number of bytes to concat
 * Return: return a new pointer to s1
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	int count = 0, i = 0, m = 0;
	unsigned int t = 0;

	s3 = malloc((strlen(s1) + strlen(s2)) + 2);
	if (n >= strlen(s2))
	{
		count = (strlen(s1) + strlen(s2) + 1);
		for (i = 0; i < count; i++)
		{
			if (s1[m] == '\0')
			{
				s3[i] = s2[t];
				t++;
			}
			else
			{
				s3[i] = s1[m];
				m++;
			}
		}
	}
	else
	{
		count = (strlen(s1) + n + 1);
		for (i = 0; i < count; i++)
		{
			if (s1[m] == '\0')
			{
				while (t < n)
				{
					s3[i] = s2[t];
					t++;
					i++;
				}
			}
			else
			{
				s3[i] = s1[m];
				m++;
			}
		}
	}
	return (s3);
}
