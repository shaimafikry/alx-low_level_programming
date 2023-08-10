#include "main.h"
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
	int count;
	int i = 0,m = 0, t = 0;

	s3 = malloc(sizeof(*s1) + sizeof(*s2) + 1);
	count =  strlen(s1) + strlen(s2);
	if (n >= strlen(s2)
	{
		for (i = 0; i < count + 1;i++)
		{
			if ( s1[m] != '\0')
			{
				s3[i] = s1[m];
				m++;
			}
			else
			{
				if (s2[t] != '\0')
				{
					s3[i] = s2[t];
					t++;
				}
				else
					break;
			}
			i++;
		}
	}
	else
	{
		while (i <= (strlen(s1) + n)
                {
                        if ( s1[m] != '\0')
                        {
                                s3[i] = s1[m];
                                m++;
                        }
                        else
                        {
                                while (t <= n)
                                {
                                        s3[i] = s2[t];
                                        t++;
                                }
                        i++;
                }
	}
		return (s3 + 0);
}
