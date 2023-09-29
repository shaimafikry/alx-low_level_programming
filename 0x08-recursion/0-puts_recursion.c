#include "main.h"
/**
* _puts_recursion - function that prints a string, followed by a new line.
* @s: string
* Return: no return
*/
void _puts_recursion(char *s)
{
	_putchar(s[0]);
	if (s[0] != '\0')
		_puts_recursion(s + 1);
}
