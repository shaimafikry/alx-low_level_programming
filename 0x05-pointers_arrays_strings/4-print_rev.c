#include "main.h"

/**
 * print_rev - prints string into stdout reversed
 * @s : a pointer to char
 * Return: no return
 */

void print_rev(char *s)
{
	int i;
	int count;
	int num;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	num = count -1;
	for (i = num; i == 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

