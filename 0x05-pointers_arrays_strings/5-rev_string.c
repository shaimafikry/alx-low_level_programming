#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - prints string into stdout reversed
 * @s : a pointer to char
 * Return: no return
 */

void rev_string(char *s)
{
	int i;
	int count = 0;
	char rev = s[0];
	int m = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	for (i = count - 1 ; i >= 0; i--, m++)
	{
		rev = s[m];
		s[m] = s[i];
		s[i] = rev;
	}
