#include "main.h"

/**
 * puts_half - prints halfof string
 * @str : a pointer to char
 * Return: no return
 */

void puts_half(char *str)
{
	int i;
	int count = 0;
	int n;
	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}
	n = (count - 1) / 2;
	for (i = n - 1; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
