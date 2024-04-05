#include "main.h"

/**
 * cap_string - converts lower to cpas
 * @str : a pointer to char
 * Return: return pointer to new one
 */

char *cap_string(char *str)
{
	int i = 0, m = 0;
	char *word_sep = " \t\n,;.!?{}()\"";

	if (str[0] >= 97 && str[0] <= 122)
		str[0] -= 32;
	while (str[i] != '\0')
	{
		m = 0;
		while (word_sep[m] != '\0')
		{
			if (str[i] == word_sep[m])
			{
				i++;
				if (str[i] >= 97 && str[i] <= 122)
					str[i] -= 32;
				else
					i--;
			}
			m++;
		}
		i++;
	}
return (str);
}
