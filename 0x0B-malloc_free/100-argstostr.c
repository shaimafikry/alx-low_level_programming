#include "main.h"
#include <stdlib.h>
/**
* argstostr - concatenates all arguments together
* @ac: integer
* @av: pointer string
* Return: return pointer to string that has all arguments
*/
char *argstostr(int ac, char **av)
{
	int i, m;
	int **str;
	int count = ac -1;

	if ( ac == 0 || av == NULL)
		return (NULL);

 	str = malloc(sizeof(char) * (count + (ac - 2)));
	if (str == NULL)
	{
		free (str);
		return (NULL);
	}
	m = 1;
	for (i = 0; i < count; i++)
	{
		str[i] = malloc (sizeof(av[m])) ;
		m++;
	}
	i = 0;
	m = 1;
	while (m < count)
	{
		str[i] = av[m];
		i++;
		str[i] = "\n";
		i++;
		m++;	
	}
	return (str);
}
