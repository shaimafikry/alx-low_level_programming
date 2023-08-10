#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strcpy - copy strings src to dest
 * @dest : a pointer to char
 * @src  : a pointer to char
 * Return: return pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int count = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		count++;
	}
	
	for (i = 0; i <= count; i++)
	{
		dest[i] = src[i];
	}
	return (dest + 0);
}
