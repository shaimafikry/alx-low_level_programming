#include "main.h"
/**
 * print_alphabet() entry point
 * no arguments
 * Return :no return func
 **/
void print_alphabet()
{
	int n;

	for (n = 97; n <= 122; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
