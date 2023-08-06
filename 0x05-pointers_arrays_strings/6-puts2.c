#include "main.h"

/**
 * puts2 - prints every other character
 * @str : a pointer to char
 * Return: no return
 */

void puts2(char *str)
{
	int i = 0;
 int count = 0;

for (i = 0; str[i] != '\0; i++)
	{
		count++;
	}
	for (i = 0; i < count; i+2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
