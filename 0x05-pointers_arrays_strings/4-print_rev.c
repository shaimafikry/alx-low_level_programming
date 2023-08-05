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

	for(i = 0; str[i] != '\0'; i++)
	{
		count++;
	}
	for(i = count - 1 ; i == 0; i--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

