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
	int rev = 0;
 char *m == *s;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	for (i = count - 1 ; i >= 0; i--, rev++)
	{
m[rev] = s[i];
	
	}
for (i = 0; i < count; i++)
	{
s[i] = m[i];
	
	}
}
