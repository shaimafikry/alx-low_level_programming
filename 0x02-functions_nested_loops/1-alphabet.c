#include "main.h"
/**
 * print_alphabet() - prints lowercase alphabet
 * no arguments
 * Return :no return func
 **/
void print_alphabet(void)
{
	int n;

	for (n = 97; n <= 122; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
