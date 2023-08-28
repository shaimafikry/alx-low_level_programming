#include "main.h"
#include <stdlib.h>
/**
* argstostr - concatenates all arguments together
* @ac: integer
* @av: pointer string
* Return: return pointer to string that has all arguments
*/
char *argstostr(int ac, char **av)
#include <stdlib.h>
#include <string.h>

char *argstostr(int ac, char **av)
{
	int i, j;
	int len = 0;
	char *str;

	if (ac <= 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len ++;
		len++;
	}
	str = malloc(sizeof(char) * len);
	if (str == NULL)
		return (NULL);
	len = 0;
    	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++) {
			str[len++] = av[i][j];
		}
		str[len++] = '\n';
	}

    	str[len] = '\0';

    return (str);
}
