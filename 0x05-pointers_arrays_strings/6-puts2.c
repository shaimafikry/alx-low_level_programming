#include "main.h"

/**
 * puts2 - prints every other character
 * @str : a pointer to char
 * Return: no return
 */

void puts2(char *str)
{
	int i;

	while (str[i])
	{
		_putchar(str[i]);
i+2;
	}
	_putchar('\n');
}
