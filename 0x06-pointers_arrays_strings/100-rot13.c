#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @str : a pointer to char
 * Return: return pointer to dest
 */

char *rot13(char *str)
{
	int i = 0, m = 0;
	char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
	"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
	"abcdefghijklmnopqrstuvwxyz"
	"abcdefghijklmnopqrstuvwxyz";

	while (str[i] != '\0')
	{
		m = 0;
		while (alpha[m] != '\0')
		{
			if  (str[i] == alpha[m])
			{
				str[i] = alpha[m + 13];
				break;
			}
			m++;
		}
		i++;
	}
	return (str);
}
