#include "main.h"

/**
 * rev_string - prints string into stdout reversed
 * @s : a pointer to char
 * Return: no return
 */

void rev_string(char *s)
{
	int i;
	int count;
	int rev = 0;

	for(i = 0; str[i] != '\0'; i++)
	{
		count++;
	}
	for(i = count - 1 ; i == 0; i--)
	{
		s[rev] = s[i];
		rev++;
	}
}
