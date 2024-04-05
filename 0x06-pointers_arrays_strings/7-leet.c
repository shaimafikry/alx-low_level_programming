#include "main.h"
/**
 * leet - function that encodes a string into 1337.
 * @str : a pointer to char
 * Return: return pointer to dest
 */

char *leet(char *str)
{
	int i = 0, m = 0;
	char *let = "4400773311";
	char *cr = "aAoOtTeElL";

	while (str[i] != '\0')
	{
		m = 0;
		while (cr[m] != '\0')
		{
			if (str[i] == cr[m])
			{
				str[i] = let[m];
			}
			m++;
		}
		i++;
	}
	return (str);
}
