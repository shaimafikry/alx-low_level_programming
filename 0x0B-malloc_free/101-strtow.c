#include "main.h"
/**
  * _strtow - split two stringds
  * @str: string
  * Return:  return pointer to string with words
char **strtow(char *str)
{
	int i, j;
	char **str_s;
	int len;

	if (str == NULL || str == "")
		return (NULL);
	
	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	len++;
	str_s = malloc (sizeof(char *) * len);
	if (str_s == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		str_s[i] = malloc(sizeof(char) * len);
		if (str_s[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(str_s[j]);
			free(str_s);
			return (NULL);
		}
	}
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < len; j++)
		{
			if (str[j] != ' ')
				str_s[i][j] = str[j];
		}
	}
	strs_s[len] = NULL;
	return (str_s);
				
}
