#include <stdlib.h>
#include <stdio.h>
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
	str = malloc(sizeof(char *) * (sizeof(av) / ac));
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	for (i = 0, l = 0; av[i][m] != '\0'; l++, i++)
	{
		m =0;
		while (av[i][m] != ' ')
		{
			str[l] = av[i][m];
			m++;
			l++;
		}

		str[l] = '\n';
	}

	return (str);
}
int main(int ac, char *av[])
{
    char *s;

    s = argstostr(ac, av);
    if (s == NULL)
    {
        return (1);
    }
    printf("%s", s);
    free(s);
    return (0);
}
