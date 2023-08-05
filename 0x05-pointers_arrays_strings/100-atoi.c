#include "main.h"

/**
 * _atoi - takes char returns int
 * @s : a pointer to char
 * Return: return int
 */

int _atoi(char *s)
{
	int i, neg = 0;
	int result = 0;
	int num = 0;

	for(i = 0; s[i] != '\0'; i++)
	{
		if(s[i] == '-')
			neg++;
		else if(s[i] <= '0' && s[i] > '9')
		{
			result = 0;
		}
		else(s[i] > '0' && s[i] <= '9')
		{
			num = (s[i] - '0');
			result *= 10 + num;
		}
	}
	if(neg / 2)
		return (result);
	else
		return (-result)
}
