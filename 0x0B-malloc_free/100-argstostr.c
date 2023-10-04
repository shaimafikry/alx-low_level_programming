#include "main.h"
#include <stdlib.h>
/**
 * argstostr - a function that concatenates all the arguments of your program
 * @av: string
 * @ac: integer
 * Return: pointer to an array
*/
char *argstostr(int ac, char **av)
{
	int i, m, l;
	char *str;

	if ( ac == 0 || av == NULL)
		return (NULL);
	str = malloc(sizeof(char *) * (sizeof(av)/sizeof(av[0][0])));
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
		for (i = 0, l = 0; i < ac; l++, i++)
		{
			for (m = 0; av[i][m]; m++)
				str[i] = av[i][m];
			m = 0;
			if (av[i][m] == ' ')
				str[l] = '\n';
		}

	return (str);
}
