#include "main.h"

/**
 * puts2 - prints every other character
 * @str : a pointer to char
 * Return: no return
 */

void puts2(char *str)
{
	int i = 0;

	for (str[i]!='\0';i++2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
