#include "main.h"

/**
 * _puts - prints string into stdout
 * @str : a pointer to char
 * Return: no return
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
