#include "main.h"

/**
 * _atoi - takes char returns int
 * @s : a pointer to char
 * Return: return int
 */

int _atoi(char *s)
{
	int i, neg = 0;
	double result = 0;
	int num = 0;
	int check = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			check++;
		}
	}
	if (check == 0)
		return (0);
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ';')
			break;
		if (s[i] == '-')
			neg++;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			num = (s[i] - '0');
			result = result * 10 + num;
		}
	}
	if (neg % 2 == 0)
		return (result);
	else
		return (-result);
}
