#include "main.h"
/** 
  * _print_rev_recursion - prints a string inreverse
  * @s: string
  * Return: no return
  */
void _print_rev_recursion(char *s)
{
	if (*s != 0)
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
