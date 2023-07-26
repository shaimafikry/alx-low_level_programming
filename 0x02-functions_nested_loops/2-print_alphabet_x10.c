#include "main.h"

/*
 * main - Entry point
 * function
 * Return : 0 Always success
 */
/*
 * print_alphabet_x10() - prints lowercase alphabet
 * no arguments
 * Return :no return value
 */
void print_alphabet_x10(void)
{
	int x;
	int n;

	for (x = 0; x < 10; x++)
	{
		for (n = 97; n <= 122; n++)
		{
			_putchar(n);
		}
	_putchar('\n');
	}
}
